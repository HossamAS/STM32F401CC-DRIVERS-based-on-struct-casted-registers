/**************************************/
/* Description : CRC program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 15:37:10  23 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"

#include "CRC_interface.h"
#include "CRC_private.h"



uint32_kt CRC_ct::CRC_u32Calculate32BitsSequence(uint32_kt au32DataCpy[],uint32_kt u32LengthCpy)
{
	uint32_kt u32IndexLoc=0;
	uint8_kt u8ticksLoc=4;
	for(;u32IndexLoc<u32LengthCpy;u32IndexLoc++)
	{
		CRC.CRC_DR.DATA=au32DataCpy[u32IndexLoc];
		while(u8ticksLoc--);
		u8ticksLoc=4;
	}
	return CRC.CRC_DR.DATA;
}
void CRC_ct::CRC_vSaveTemp8bitsData(uint8_kt u8DataCpy)
{
	CRC.CRC_IDR.DATA=u8DataCpy;
}
uint8_kt CRC_ct::CRC_u8ReadSavedTemp8bitsData(void)
{
	return CRC.CRC_IDR.DATA;
}
void CRC_ct::CRC_vReset(void)
{
	CRC.CRC_CR.DATA=1;
}
