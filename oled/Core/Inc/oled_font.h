#ifndef __OLED_FONT_H_
#define __OLED_FONT_H_

#define FONT_WIDTH  6
#define FONT_HEIGHT 8


const unsigned char asc_0806[][6] =
{
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00},// sp
{0x00, 0x00, 0x00, 0x2f, 0x00, 0x00},// !
{0x00, 0x00, 0x07, 0x00, 0x07, 0x00},// "
{0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14},// #
{0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12},// $
{0x00, 0x62, 0x64, 0x08, 0x13, 0x23},// %
{0x00, 0x36, 0x49, 0x55, 0x22, 0x50},// &
{0x00, 0x00, 0x05, 0x03, 0x00, 0x00},// '
{0x00, 0x00, 0x1c, 0x22, 0x41, 0x00},// (
{0x00, 0x00, 0x41, 0x22, 0x1c, 0x00},// )
{0x00, 0x14, 0x08, 0x3E, 0x08, 0x14},// *
{0x00, 0x08, 0x08, 0x3E, 0x08, 0x08},// +
{0x00, 0x00, 0x00, 0xA0, 0x60, 0x00},// ,
{0x00, 0x08, 0x08, 0x08, 0x08, 0x08},// -
{0x00, 0x00, 0x60, 0x60, 0x00, 0x00},// .
{0x00, 0x20, 0x10, 0x08, 0x04, 0x02},// /
{0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E},// 0
{0x00, 0x00, 0x42, 0x7F, 0x40, 0x00},// 1
{0x00, 0x42, 0x61, 0x51, 0x49, 0x46},// 2
{0x00, 0x21, 0x41, 0x45, 0x4B, 0x31},// 3
{0x00, 0x18, 0x14, 0x12, 0x7F, 0x10},// 4
{0x00, 0x27, 0x45, 0x45, 0x45, 0x39},// 5
{0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30},// 6
{0x00, 0x01, 0x71, 0x09, 0x05, 0x03},// 7
{0x00, 0x36, 0x49, 0x49, 0x49, 0x36},// 8
{0x00, 0x06, 0x49, 0x49, 0x29, 0x1E},// 9
{0x00, 0x00, 0x36, 0x36, 0x00, 0x00},// :
{0x00, 0x00, 0x56, 0x36, 0x00, 0x00},// ;
{0x00, 0x08, 0x14, 0x22, 0x41, 0x00},// <
{0x00, 0x14, 0x14, 0x14, 0x14, 0x14},// =
{0x00, 0x00, 0x41, 0x22, 0x14, 0x08},// >
{0x00, 0x02, 0x01, 0x51, 0x09, 0x06},// ?
{0x00, 0x32, 0x49, 0x59, 0x51, 0x3E},// @
{0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C},// A
{0x00, 0x7F, 0x49, 0x49, 0x49, 0x36},// B
{0x00, 0x3E, 0x41, 0x41, 0x41, 0x22},// C
{0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C},// D
{0x00, 0x7F, 0x49, 0x49, 0x49, 0x41},// E
{0x00, 0x7F, 0x09, 0x09, 0x09, 0x01},// F
{0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A},// G
{0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F},// H
{0x00, 0x00, 0x41, 0x7F, 0x41, 0x00},// I
{0x00, 0x20, 0x40, 0x41, 0x3F, 0x01},// J
{0x00, 0x7F, 0x08, 0x14, 0x22, 0x41},// K
{0x00, 0x7F, 0x40, 0x40, 0x40, 0x40},// L
{0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F},// M
{0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F},// N
{0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E},// O
{0x00, 0x7F, 0x09, 0x09, 0x09, 0x06},// P
{0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E},// Q
{0x00, 0x7F, 0x09, 0x19, 0x29, 0x46},// R
{0x00, 0x46, 0x49, 0x49, 0x49, 0x31},// S
{0x00, 0x01, 0x01, 0x7F, 0x01, 0x01},// T
{0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F},// U
{0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F},// V
{0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F},// W
{0x00, 0x63, 0x14, 0x08, 0x14, 0x63},// X
{0x00, 0x07, 0x08, 0x70, 0x08, 0x07},// Y
{0x00, 0x61, 0x51, 0x49, 0x45, 0x43},// Z
{0x00, 0x00, 0x7F, 0x41, 0x41, 0x00},// [
{0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55},// 55
{0x00, 0x00, 0x41, 0x41, 0x7F, 0x00},// ]
{0x00, 0x04, 0x02, 0x01, 0x02, 0x04},// ^
{0x00, 0x40, 0x40, 0x40, 0x40, 0x40},// _
{0x00, 0x00, 0x01, 0x02, 0x04, 0x00},// '
{0x00, 0x20, 0x54, 0x54, 0x54, 0x78},// a
{0x00, 0x7F, 0x48, 0x44, 0x44, 0x38},// b
{0x00, 0x38, 0x44, 0x44, 0x44, 0x20},// c
{0x00, 0x38, 0x44, 0x44, 0x48, 0x7F},// d
{0x00, 0x38, 0x54, 0x54, 0x54, 0x18},// e
{0x00, 0x08, 0x7E, 0x09, 0x01, 0x02},// f
{0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C},// g
{0x00, 0x7F, 0x08, 0x04, 0x04, 0x78},// h
{0x00, 0x00, 0x44, 0x7D, 0x40, 0x00},// i
{0x00, 0x40, 0x80, 0x84, 0x7D, 0x00},// j
{0x00, 0x7F, 0x10, 0x28, 0x44, 0x00},// k
{0x00, 0x00, 0x41, 0x7F, 0x40, 0x00},// l
{0x00, 0x7C, 0x04, 0x18, 0x04, 0x78},// m
{0x00, 0x7C, 0x08, 0x04, 0x04, 0x78},// n
{0x00, 0x38, 0x44, 0x44, 0x44, 0x38},// o
{0x00, 0xFC, 0x24, 0x24, 0x24, 0x18},// p
{0x00, 0x18, 0x24, 0x24, 0x18, 0xFC},// q
{0x00, 0x7C, 0x08, 0x04, 0x04, 0x08},// r
{0x00, 0x48, 0x54, 0x54, 0x54, 0x20},// s
{0x00, 0x04, 0x3F, 0x44, 0x40, 0x20},// t
{0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C},// u
{0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C},// v
{0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C},// w
{0x00, 0x44, 0x28, 0x10, 0x28, 0x44},// x
{0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C},// y
{0x00, 0x44, 0x64, 0x54, 0x4C, 0x44},// z
{0x14, 0x14, 0x14, 0x14, 0x14, 0x14},// horiz lines
};

