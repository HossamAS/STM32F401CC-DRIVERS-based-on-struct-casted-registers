/**************************************/
/* Description : Sev Seg config h File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:52:34  03 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/


#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "SEV_SEG_config.h"
#include "SEV_SEG_interface.h"
#include "SEV_SEG_private.h"

SevSegConfig_st aSevSegConfig_s[SEV_SEG_NUM_MAX]={
		{
				{
					    /*a*/           /*b*/           /*c*/					
					GPIO__PIN___A0,	GPIO__PIN___A1,	GPIO__PIN___A2,
					    /*d*/           /*e*/           /*f*/
					GPIO__PIN___A3,	GPIO__PIN___A4,	GPIO__PIN___A5,
					    /*g*/        /*Common*/       /*dot*/
					GPIO__PIN___A6,	GPIO__PIN___A7,  GPIO__PIN___A8
				},
					COMMON_CATHODE,

					DOT_ON
		},
		{
				{
					    /*a*/           /*b*/           /*c*/
					GPIO__PIN___A9,	GPIO__PIN___A10,	GPIO__PIN___A11,
					    /*d*/           /*e*/           /*f*/
					GPIO__PIN___A12,	GPIO__PIN___A13,	GPIO__PIN___A14,
					    /*g*/        /*Common*/
					GPIO__PIN___A15, GPIO__PIN___B0
				},
					COMMON_CATHODE,

					DOT_OFF
		},

};
