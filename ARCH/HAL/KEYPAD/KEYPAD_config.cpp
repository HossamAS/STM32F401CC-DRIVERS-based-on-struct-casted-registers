/**************************************/
/* Description : Keypad config h File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 01:37:24  09 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../LIB/STD_MACROS/STD_MACROS.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
#include "KEYPAD_config.h"
#include "KEYPAD_private.h"

KeypadConfig_st au8KeypadConfig_s[KEYPAD_MAX_NUM]={
    /*Keypad 0 Config*/
	{
/*Outputs pins 	  ROW0            ROW1            ROW2            ROW3       */
			{ GPIO__PIN___B0 , GPIO__PIN___B1 , GPIO__PIN___B2 , GPIO__PIN___B3  },
/*Inputs pins     COLUMN0         COLUMN1         COLUMN2         COLUMN3    */
			{ GPIO__PIN___B4 , GPIO__PIN___B5 , GPIO__PIN___B6 , GPIO__PIN___B7  }
		,
		   /*ROW NUM*/
			4
		,
		   /*COLUMN NUM*/
			4
		,
		{
			/*KEYPAD MATREX*/
			{ '7' , '8' , '9' , '/'  },
			{ '4' , '5' , '6' , 'X'  },
			{ '1' , '2' , '3' , '-'  },
			{ '.' , '0' , '=' , '+'  }
		}


	}
//	,
	/*Keypad 1 Config*/
//	{
/*Input pins 	  ROW0            ROW1            ROW2            ROW3       */
//			{ GPIO__PIN___B16, GPIO__PIN___B17, GPIO__PIN___B18, GPIO__PIN___B19 },
/*Output pins     COLUMN0         COLUMN1         COLUMN2    */
//			{ GPIO__PIN___B20, GPIO__PIN___B21, GPIO__PIN___B22 }
//		,
			/*ROW NUM*/
//			4
//		,
		   /*COLUMN NUM*/
//			3
//		,
//		{
			/*KEYPAD MATREX*/
//			{ 'A' , 'B' , 'C'},
//			{ 'D' , 'E' , 'F'},
//			{ '^' , '~' , '!'},
//			{ '&' , '|' , '%'}
//		}

//	}
	
	
};
