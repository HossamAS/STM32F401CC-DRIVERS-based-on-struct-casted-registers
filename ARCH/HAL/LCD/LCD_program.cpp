/**************************************/
/* Description : LCD program c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 00:44:06  12 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"


#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "LCD_config.h"
#include "LCD_private.h"
#include "LCD_interface.h"



LCD_ct::LCD_ct(void)
{
	uint8_kt u8indexLoc;
	uint32_kt x=500000;

	for(u8indexLoc = 0; u8indexLoc < LCD_MAX_NUM; u8indexLoc++)
	{
		/*step 1 */
		while(x--);

		if(LCD_4BIT_MODE == aLcdConfig_s[u8indexLoc].Config_s.u8Mode)
		{
			LCD_enuSendCmd(u8indexLoc, 0b00000010);
		}

		/*step 2 */
		LCD_enuSendCmd(u8indexLoc, (uint8_kt)(0b00100000 | aLcdConfig_s[u8indexLoc].Config_s.u8Mode << 4 | aLcdConfig_s[u8indexLoc].Config_s.u8UsedLines << 3 | aLcdConfig_s[u8indexLoc].Config_s.u8CharFont << 2));
		/*step 3 */
		LCD_enuSendCmd(u8indexLoc, (uint8_kt)(0b00001000 | aLcdConfig_s[u8indexLoc].Config_s.u8DisplayState << 2 | aLcdConfig_s[u8indexLoc].Config_s.u8CursorState << 1 | aLcdConfig_s[u8indexLoc].Config_s.u8CursorBlinkState));
		/*step 4 */
		LCD_enuSendCmd(u8indexLoc, (uint8_kt)(0b00000001));
		/*step 5 */
		LCD_enuSendCmd(u8indexLoc, (uint8_kt)(0b00000100 | aLcdConfig_s[u8indexLoc].Config_s.u8ShiftMode | aLcdConfig_s[u8indexLoc].Config_s.u8IncrementMode << 1));
	}


}

ErrorStatus_et LCD_ct::LCD_enuSendCmd(uint8_kt u8LcdIndexCpy, uint8_kt u8CmdCpy)
{
	ErrorStatus_et ErrorStatusLoc_e = EOK;


	if(LCD_MAX_NUM > u8LcdIndexCpy)
	{
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rs_e, GPIO__LEVEL_STATE___LOW);
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rw_e, GPIO__LEVEL_STATE___LOW);
		LCD_vLcdWriteHelper(u8LcdIndexCpy, u8CmdCpy);
	}

	else
	{
		ErrorStatusLoc_e = PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;
}

ErrorStatus_et LCD_ct::LCD_vDispChar(uint8_kt u8LcdIndexCpy, uint8_kt u8CharCpy)
{
	ErrorStatus_et ErrorStatusLoc_e = EOK;


	if(LCD_MAX_NUM > u8LcdIndexCpy)
	{
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rs_e, GPIO__LEVEL_STATE___HIGH);
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rw_e, GPIO__LEVEL_STATE___LOW);
		LCD_vLcdWriteHelper(u8LcdIndexCpy, u8CharCpy);
	}

	else
	{
		ErrorStatusLoc_e = PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;
}

ErrorStatus_et LCD_ct::LCD_vSelectDispPos(uint8_kt u8LcdIndexCpy, uint8_kt u8PosCpy)
{
	ErrorStatus_et ErrorStatusLoc_e = EOK;


	if(LCD_MAX_NUM > u8LcdIndexCpy)
	{
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rs_e, GPIO__LEVEL_STATE___LOW);
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rw_e, GPIO__LEVEL_STATE___LOW);
		LCD_vLcdWriteHelper(u8LcdIndexCpy, 0X80|u8PosCpy);

	}

	else
	{
		ErrorStatusLoc_e = PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;
}

ErrorStatus_et LCD_ct::LCD_vReadDispChar(uint8_kt u8LcdIndexCpy, uint8_kt *pu8CharCpy)
{
	ErrorStatus_et ErrorStatusLoc_e = EOK;


	if(LCD_MAX_NUM > u8LcdIndexCpy)
	{
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rs_e, GPIO__LEVEL_STATE___HIGH);
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rw_e, GPIO__LEVEL_STATE___HIGH);
		ErrorStatusLoc_e = LCD_enuLcdReadHelper(u8LcdIndexCpy, pu8CharCpy);
	}

	else
	{
		ErrorStatusLoc_e = PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;
}

ErrorStatus_et LCD_ct::LCD_vReadBfAndAddress(uint8_kt u8LcdIndexCpy, uint8_kt *pu8BfAndAddressCpy)
{
	ErrorStatus_et ErrorStatusLoc_e = EOK;


	if(LCD_MAX_NUM > u8LcdIndexCpy)
	{
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rs_e, GPIO__LEVEL_STATE___LOW);
		GPIO_vWrite(aLcdConfig_s[u8LcdIndexCpy].LcdCtrlPins_s.Rw_e, GPIO__LEVEL_STATE___HIGH);
		ErrorStatusLoc_e=LCD_enuLcdReadHelper(u8LcdIndexCpy, pu8BfAndAddressCpy);

	}

	else
	{
		ErrorStatusLoc_e = PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;
}


ErrorStatus_et LCD_ct::LCD_enuClearDisp (uint8_kt u8LcdIndexCpy)
{
	return LCD_ct::LCD_enuSendCmd(u8LcdIndexCpy, 1);
}
ErrorStatus_et LCD_ct::LCD_enuRetHome(uint8_kt u8LcdIndexCpy)
{
	return LCD_ct::LCD_enuSendCmd(u8LcdIndexCpy, 2);
}
ErrorStatus_et LCD_ct::LCD_enuDispString(uint8_kt u8LcdIndexCpy,uint8_kt* pu8String)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(u8LcdIndexCpy>LCD_MAX_NUM-1)
	{
		ErrorStatusLoc_e= PARAM_OUT_OF_RANGE;
	}
	while((*pu8String!='\0')&&(ErrorStatusLoc_e== EOK))
	{
		LCD_vDispChar(u8LcdIndexCpy, *(pu8String++));
	}
	return ErrorStatusLoc_e;
}
ErrorStatus_et LCD_ct::LCD_enuDispArr(uint8_kt u8LcdIndexCpy,uint8_kt* pu8Arr,uint8_kt u8LengthCpy)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
		if(u8LcdIndexCpy>LCD_MAX_NUM-1)
		{
			ErrorStatusLoc_e= PARAM_OUT_OF_RANGE;
		}
	while(u8LengthCpy--)
	{
			LCD_vDispChar(u8LcdIndexCpy, pu8Arr[u8LengthCpy]);
	}
		return ErrorStatusLoc_e;
}
