/**************************************/
/* Description : GPIO private c File  */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 03:13:44  11 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"
ErrorStatus_et DetectMultipleOccurance(uint8_kt au8Arr[],uint8_kt u8LengthCpy)
{
	uint8_kt u8IndexLoc=0,u8StartLoc=0;
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	for(;u8StartLoc<u8LengthCpy-1;u8StartLoc++)
	{
		for(u8IndexLoc=u8StartLoc+1;u8IndexLoc<u8LengthCpy;u8IndexLoc++)
		{
			if(au8Arr[u8IndexLoc]==au8Arr[u8StartLoc])
			{
				ErrorStatusLoc_e=MULTI_OCCUR;
				break;
			}
		}
	}
	return ErrorStatusLoc_e;
}