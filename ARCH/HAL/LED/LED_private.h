/**************************************/
/* Description : LED private c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 19:24:48  03 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef LED_PRIVATE_H
#define LED_PRIVATE_H

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

extern Pin_et aLedConfig_e[];

#endif
