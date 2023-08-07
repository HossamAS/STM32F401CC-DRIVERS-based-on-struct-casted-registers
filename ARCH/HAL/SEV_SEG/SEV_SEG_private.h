/***************************************/
/* Description : Sev Seg private c File*/
/* Author      : hossam                */
/* Version     : 0.1V                  */
/* Date        : 10:52:34  03 Jan 2023 */
/* History     : 0.1V Initial Creation */
/***************************************/




#ifndef SEV_SEG_PRIV_H
#define SEV_SEG_PRIV_H


typedef struct{
	Pin_et aPins_e[9];
	uint8_kt u8ConMode;
	uint8_kt u8DotMode;
}SevSegConfig_st;

extern SevSegConfig_st aSevSegConfig_s[SEV_SEG_NUM_MAX];


#endif
