/**************************************/
/* Description : FLASH program File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 18:31:41  22 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"

#include "FLASH_interface.h"
#include "FLASH_config.h"
#include "FLASH_private.h"



/*PRE-BUILD CONFIGURATION (PRE-PROCESSING)*/
FLASH_ct::FLASH_ct(void)
{

FLASH.FLASH_ACR.DATA=LATENCY_TICKS_TO_ACCESS_FLASH_MEMORY|PREFETCH_STATE<<8|
					 INSTRUCTION_CACHE_STATE<<9|DATA_CACHE_STATE<<10;

FLASH.FLASH_KEYR.DATA=KEY1;
FLASH.FLASH_KEYR.DATA=KEY2;
FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
FLASH.FLASH_OPTKEYR.DATA=OPKEY2;

FLASH.FLASH_CR.DATA=FLASH_PROGRAMMING_STATE|SECTOR_ERASE_STATE<<1|
					INITIAL_SECTOR_NUMBER<<2|PROGRAM_SIZE_FOR_PARALLELISM<<8|
					0X8010|END_OF_OPERATION_INTERRUPT_STATE<<24|ERROR_INTERRUPT_STATE<<25;

FLASH.FLASH_OPTCR.DATA=0X0003|INITIAL_BROWNOUT_THERSHOLD_LEVEL<<2|
					   USER_OPTION_BYTE_NRST_STDBY_STATE<<5|
					   USER_OPTION_BYTE_NRST_STOP_STATE<<6|USER_OPTION_BYTE_WDG_SW_STATE<<7|
					   READ_PROTECT_OPTION_BYTE<<8|WRITE_PROTECT_OPTION_BYTE_STATE<<16|
					   WRITE_PROTECT_OPTION_BYTE_MODE<<31;



}

/*RUN-TIME CONFIGURATION*/
void FLASH_ct::FLASH_vSetLatencyTicksToAccessFlashMemory(WaitState_et WaitState_e)
{

	FLASH.FLASH_ACR.LATENCY=WaitState_e;

}

void FLASH_ct::FLASH_vPrefetchEnable(void)
{

	FLASH.FLASH_ACR.PRFTEN=1;

}

void FLASH_ct::FLASH_vPrefetchDisable(void)
{

	FLASH.FLASH_ACR.PRFTEN=0;

}

void FLASH_ct::FLASH_vInstructionCacheEnable(void)
{

	FLASH.FLASH_ACR.ICEN=1;

}

void FLASH_ct::FLASH_vInstructionCacheDisable(void)
{

	FLASH.FLASH_ACR.ICEN=0;

}

void FLASH_ct::FLASH_vDataCacheEnable(void)
{

	FLASH.FLASH_ACR.DCEN=1;

}

void FLASH_ct::FLASH_vDataCacheDisable(void)
{

	FLASH.FLASH_ACR.DCEN=0;

}

void FLASH_ct::FLASH_vInstructionCacheReset(void)
{

	FLASH.FLASH_ACR.ICRST=1;
	FLASH.FLASH_ACR.ICRST=0;

}

void FLASH_ct::FLASH_vDataCacheReset(void)
{

	FLASH.FLASH_ACR.DCRST=1;
	FLASH.FLASH_ACR.DCRST=0;

}

FlashState_et FLASH_ct::FLASH_enuReadEndOfOperationState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.EOP;

}

FlashState_et FLASH_ct::FLASH_enuReadOperationErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.OPERR;

}

FlashState_et FLASH_ct::FLASH_enuReadWriteProtectionErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.WRPERR;

}

FlashState_et FLASH_ct::FLASH_enuReadProgrammingAlignmentErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.PGAERR;

}

FlashState_et FLASH_ct::FLASH_enuReadProgrammingParallelismErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.PGPERR;

}

FlashState_et FLASH_ct::FLASH_enuReadProgrammingSequenceErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.PGSERR;

}

