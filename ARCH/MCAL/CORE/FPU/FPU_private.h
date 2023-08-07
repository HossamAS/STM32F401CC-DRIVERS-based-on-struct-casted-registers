/**************************************/
/* Description : FPU private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 14:37:32  28 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FPU_PRIVATE_H
#define FPU_PRIVATE_H
typedef union{
	uint32_kt DATA;
	struct{
	uint32_kt :20;
	uint32_kt CP10:2;
	uint32_kt CP11:2;
	};
	struct{
	uint32_kt :20;
	uint32_kt CP10_0:1;
	uint32_kt CP10_1:1;
	uint32_kt CP11_0:1;
	uint32_kt CP11_1:1;
	};
}CPACR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt LSPACT:1;
		uint32_kt USER:1;
		uint32_kt :1;
		uint32_kt THREAD:1;
		uint32_kt HFRDY:1;
		uint32_kt MMRDY:1;
		uint32_kt BFRDY:1;
		uint32_kt :1;
		uint32_kt MONRDY:1;
		uint32_kt:21;
		uint32_kt LSPEN:1;
		uint32_kt ASPEN:1;
	};
}FPCCR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt:3;
		uint32_kt ADDRESS:29;
	};
	struct{
		uint32_kt:3;
		uint32_kt ADDRESS0:1;
		uint32_kt ADDRESS1:1;
		uint32_kt ADDRESS2:1;
		uint32_kt ADDRESS3:1;
		uint32_kt ADDRESS4:1;
		uint32_kt ADDRESS5:1;
		uint32_kt ADDRESS6:1;
		uint32_kt ADDRESS7:1;
		uint32_kt ADDRESS8:1;
		uint32_kt ADDRESS9:1;
		uint32_kt ADDRESS10:1;
		uint32_kt ADDRESS11:1;
		uint32_kt ADDRESS12:1;
		uint32_kt ADDRESS13:1;
		uint32_kt ADDRESS14:1;
		uint32_kt ADDRESS15:1;
		uint32_kt ADDRESS16:1;
		uint32_kt ADDRESS17:1;
		uint32_kt ADDRESS18:1;
		uint32_kt ADDRESS19:1;
		uint32_kt ADDRESS20:1;
		uint32_kt ADDRESS21:1;
		uint32_kt ADDRESS22:1;
		uint32_kt ADDRESS23:1;
		uint32_kt ADDRESS24:1;
		uint32_kt ADDRESS25:1;
		uint32_kt ADDRESS26:1;
		uint32_kt ADDRESS27:1;
		uint32_kt ADDRESS28:1;
	};
}FPCAR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :22;
		uint32_kt RMODE:2;
	};
	struct{
		uint32_kt IOC:1;
		uint32_kt DZC:1;
		uint32_kt OFC:1;
		uint32_kt UFC:1;
		uint32_kt IXC:1;
		uint32_kt :2;
		uint32_kt IDC:1;
		uint32_kt :14;
		uint32_kt RMODE0:1;
		uint32_kt RMODE1:1;
		uint32_kt FZ:1;
		uint32_kt DN:1;
		uint32_kt AHP:1;
		uint32_kt :1;
		uint32_kt V:1;
		uint32_kt C:1;
		uint32_kt Z:1;
		uint32_kt N:1;
	};
}FPSCR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :22;
		uint32_kt RMODE:2;
	};
	struct{
		uint32_kt :22;
		uint32_kt RMODE0:1;
		uint32_kt RMODE1:1;
		uint32_kt FZ:1;
		uint32_kt DN:1;
		uint32_kt AHP:1;
	};
}FPDSCR_ut;

typedef struct{
	CPACR_ut CPACR ;
	FPCCR_ut FPCCR ;
	FPCAR_ut FPCAR ;
	FPSCR_ut FPSCR ;
   FPDSCR_ut FPDSCR;
}FPU_st;

#define FPU (*(volatile FPU_st*)(0xE000ED88))

extern pf pfInvalidOperationCumulativeExceptionCallBack;
extern pf pfDivisionByZeroCumulativeExceptionCallBack;
extern pf pfOverFlowCumulativeExceptionCallBack;
extern pf pfUnderFlowCumulativeExceptionCallBack;
extern pf pfInExactCumulativeExceptionCallBack;
extern pf pfInPutDenormalCumulativeExceptionCallBack;

#endif
