/**************************************/
/* Description : CRC private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 15:37:10  23 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef CRC_PRIVATE_H
#define CRC_PRIVATE_H


typedef struct{
	uint32_ut CRC_DR;
	uint32_ut CRC_IDR;
	uint32_ut CRC_CR;
}CRC_st;

#define CRC (*(volatile CRC_st*)(0x40023000))





#endif