FlashState_et FLASH_ct::FLASH_enuReadReadProtectionErrorState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.RDERR;

}

FlashState_et FLASH_ct::FLASH_enuReadFlashMemoryOperationBusyState(void)
{

	return (FlashState_et)FLASH.FLASH_SR.BSY;

}

void FLASH_ct::FLASH_vFlashProgrammingEnable(void)
{

FLASH.FLASH_CR.PG=1;

}

void FLASH_ct::FLASH_vFlashProgrammingDisable(void)
{

	FLASH.FLASH_CR.PG=0;

}


void FLASH_ct::FLASH_vMassErase(ProgramSize_et ProgramSize_e)
{

	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_CR.DATA=0X8104|ProgramSize_e<<8;
	while(FLASH.FLASH_SR.BSY);

}
void FLASH_ct::FLASH_vSectorErase(SectorNumber_et  SectorNumber_e,ProgramSize_et ProgramSize_e)
{

	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_CR.DATA=0X0102|SectorNumber_e<<3|ProgramSize_e<<8;
	FLASH.FLASH_CR.DATA=0x8000;
	while(FLASH.FLASH_SR.BSY);

}
void FLASH_ct::FLASH_vWriteToTheMainFlash(uint64_kt *pu64Address,uint64_kt u64ProgramData ,ProgramSize_et ProgramSize_e)
{

	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_CR.DATA=0X0001|ProgramSize_e<<8;
	*pu64Address=u64ProgramData;
	FLASH.FLASH_CR.DATA=0X8000;
	while(FLASH.FLASH_SR.BSY);

}
void FLASH_ct::FLASH_vWriteToTheMainFlash(uint64_kt au64Address[],uint64_kt au64ProgramData[] ,uint64_kt u64LengthCpy,ProgramSize_et ProgramSize_e)
{
    uint64_kt Index=0;
	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	FLASH.FLASH_CR.DATA=0X8001|ProgramSize_e<<8;
	for(;Index<u64LengthCpy;Index++)
	{
		while(FLASH.FLASH_SR.BSY);
		if(ProgramSize_e==0)
		{
			((uint8_kt*)au64Address)[Index]=((uint8_kt*)au64ProgramData)[Index];
		}
		else if(ProgramSize_e==1)
		{
			((uint16_kt*)au64Address)[Index]=((uint16_kt*)au64ProgramData)[Index];
		}
		else if(ProgramSize_e==2)
		{
			((uint32_kt*)au64Address)[Index]=((uint32_kt*)au64ProgramData)[Index];
		}
		else if(ProgramSize_e==3)
		{
			au64Address[Index]=au64ProgramData[Index];
		}
	}
	FLASH.FLASH_CR.DATA=0X8000;
	while(FLASH.FLASH_SR.BSY);


}
void FLASH_ct::FLASH_vEndOfOperationInterruptEnable(void)
{
	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	FLASH.FLASH_CR.EOPIE=1;
	FLASH.FLASH_CR.LOCK=1;
}

void FLASH_ct::FLASH_vEndOfOperationInterruptDisable(void)
{

	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	FLASH.FLASH_CR.EOPIE=0;
	FLASH.FLASH_CR.LOCK=1;

}

void FLASH_ct::FLASH_vErrorInterruptEnable(void)
{
	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	FLASH.FLASH_CR.ERRIE=1;
	FLASH.FLASH_CR.LOCK=1;

}

void FLASH_ct::FLASH_vErrorInterruptDisable(void)
{
	FLASH.FLASH_KEYR.DATA=KEY1;
	FLASH.FLASH_KEYR.DATA=KEY2;
	FLASH.FLASH_CR.ERRIE=0;
	FLASH.FLASH_CR.LOCK=1;

}

void FLASH_ct::FLASH_vSetBrownOutThersholdLevel(BrownoutThersholdLevel_et BrownoutThersholdLevel_e)
{
	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.BOR_LEV=BrownoutThersholdLevel_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);


}

