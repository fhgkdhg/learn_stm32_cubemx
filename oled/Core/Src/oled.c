#include "oled.h"
#include "oled_font.h"
#include "spi.h"

static unsigned char oledGram[8][128];

void oledInit(void) {
    OLED_RES_Clr();
    HAL_Delay(100);
    OLED_RES_Set();

    oledWriteByte(0xae, OLED_CMD);
    oledWriteByte(0x00, OLED_CMD);
    oledWriteByte(0x10, OLED_CMD);
    oledWriteByte(0x40, OLED_CMD);
    oledWriteByte(0x81, OLED_CMD);
    oledWriteByte(0xcf, OLED_CMD);
    oledWriteByte(0xa1, OLED_CMD);
    oledWriteByte(0xc8, OLED_CMD);
    oledWriteByte(0xa6, OLED_CMD);
    oledWriteByte(0xa8, OLED_CMD);
    oledWriteByte(0x3f, OLED_CMD);
    oledWriteByte(0xd3, OLED_CMD);
    oledWriteByte(0x00, OLED_CMD);
    oledWriteByte(0xd5, OLED_CMD);
    oledWriteByte(0x80, OLED_CMD);
    oledWriteByte(0xd9, OLED_CMD);
    oledWriteByte(0xf1, OLED_CMD);
    oledWriteByte(0xda, OLED_CMD);
    oledWriteByte(0x12, OLED_CMD);
    oledWriteByte(0xdb, OLED_CMD);
    oledWriteByte(0x40, OLED_CMD);
    oledWriteByte(0x20, OLED_CMD);
    oledWriteByte(0x02, OLED_CMD);
    oledWriteByte(0x8d, OLED_CMD);
    oledWriteByte(0x14, OLED_CMD);
    oledWriteByte(0xa4, OLED_CMD);
    oledWriteByte(0xa6, OLED_CMD);

    oledClear();
    oledWriteByte(0xaf, OLED_CMD);
}

// 屏幕旋转180度
void oledDisplayTurn(unsigned char t) {
    if (t) {
        oledWriteByte(0xc8, OLED_CMD);
        oledWriteByte(0xa1, OLED_CMD);
    } else {
        oledWriteByte(0xc0, OLED_CMD);
        oledWriteByte(0xa0, OLED_CMD);
    }
}


void oledColorTurn(unsigned char t) {
    if (t) oledWriteByte(0xa7, OLED_CMD);
    else oledWriteByte(0xa6, OLED_CMD);
}


void oledWriteByte(unsigned char data, unsigned char mode) {
    if (mode) OLED_DC_Set();
    else OLED_DC_Clr();
    OLED_CS_Clr();

    // trans data
    // for (unsigned char i = 0; i < 8; ++ i) {
    //     OLED_SCK_Clr();
    //     if (data & 0x80) OLED_SDA_Set();
    //     else OLED_SDA_Clr();
    //     OLED_SCK_Set();
    //     data <<= 1;
    // }
    HAL_SPI_Transmit(&hspi1, &data, 1u,0xffff);
    
    OLED_CS_Set();
    OLED_DC_Set();
}

void oledDisplayOff(void) {
    oledWriteByte(0x8d, OLED_CMD);
    oledWriteByte(0x10, OLED_CMD);
    oledWriteByte(0xae, OLED_CMD);
}

void oledDisplayOn(void) {
    oledWriteByte(0x8d, OLED_CMD);
    oledWriteByte(0x14, OLED_CMD);
    oledWriteByte(0xaf, OLED_CMD);
}


void oledRefresh(void) {
    for (unsigned char page = 0; page < 8; ++ page) {
        oledWriteByte(0xb0 + page, OLED_CMD);   // 设置复写起始页
        oledWriteByte(0x00, OLED_CMD);          // 设置起始列底4位
        oledWriteByte(0x10, OLED_CMD);          // 设置起始列高4位
        for (unsigned char col = 0; col < 128; ++ col) {
            oledWriteByte(oledGram[page][col], OLED_DATA);
        }
    }
}

void oledClearPage(unsigned char page) {
    for (unsigned char i = 0; i < 128; ++ i) {
        oledGram[page][i] = 0x00;
    }
}

inline void oledClear(void) {
    for (unsigned char page = 0; page < 8; ++ page) {
        oledClearPage(page);
    }
    oledRefresh();
}

// .---> x: 0 ~ 127
// |
// v  y: 0 ~ 8
void oledDrawPoint(unsigned char x, unsigned char y, unsigned char t) {
    unsigned char page = y / 8, offset = y % 8;
    unsigned char val = 1 << offset;
    if (t) oledGram[page][x] |= val;
    else {
        oledGram[page][x] &= ~val;
    }

}


void oledShowChar(unsigned char row, unsigned char col, char c, unsigned char t) {
    // if (row >= 64 / FONT_HEIGHT or col >= 128 / FONT_WIDTH) {
    //     // error

    //     return;
    // }
    for (int i = 0; i < 6; ++ i) {
        oledGram[row][col * 6 + i] = asc_0806[c - 32][i];
    }
    // oledRefresh();
}

// scroll 1 pixel
inline void oledScrollUp(void) {
    oledScrollUpPage(0u, OLED_HEIGHT / FONT_HEIGHT - 1);
}

void oledScrollUpPage(unsigned char begin_page, unsigned char end_page)
{
    static unsigned char tmp[128];
    for (int i = 0; i < 128; ++ i) tmp[i] = oledGram[begin_page][i] & 0x01;
    for (int p = begin_page; p < end_page; ++ p) {
        for (int i = 0; i < 128; ++ i) {
            oledGram[p][i] >>= 1;
            oledGram[p][i] |= (oledGram[p + 1][i] & 0x01) << 7;
        }
    }
    for (int i = 0; i < 128; ++ i)  {
        oledGram[end_page][i] >>= 1;
        oledGram[end_page][i] |= (tmp[i] & 0x01) << 7;
    }
}


void oledShowString(unsigned char row, unsigned char col, char *s, unsigned char t) {
    int cols = OLED_WIDTH / FONT_WIDTH, rows = OLED_HEIGHT / FONT_HEIGHT;
    unsigned char idx = 0;

    while (s[idx] != 0x00) {
        if (col >= cols) {
            ++ row;
            col = 0;
        }
        if (row >= rows) {
            oledClear();
            row %= rows;
            // oledScrollUpPage(1, 7);
            // row = rows - 1;
        }
        oledShowChar(row, col, s[idx], t);
        ++ col;
        ++ idx;
    }
    oledRefresh();
}
