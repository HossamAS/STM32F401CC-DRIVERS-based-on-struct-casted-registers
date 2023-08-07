/**************************************/
/* Description : LED config h File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 19:24:48  03 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../LIB/STD_TYPES/STD_TYPES.h"

#include  "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "LED_config.h"
Pin_et aLedConfig_e[LED_NUM_MAX]={
	GPIO__PIN___B10,
	GPIO__PIN___B11,
	GPIO__PIN___B12,
};

