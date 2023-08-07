/**************************************/
/* Description : Keypad program c File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 01:37:24  09 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include  "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "KEYPAD_config.h"
#include "KEYPAD_interface.h"
#include "KEYPAD_private.h"



	
 ErrorStatus_et KEYPAD_ct:: KEYPAD_u8ReadKey(uint8_kt u8KeypadNumCpy,uint8_kt *pu8Key)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	uint8_kt u8ColumnLoc;
	uint8_kt u8RowLoc;
	uint8_kt u8tmpLoc=GPIO__LEVEL_STATE___LOW;
	if(u8KeypadNumCpy<KEYPAD_MAX_NUM)
	{

		if(KEYPAD_ROWS_MAX_NUM>=au8KeypadConfig_s[u8KeypadNumCpy].RowsPinsNum&&
		   KEYPAD_COLUMNS_MAX_NUM>=au8KeypadConfig_s[u8KeypadNumCpy].ColumnsPinsNum)
		{

			if(NULL_PTR!=pu8Key)
			{
				for(u8RowLoc=0;(EOK==ErrorStatusLoc_e)&&(GPIO__LEVEL_STATE___LOW==u8tmpLoc)&&(u8RowLoc<au8KeypadConfig_s[u8KeypadNumCpy].RowsPinsNum);u8RowLoc++)
				{

					GPIO_vWrite(au8KeypadConfig_s[u8KeypadNumCpy].aRowsPins_e[u8RowLoc],GPIO__LEVEL_STATE___HIGH);
					for(u8ColumnLoc=0;(EOK==ErrorStatusLoc_e)&&(GPIO__LEVEL_STATE___LOW==u8tmpLoc)&&(u8ColumnLoc<au8KeypadConfig_s[u8KeypadNumCpy].ColumnsPinsNum);u8ColumnLoc++)
					{

						u8tmpLoc =(uint8_kt)GPIO_enuRead(au8KeypadConfig_s[u8KeypadNumCpy].aColumnsPins_e[u8ColumnLoc]);

					}
					GPIO_vWrite(au8KeypadConfig_s[u8KeypadNumCpy].aRowsPins_e[u8RowLoc],GPIO__LEVEL_STATE___LOW);
				}
				if(u8tmpLoc==GPIO__LEVEL_STATE___HIGH)
				{

					*pu8Key=au8KeypadConfig_s[u8KeypadNumCpy].au8AsciiMappingMatrix[u8RowLoc-1][u8ColumnLoc-1];
				}
				else
				{

					*pu8Key='\0';
				}

			}
			else
			{

				ErrorStatusLoc_e=PARAM_NULL_PTR;

			}
		}
		else
		{

			ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
		}
	}
	else
	{

		ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
	}

	return ErrorStatusLoc_e;

}




