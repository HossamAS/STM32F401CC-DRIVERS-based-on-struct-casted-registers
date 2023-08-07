/**************************************/
/* Description : PWR private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 09:10:37  10 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef PWR_PRIVATE_H
#define PWR_PRIVATE_H
typedef union{
		uint32_kt DATA;
		struct{
			uint32_kt :5;
			uint32_kt PLS:3;
			uint32_kt :6;
			uint32_kt VOS:2;
		};
		struct{
		uint32_kt LPDS:1;
		uint32_kt PDDS:1;
		uint32_kt CWUF:1;
		uint32_kt CSBF:1;
		uint32_kt PVDE:1;
		uint32_kt PLS0:1;
		uint32_kt PLS1:1;
		uint32_kt PLS2:1;
		uint32_kt DBP:1;
		uint32_kt FPDS:1;
		uint32_kt LPLVDS:1;
		uint32_kt MRLVDS:1;
		uint32_kt :1;
		uint32_kt ADCDC1:1;
		uint32_kt VOS0:1;
		uint32_kt VOS1:1;
		};
		

}PWR_CR_ut;
typedef union{
		uint32_kt DATA;
		struct{
			uint32_kt WUF:1;
			uint32_kt SBF:1;
			uint32_kt PVDO:1;
			uint32_kt BRR:1;
			uint32_kt :1;
			uint32_kt EWUP:1;
			uint32_kt BRE:1;
			uint32_kt :1;
			uint32_kt VOSRDY:1;
		};
		

}PWR_CSR_ut;


typedef struct{
	PWR_CR_ut PWR_CR;
	PWR_CSR_ut PWR_CSR;
}PWR_st;

#define PWR (*(volatile PWR_st*)(0x40023800))
#endif