void FLASH_ct::FLASH_vSetNoResetStandbyMode(NoResetStandbyMode_et NoResetStandbyMode_e)
{

	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.nRST_STDBY=NoResetStandbyMode_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);

}
void FLASH_ct::FLASH_vSetWatchdogMode(WatchdogMode_et WatchdogMode_e)
{
	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.WDG_SW=WatchdogMode_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);
}
void FLASH_ct::FLASH_vSetNoResetStopMode(NoResetStopMode_et NoResetStopMode_e)
{
	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.nRST_STOP=NoResetStopMode_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);
}
void FLASH_ct::FLASH_vSetReadProtectOption(ReadProtectOption_et ReadProtectOption_e)
{

	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.RDP=ReadProtectOption_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);

}

void FLASH_ct::FLASH_vSetReadAndWriteProtectOption(ProtectionMode_et ProtectionMode_e,ProtectState_et ProtectState_e)
{

	FLASH.FLASH_OPTKEYR.DATA=OPKEY1;
	FLASH.FLASH_OPTKEYR.DATA=OPKEY2;
	FLASH.FLASH_OPTCR.SPRMOD=ProtectionMode_e;
	FLASH.FLASH_OPTCR.nWRP=ProtectState_e;
	while(FLASH.FLASH_SR.BSY);
	FLASH.FLASH_OPTCR.OPTSTRT=1;
	FLASH.FLASH_OPTCR.OPTLOCK=1;
	while(FLASH.FLASH_SR.BSY);

}

#if(OPERATION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetOperationErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfOperationErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(WRITE_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetWriteProtectionErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfWriteProtectionErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(READ_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetReadProtectionErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfReadProtectionErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(PROGRAMMING_ALIGNMENT_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetProgrmmingAlignmentErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfProgrammingAlignmentErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(PROGRAMMING_PARALLELISM_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetProgrammingParallelismErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfProgrammingParallelismErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(PROGRAMMING_SEQUENCE_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetProgrammingSequenceErrorInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfProgrammingSequenceErrorInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(END_OF_OPERATION_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_ct::FLASH_enuSetEndOfOperationInterruptCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfEndOfOperationInterruptCallback=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;


}
#endif


extern "C"{
void FLASH_Handler(void)
{
#if(OPERATION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
	if(FLASH.FLASH_SR.OPERR&&(pfOperationErrorInterruptCallback!=NULL_PTR_TO_FUNC))
	{
		pfOperationErrorInterruptCallback();
	}
#endif
#if(WRITE_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
		if(FLASH.FLASH_SR.WRPERR&&(pfWriteProtectionErrorInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfWriteProtectionErrorInterruptCallback();
		}
#endif
#if(READ_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
		if(FLASH.FLASH_SR.RDERR&&(pfReadProtectionErrorInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfReadProtectionErrorInterruptCallback();
		}
#endif
#if(PROGRAMMING_ALIGNMENT_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)

		if(FLASH.FLASH_SR.PGAERR&&(pfProgrammingAlignmentErrorInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfProgrammingAlignmentErrorInterruptCallback();
		}
#endif
#if(PROGRAMMING_PARALLELISM_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
		if(FLASH.FLASH_SR.PGPERR&&(pfProgrammingParallelismErrorInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfProgrammingParallelismErrorInterruptCallback();

		}
#endif
#if(PROGRAMMING_SEQUENCE_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
		if(FLASH.FLASH_SR.PGSERR&&(pfProgrammingSequenceErrorInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfProgrammingSequenceErrorInterruptCallback();
		}
#endif
#if(END_OF_OPERATION_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
		if(FLASH.FLASH_SR.EOP&&(pfEndOfOperationInterruptCallback!=NULL_PTR_TO_FUNC))
		{
		pfEndOfOperationInterruptCallback();
		}
#endif
}
}

