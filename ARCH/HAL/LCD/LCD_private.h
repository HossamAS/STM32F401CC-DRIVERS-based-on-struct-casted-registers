/**************************************/
/* Description : LCD private c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 00:44:06  12 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H

extern LcdConfig_st aLcdConfig_s[];

void LCD_vLcdWriteHelper (uint8_kt u8LcdIndexCpy, uint8_kt u8CmdCpy);
ErrorStatus_et LCD_enuLcdReadHelper (uint8_kt u8LcdIndexCpy, uint8_kt * pu8Cmd);

#endif
