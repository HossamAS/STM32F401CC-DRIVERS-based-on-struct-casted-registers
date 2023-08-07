/**************************************/
/* Description : FLASH private h File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 18:31:41  22 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FLASH_PRIVATE_H
#define FLASH_PRIVATE_H

typedef union{
	uint32_kt DATA;
	uint32_kt	LATENCY:4;
	struct{
	uint32_kt	LATENCY0:1;
	uint32_kt	LATENCY1:1;
	uint32_kt	LATENCY2:1;
	uint32_kt	LATENCY3:1;
	uint32_kt	:4;
	uint32_kt	PRFTEN:1;
	uint32_kt	ICEN:1;
	uint32_kt	DCEN:1;
	uint32_kt	ICRST:1;
	uint32_kt	DCRST:1;
	};

}FLASH_ACR_ut;
typedef union{
	uint32_kt DATA;
	struct{
	uint32_kt	EOP:1;
	uint32_kt	OPERR:1;
	uint32_kt	:2;
	uint32_kt	WRPERR:1;
	uint32_kt	PGAERR:1;
	uint32_kt	PGPERR:1;
	uint32_kt	PGSERR:1;
	uint32_kt	RDERR:1;
	uint32_kt	:7;
	uint32_kt	BSY:1;
	};

}FLASH_SR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt	:3;
		uint32_kt	SNB:4;
		uint32_kt	PSIZE:2;
	};
	struct{
	uint32_kt	PG:1;
	uint32_kt	SER:1;
	uint32_kt	MER:1;
	uint32_kt	SNB0:1;
	uint32_kt	SNB1:1;
	uint32_kt	SNB2:1;
	uint32_kt	SNB3:1;
	uint32_kt	PSIZE0:1;
	uint32_kt	PSIZE1:1;
	uint32_kt	:6;
	uint32_kt	STRT:1;
	uint32_kt	:7;
	uint32_kt	EOPIE:1;
	uint32_kt	ERRIE:1;
	uint32_kt	:5;
	uint32_kt	LOCK:1;
	};

}FLASH_CR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt	:2;
		uint32_kt	BOR_LEV:2;
		uint32_kt	:1;
		uint32_kt	USER:3;
		uint32_kt	RDP:8;
		uint32_kt	nWRP:5;
	};
	struct{
		uint32_kt	OPTLOCK:1;
		uint32_kt	OPTSTRT:1;
		uint32_kt	BOR_LEV0:1;
		uint32_kt	BOR_LEV1:1;
		uint32_kt	:1;
		uint32_kt	WDG_SW:1;
		uint32_kt	nRST_STOP:1;
		uint32_kt	nRST_STDBY:1;
		uint32_kt	RDP0:1;
		uint32_kt	RDP1:1;
		uint32_kt	RDP2:1;
		uint32_kt	RDP3:1;
		uint32_kt	RDP4:1;
		uint32_kt	RDP5:1;
		uint32_kt	RDP6:1;
		uint32_kt	RDP7:1;
		uint32_kt	nWRP0:1;
		uint32_kt	nWRP1:1;
		uint32_kt	nWRP2:1;
		uint32_kt	nWRP3:1;
		uint32_kt	nWRP4:1;
		uint32_kt	nWRP5:1;
		uint32_kt	:9;
		uint32_kt	SPRMOD:1;
	};

}FLASH_OPTCR_ut;
typedef struct{
	FLASH_ACR_ut FLASH_ACR;
	uint32_ut   FLASH_KEYR;
	uint32_ut   FLASH_OPTKEYR;
	FLASH_SR_ut FLASH_SR;
	FLASH_CR_ut FLASH_CR;
	FLASH_OPTCR_ut FLASH_OPTCR;
}FLASH_st;

#define FLASH (*(volatile FLASH_st*)(0x40023C00))
#define KEY1 0x45670123
#define KEY2 0xCDEF89AB
#define OPKEY1  0x08192A3B
#define OPKEY2  0x4C5D6E7F
extern pf	pfOperationErrorInterruptCallback;
extern pf	pfReadProtectionErrorInterruptCallback;
extern pf	pfWriteProtectionErrorInterruptCallback;
extern pf	pfProgrammingAlignmentErrorInterruptCallback;
extern pf	pfProgrammingParallelismErrorInterruptCallback;
extern pf	pfProgrammingSequenceErrorInterruptCallback;
extern pf	pfEndOfOperationInterruptCallback;

#endif
