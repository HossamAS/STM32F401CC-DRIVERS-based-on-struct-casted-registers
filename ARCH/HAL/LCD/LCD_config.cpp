/**************************************/
/* Description : LCD config h File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 00:44:06  12 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"

LcdConfig_st aLcdConfig_s[LCD_MAX_NUM]=
{
		{

			{
				LCD_4BIT_MODE,LCD_TWO_LINES,LCD_FONT_5X7,
				LCD_DISPLAY_ON,LCD_CURSOR_ON,LCD_CURSOR_BLINK_ON,
				LCD_LTR,LCD_SHIFT_OFF
			}
			,
			{
				GPIO__PIN___A0,GPIO__PIN___A1,GPIO__PIN___A2
			}
			,
			{

			    GPIO__PIN___A3,GPIO__PIN___A4,GPIO__PIN___A5,
				GPIO__PIN___A6
			}
		}
};
