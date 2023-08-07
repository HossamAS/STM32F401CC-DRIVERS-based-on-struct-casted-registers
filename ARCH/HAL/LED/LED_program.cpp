/**************************************/
/* Description : LED program c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:06:53  03 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "LED_config.h"
#include "LED_interface.h"
#include "LED_private.h"



ErrorStatus_et LED_ct::LED_enuOn(uint8_kt u8LedIdCpy)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;

	if(LED_NUM_MAX>u8LedIdCpy)
	  {
		GPIO_vWrite(aLedConfig_e[u8LedIdCpy],GPIO__LEVEL_STATE___HIGH);
	  }
	else
	  {
		ErrorStatusLoc_e= PARAM_OUT_OF_RANGE;  
	  }
    return ErrorStatusLoc_e;
}
ErrorStatus_et LED_ct::LED_enuOff(uint8_kt u8LedIdCpy)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;

	if(LED_NUM_MAX>u8LedIdCpy)
	  {
		GPIO_vWrite(aLedConfig_e[u8LedIdCpy],GPIO__LEVEL_STATE___LOW);
	  }
	else
	  {
		ErrorStatusLoc_e= PARAM_OUT_OF_RANGE;
	  }
    return ErrorStatusLoc_e;
}
ErrorStatus_et LED_ct::LED_enuTog(uint8_kt u8LedIdCpy)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;

	if(LED_NUM_MAX>u8LedIdCpy)
	  {
		GPIO_vToggle(aLedConfig_e[u8LedIdCpy]);
	  }
	else
	  {
		ErrorStatusLoc_e= PARAM_OUT_OF_RANGE;
	  }
    return ErrorStatusLoc_e;
}