static const char alpha[128][16] = {
    /* [字库]：[ASC8x16E字库] [数据排列]:从左到右从上到下 [取模方式]:纵向8点下高位 [正负反色]:否 [去掉重复后]共95个字符
[总字符库]：" !"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~"*/

/*-- ID:0,字符:" ",ASCII编码:20,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:1,字符:"!",ASCII编码:21,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x19,0x00,0x00,0x00,0x00,},

/*-- ID:2,字符:""",ASCII编码:22,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x08,0x06,0x01,0x08,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:3,字符:"#",ASCII编码:23,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x20,0xe0,0x3c,0x20,0xe0,0x3c,0x00,0x00,0x02,0x1f,0x02,0x02,0x1f,0x02,0x00,},

/*-- ID:4,字符:"$",ASCII编码:24,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x38,0x44,0x44,0xfe,0x84,0x18,0x00,0x00,0x0c,0x10,0x10,0x7f,0x10,0x0f,0x00,},

/*-- ID:5,字符:"%",ASCII编码:25,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x78,0x84,0x78,0xc0,0x30,0x8c,0x00,0x00,0x00,0x18,0x06,0x01,0x0f,0x10,0x0f,0x00,},

/*-- ID:6,字符:"&",ASCII编码:26,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xf8,0x84,0x44,0xb8,0x80,0x80,0x00,0x0f,0x10,0x11,0x16,0x0c,0x13,0x10,0x08,},

/*-- ID:7,字符:"'",ASCII编码:27,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x09,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:8,字符:"(",ASCII编码:28,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0xf0,0x0c,0x02,0x01,0x00,0x00,0x00,0x00,0x03,0x0c,0x10,0x20,0x00,},

/*-- ID:9,字符:")",ASCII编码:29,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x01,0x02,0x0c,0xf0,0x00,0x00,0x00,0x00,0x20,0x10,0x0c,0x03,0x00,0x00,0x00,},

/*-- ID:10,字符:"*",ASCII编码:2A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x20,0x20,0xc0,0xf8,0xc0,0x20,0x20,0x00,0x01,0x01,0x00,0x07,0x00,0x01,0x01,0x00,},

/*-- ID:11,字符:"+",ASCII编码:2B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x80,0x80,0xf0,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,},

/*-- ID:12,字符:",",ASCII编码:2C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x38,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:13,字符:"-",ASCII编码:2D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:14,字符:".",ASCII编码:2E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:15,字符:"/",ASCII编码:2F,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x80,0x60,0x1c,0x02,0x00,0x00,0x30,0x0c,0x03,0x00,0x00,0x00,0x00,},

/*-- ID:16,字符:"0",ASCII编码:30,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xf0,0x08,0x04,0x04,0x08,0xf0,0x00,0x00,0x07,0x08,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:17,字符:"1",ASCII编码:31,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x08,0x08,0xfc,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,},

/*-- ID:18,字符:"2",ASCII编码:32,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x38,0x04,0x04,0x04,0x84,0x78,0x00,0x00,0x18,0x14,0x12,0x11,0x10,0x18,0x00,},

/*-- ID:19,字符:"3",ASCII编码:33,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x18,0x04,0x84,0x84,0x44,0x38,0x00,0x00,0x0c,0x10,0x10,0x10,0x11,0x0e,0x00,},

/*-- ID:20,字符:"4",ASCII编码:34,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0xc0,0x20,0x18,0xfc,0x00,0x00,0x00,0x03,0x02,0x12,0x12,0x1f,0x12,0x12,},

/*-- ID:21,字符:"5",ASCII编码:35,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xfc,0x44,0x44,0x44,0x84,0x04,0x00,0x00,0x0c,0x10,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:22,字符:"6",ASCII编码:36,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xf0,0x88,0x44,0x44,0x48,0x80,0x00,0x00,0x07,0x08,0x10,0x10,0x10,0x0f,0x00,},

/*-- ID:23,字符:"7",ASCII编码:37,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x0c,0x04,0x04,0xc4,0x34,0x0c,0x00,0x00,0x00,0x00,0x1f,0x00,0x00,0x00,0x00,},

/*-- ID:24,字符:"8",ASCII编码:38,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x38,0x44,0x84,0x84,0x44,0x38,0x00,0x00,0x0e,0x11,0x10,0x10,0x11,0x0e,0x00,},

/*-- ID:25,字符:"9",ASCII编码:39,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xf8,0x04,0x04,0x04,0x88,0xf0,0x00,0x00,0x00,0x09,0x11,0x11,0x08,0x07,0x00,},

/*-- ID:26,字符:":",ASCII编码:3A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,},

/*-- ID:27,字符:";",ASCII编码:3B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x00,},

/*-- ID:28,字符:"<",ASCII编码:3C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x20,0x10,0x08,0x04,0x00,0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00,},

/*-- ID:29,字符:"=",ASCII编码:3D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,},

/*-- ID:30,字符:">",ASCII编码:3E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x04,0x08,0x10,0x20,0x40,0x80,0x00,0x00,0x10,0x08,0x04,0x02,0x01,0x00,0x00,},

/*-- ID:31,字符:"?",ASCII编码:3F,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x38,0x24,0x04,0x84,0x44,0x38,0x00,0x00,0x00,0x00,0x18,0x1b,0x00,0x00,0x00,},

/*-- ID:32,字符:"@",ASCII编码:40,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xe0,0x18,0xe4,0x14,0xf4,0x08,0xf0,0x00,0x03,0x0c,0x13,0x14,0x17,0x14,0x0b,0x00,},

/*-- ID:33,字符:"A",ASCII编码:41,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0xe0,0x1c,0x70,0x80,0x00,0x00,0x10,0x1e,0x11,0x01,0x01,0x13,0x1c,0x10,},

/*-- ID:34,字符:"B",ASCII编码:42,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x44,0x44,0x44,0xb8,0x00,0x00,0x10,0x1f,0x10,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:35,字符:"C",ASCII编码:43,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xe0,0x18,0x04,0x04,0x04,0x04,0x1c,0x00,0x03,0x0c,0x10,0x10,0x10,0x08,0x04,0x00,},

/*-- ID:36,字符:"D",ASCII编码:44,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x04,0x04,0x04,0x08,0xf0,0x00,0x10,0x1f,0x10,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:37,字符:"E",ASCII编码:45,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x44,0x44,0xf4,0x04,0x08,0x00,0x10,0x1f,0x10,0x10,0x11,0x10,0x0c,0x00,},

/*-- ID:38,字符:"F",ASCII编码:46,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x44,0x44,0xf4,0x04,0x08,0x00,0x10,0x1f,0x10,0x00,0x01,0x00,0x00,0x00,},

/*-- ID:39,字符:"G",ASCII编码:47,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xe0,0x18,0x04,0x04,0x04,0x1c,0x00,0x00,0x03,0x0c,0x10,0x10,0x11,0x0f,0x01,0x00,},

/*-- ID:40,字符:"H",ASCII编码:48,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x84,0x80,0x80,0x84,0xfc,0x04,0x10,0x1f,0x10,0x00,0x00,0x10,0x1f,0x10,},

/*-- ID:41,字符:"I",ASCII编码:49,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x04,0x04,0xfc,0x04,0x04,0x00,0x00,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,0x00,},

/*-- ID:42,字符:"J",ASCII编码:4A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x04,0x04,0xfc,0x04,0x04,0x00,0x60,0x40,0x40,0x40,0x3f,0x00,0x00,0x00,},

/*-- ID:43,字符:"K",ASCII编码:4B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x44,0xe0,0x14,0x0c,0x04,0x00,0x10,0x1f,0x10,0x00,0x13,0x1c,0x10,0x00,},

/*-- ID:44,字符:"L",ASCII编码:4C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x04,0x00,0x00,0x00,0x00,0x00,0x10,0x1f,0x10,0x10,0x10,0x10,0x18,0x00,},

/*-- ID:45,字符:"M",ASCII编码:4D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0xfc,0x00,0xfc,0xfc,0x04,0x00,0x10,0x1f,0x00,0x1f,0x00,0x1f,0x10,0x00,},

/*-- ID:46,字符:"N",ASCII编码:4E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x18,0x60,0x80,0x04,0xfc,0x04,0x10,0x1f,0x10,0x00,0x03,0x0c,0x1f,0x00,},

/*-- ID:47,字符:"O",ASCII编码:4F,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xf0,0x08,0x04,0x04,0x04,0x08,0xf0,0x00,0x07,0x08,0x10,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:48,字符:"P",ASCII编码:50,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x84,0x84,0x84,0x84,0x78,0x00,0x10,0x1f,0x10,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:49,字符:"Q",ASCII编码:51,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xf0,0x08,0x04,0x04,0x04,0x08,0xf0,0x00,0x07,0x08,0x14,0x14,0x18,0x28,0x27,0x00,},

/*-- ID:50,字符:"R",ASCII编码:52,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x44,0x44,0xc4,0x44,0x38,0x00,0x10,0x1f,0x10,0x00,0x01,0x06,0x18,0x10,},

/*-- ID:51,字符:"S",ASCII编码:53,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x38,0x44,0x84,0x84,0x04,0x1c,0x00,0x00,0x1c,0x10,0x10,0x10,0x11,0x0e,0x00,},

/*-- ID:52,字符:"T",ASCII编码:54,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x0c,0x04,0x04,0xfc,0x04,0x04,0x0c,0x00,0x00,0x00,0x10,0x1f,0x10,0x00,0x00,0x00,},

/*-- ID:53,字符:"U",ASCII编码:55,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x04,0x00,0x00,0x04,0xfc,0x04,0x00,0x0f,0x10,0x10,0x10,0x10,0x0f,0x00,},

/*-- ID:54,字符:"V",ASCII编码:56,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0x3c,0xc4,0x00,0x00,0xe4,0x1c,0x04,0x00,0x00,0x03,0x1c,0x07,0x00,0x00,0x00,},

/*-- ID:55,字符:"W",ASCII编码:57,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0xfc,0x00,0xfc,0x00,0xfc,0x04,0x00,0x00,0x01,0x1f,0x00,0x1f,0x01,0x00,0x00,},

/*-- ID:56,字符:"X",ASCII编码:58,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0x0c,0x34,0xc0,0xc0,0x34,0x0c,0x04,0x10,0x18,0x16,0x01,0x01,0x16,0x18,0x10,},

/*-- ID:57,字符:"Y",ASCII编码:59,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x04,0x1c,0x64,0x80,0x64,0x1c,0x04,0x00,0x00,0x00,0x10,0x1f,0x10,0x00,0x00,0x00,},

/*-- ID:58,字符:"Z",ASCII编码:5A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x08,0x04,0x04,0x84,0x64,0x1c,0x04,0x00,0x10,0x1c,0x13,0x10,0x10,0x10,0x0c,0x00,},

/*-- ID:59,字符:"[",ASCII编码:5B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0xff,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x3f,0x20,0x20,0x20,0x00,},

/*-- ID:60,字符:"\",ASCII编码:5C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x02,0x1c,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x1c,0x60,0x00,},

/*-- ID:61,字符:"]",ASCII编码:5D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x01,0x01,0x01,0xff,0x00,0x00,0x00,0x00,0x20,0x20,0x20,0x3f,0x00,0x00,0x00,},

/*-- ID:62,字符:"^",ASCII编码:5E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x02,0x01,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:63,字符:"_",ASCII编码:5F,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,},

/*-- ID:64,字符:"`",ASCII编码:60,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x01,0x01,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:65,字符:"a",ASCII编码:61,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0x80,0x00,0x00,0x00,0x0c,0x12,0x12,0x09,0x1f,0x10,0x00,},

/*-- ID:66,字符:"b",ASCII编码:62,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x08,0xf8,0x80,0x40,0x40,0x80,0x00,0x00,0x00,0x1f,0x08,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:67,字符:"c",ASCII编码:63,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x80,0x40,0x40,0x40,0x80,0x00,0x00,0x07,0x08,0x10,0x10,0x10,0x08,0x00,},

/*-- ID:68,字符:"d",ASCII编码:64,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0x48,0xf8,0x00,0x00,0x0f,0x10,0x10,0x10,0x08,0x1f,0x10,},

/*-- ID:69,字符:"e",ASCII编码:65,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0x40,0x80,0x00,0x00,0x0f,0x12,0x12,0x12,0x12,0x0b,0x00,},

/*-- ID:70,字符:"f",ASCII编码:66,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x40,0x40,0xf0,0x48,0x48,0x10,0x00,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,0x00,},

/*-- ID:71,字符:"g",ASCII编码:67,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0xc0,0x40,0x00,0x00,0x35,0x4a,0x4a,0x4a,0x49,0x30,0x00,},

/*-- ID:72,字符:"h",ASCII编码:68,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x08,0xf8,0x80,0x40,0x40,0x40,0x80,0x00,0x10,0x1f,0x10,0x00,0x00,0x10,0x1f,0x10,},

/*-- ID:73,字符:"i",ASCII编码:69,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x40,0x4c,0xcc,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,0x00,},

/*-- ID:74,字符:"j",ASCII编码:6A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x40,0x4c,0xcc,0x00,0x00,0x00,0x60,0x40,0x40,0x40,0x3f,0x00,0x00,},

/*-- ID:75,字符:"k",ASCII编码:6B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x08,0xf8,0x00,0x00,0xc0,0x40,0x40,0x00,0x10,0x1f,0x12,0x03,0x14,0x18,0x10,0x00,},

/*-- ID:76,字符:"l",ASCII编码:6C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x08,0x08,0xfc,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,0x00,},

/*-- ID:77,字符:"m",ASCII编码:6D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x40,0x40,0xc0,0x40,0x40,0x80,0x10,0x1f,0x10,0x00,0x1f,0x10,0x00,0x1f,},

/*-- ID:78,字符:"n",ASCII编码:6E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x80,0x40,0x40,0x40,0x80,0x00,0x10,0x1f,0x10,0x00,0x00,0x10,0x1f,0x10,},

/*-- ID:79,字符:"o",ASCII编码:6F,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0x40,0x80,0x00,0x00,0x0f,0x10,0x10,0x10,0x10,0x0f,0x00,},

/*-- ID:80,字符:"p",ASCII编码:70,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x80,0x40,0x40,0x80,0x00,0x00,0x40,0x7f,0x48,0x10,0x10,0x08,0x07,0x00,},

/*-- ID:81,字符:"q",ASCII编码:71,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x80,0x40,0x40,0x80,0xc0,0x00,0x00,0x07,0x08,0x10,0x10,0x48,0x7f,0x40,},

/*-- ID:82,字符:"r",ASCII编码:72,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0x40,0xc0,0x80,0x40,0x40,0xc0,0x00,0x10,0x10,0x1f,0x10,0x10,0x00,0x00,0x00,},

/*-- ID:83,字符:"s",ASCII编码:73,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x80,0x40,0x40,0x40,0x40,0xc0,0x00,0x00,0x19,0x12,0x12,0x12,0x12,0x0c,0x00,},

/*-- ID:84,字符:"t",ASCII编码:74,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x40,0x40,0xf0,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x0f,0x10,0x10,0x08,0x00,},

/*-- ID:85,字符:"u",ASCII编码:75,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x00,0x00,0x00,0x40,0xc0,0x00,0x00,0x0f,0x10,0x10,0x10,0x08,0x1f,0x10,},

/*-- ID:86,字符:"v",ASCII编码:76,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x40,0x00,0x40,0xc0,0x40,0x00,0x00,0x01,0x06,0x18,0x06,0x01,0x00,0x00,},

/*-- ID:87,字符:"w",ASCII编码:77,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0xc0,0x40,0x00,0x40,0xc0,0x00,0x40,0xc0,0x00,0x07,0x18,0x06,0x03,0x1c,0x03,0x00,},

/*-- ID:88,字符:"x",ASCII编码:78,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x40,0xc0,0x40,0x00,0xc0,0x40,0x00,0x00,0x10,0x18,0x07,0x17,0x18,0x10,0x00,},

/*-- ID:89,字符:"y",ASCII编码:79,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x40,0xc0,0x40,0x00,0x00,0x40,0xc0,0x40,0x00,0x40,0x43,0x3c,0x0c,0x03,0x00,0x00,},

/*-- ID:90,字符:"z",ASCII编码:7A,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0xc0,0x40,0x40,0x40,0xc0,0x40,0x00,0x00,0x10,0x18,0x16,0x11,0x10,0x18,0x00,},

/*-- ID:91,字符:"{",ASCII编码:7B,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0x80,0x7e,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x1f,0x20,0x20,},

/*-- ID:92,字符:"|",ASCII编码:7C,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x3f,0x00,0x00,0x00,},

/*-- ID:93,字符:"}",ASCII编码:7D,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x01,0x01,0x7e,0x80,0x00,0x00,0x00,0x00,0x20,0x20,0x1f,0x00,0x00,0x00,0x00,0x00,},

/*-- ID:94,字符:"~",ASCII编码:7E,对应字:宽x高=8x16,画布:宽W=8 高H=16,共16字节*/
{0x00,0x01,0x00,0x01,0x01,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}

};




#endif