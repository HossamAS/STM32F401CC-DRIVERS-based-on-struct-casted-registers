/**************************************/
/* Description : LCD private c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 05:45:07  17 Jun 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"


#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"

extern LcdConfig_st aLcdConfig_s[LCD_MAX_NUM];

 void LCD_vLcdWriteHelper(uint8_kt u8LcdIndexCpy, uint8_kt u8CmdCpy)
{
   uint32_kt i=100000;
   GPIO_ct GPIO;
	if(LCD_8BIT_MODE == aLcdConfig_s[u8LcdIndexCpy].Config_s.u8Mode)
	{
		GPIO.GPIO_enuWrite(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e,(uint64_kt)u8CmdCpy, 8);
	}
	else
	{
		GPIO.GPIO_enuWrite(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e,(uint64_kt)(u8CmdCpy >> 4), 4);
		GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___HIGH);
		while(i--);
		GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___LOW);
		i=100000;
		while(i--);
		GPIO.GPIO_enuWrite(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e, (uint64_kt)u8CmdCpy, 4);
	}
		GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___HIGH);
		i=100000;
		while(i--);
		GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___LOW);
		i=100000;
		while(i--);

}

 ErrorStatus_et LCD_enuLcdReadHelper(uint8_kt u8LcdIndexCpy, uint8_kt *pu8Cmd)
{
	 uint32_kt i;
	 ErrorStatus_et ErrorStatusLoc_e=EOK;
	 GPIO_ct GPIO;
	 GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___HIGH);
	i=100000;
	while(i--);
	GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___LOW);
	i=100000;
	while(i--);

	if(LCD_8BIT_MODE == aLcdConfig_s[u8LcdIndexCpy].Config_s.u8Mode)
	{
		ErrorStatusLoc_e =GPIO.GPIO_enuRead(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e, (uint64_kt *)pu8Cmd, 8);
	}

	else
	{
		ErrorStatusLoc_e = GPIO.GPIO_enuRead(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e, (uint64_kt *) pu8Cmd, 4);

		if(EOK == ErrorStatusLoc_e)
		{
			*pu8Cmd <<= 4;
			GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___HIGH);
			i=100000;
			while(i--);
			GPIO.GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.En_e, GPIO__LEVEL_STATE___LOW);
			i=100000;
			while(i--);
			ErrorStatusLoc_e = GPIO.GPIO_enuRead(aLcdConfig_s[u8LcdIndexCpy].aLcdDataPins_e, (uint64_kt *) pu8Cmd, 4);
		}
	}


	return ErrorStatusLoc_e;
}
