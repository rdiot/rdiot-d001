/* 2.4 Inch TFT Touch LCD Shield (ST7781) [D001] : http://rdiot.tistory.com/257 [RDIoT Demo] */

/* 
- Library1 : https://github.com/samuraijap/TFTLCD-Library  
- Library2 : https://github.com/adafruit/Adafruit-GFX-Library
*/

//ili9341(2.4inch 240x320)
#define TFTWIDTH   240
#define TFTHEIGHT  320
//#define TFTWIDTH   320
//#define TFTHEIGHT  480

identifier == 0x9325
uint16_t identifier = tft.readID();
//TFT size is 240x320
//Found ILI9325 LCD driver 
