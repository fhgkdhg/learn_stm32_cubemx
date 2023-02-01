#ifndef _OLED_H
#define _OLED_H

#include "stdint.h"
#include "gpio.h" 

#define OLED_RES_Clr()          HAL_GPIO_WritePin(RES_GPIO_Port, RES_Pin, 0u)
#define OLED_RES_Set()          HAL_GPIO_WritePin(RES_GPIO_Port, RES_Pin, 1u)
#define OLED_DC_Clr()           HAL_GPIO_WritePin(DC_GPIO_Port, DC_Pin, 0u)
#define OLED_DC_Set()           HAL_GPIO_WritePin(DC_GPIO_Port, DC_Pin, 1u)
#define OLED_CS_Clr()           HAL_GPIO_WritePin(CS_GPIO_Port, CS_Pin, 0u)
#define OLED_CS_Set()           HAL_GPIO_WritePin(CS_GPIO_Port, CS_Pin, 1u)
// #define OLED_SDA_Clr()          HAL_GPIO_WritePin(SDA_GPIO_Port, SDA_Pin, 0u)
// #define OLED_SDA_Set()          HAL_GPIO_WritePin(SDA_GPIO_Port, SDA_Pin, 1u)
// #define OLED_SCK_Clr()          HAL_GPIO_WritePin(SCK_GPIO_Port, SCK_Pin, 0u)
// #define OLED_SCK_Set()          HAL_GPIO_WritePin(SCK_GPIO_Port, SCK_Pin, 1u)

#define OLED_CMD 0u
#define OLED_DATA 1u

#define OLED_WIDTH  128
#define OLED_HEIGHT 64

void oledInit(void);
void oledDisplayTurn(unsigned char t);
void oledColorTurn(unsigned char t);
void oledWriteByte(unsigned char data, unsigned char mode);
void oledDisplayOff(void);
void oledDisplayOn(void);
void oledRefresh(void);
void oledClear(void);
void oledClearPage(unsigned char page);
void oledScrollUp(void);
void oledScrollUpPage(unsigned char begin_page, unsigned char end_page);
void oledDrawPoint(unsigned char x, unsigned char y, unsigned char t);
void oledShowChar(unsigned char x, unsigned char y, char c, unsigned char t);
void oledShowString(unsigned char x, unsigned char y, char *s, unsigned char t);

#endif