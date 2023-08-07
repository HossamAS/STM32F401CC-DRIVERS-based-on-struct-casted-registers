/**************************************/
/* Description : LCD config c File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 00:44:06  12 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef LCD_CONFIG_H
#define LCD_CONFIG_H


#define LCD_MAX_NUM 1
typedef struct{
  struct {
	  uint8_kt  u8Mode   			:1;
	  uint8_kt  u8UsedLines			:1;
	  uint8_kt  u8CharFont			:1;
	  uint8_kt  u8DisplayState		:1;
	  uint8_kt  u8CursorState		:1;
	  uint8_kt  u8CursorBlinkState	:1;
	  uint8_kt  u8IncrementMode		:1;
	  uint8_kt  u8ShiftMode			:1;
  }Config_s;
  struct {
	 Pin_et  Rs_e;
	 Pin_et  Rw_e;
	 Pin_et  En_e;
  }LcdCtrlPins_s;
  	 Pin_et aLcdDataPins_e[8];
}LcdConfig_st;
#endif
