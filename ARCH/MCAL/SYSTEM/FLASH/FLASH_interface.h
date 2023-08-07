/**************************************/
/* Description : FLASH interface File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 18:31:41  22 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FLASH_INTERFACE_H
#define FLASH_INTERFACE_H


typedef enum __attribute__((__packed__)){
	FLASH__WAIT_STATE___0,
	FLASH__WAIT_STATE___1,
	FLASH__WAIT_STATE___2,
	FLASH__WAIT_STATE___3,
	FLASH__WAIT_STATE___4,
	FLASH__WAIT_STATE___5,
	FLASH__WAIT_STATE___6,
	FLASH__WAIT_STATE___7,
	FLASH__WAIT_STATE___8,
	FLASH__WAIT_STATE___9,
	FLASH__WAIT_STATE___10,
	FLASH__WAIT_STATE___11,
	FLASH__WAIT_STATE___12,
	FLASH__WAIT_STATE___13,
	FLASH__WAIT_STATE___14,
	FLASH__WAIT_STATE___15

}WaitState_et;
typedef enum __attribute__((__packed__)){

	FLASH__STATE___DISABLE,
	FLASH__STATE___ENABLE


}FlashState_et;
typedef enum __attribute__((__packed__)){

	FLASH__SECTOR_NUMBER___0,
	FLASH__SECTOR_NUMBER___1,
	FLASH__SECTOR_NUMBER___2,
	FLASH__SECTOR_NUMBER___3,
	FLASH__SECTOR_NUMBER___4,
	FLASH__SECTOR_NUMBER___5,
	FLASH__SECTOR_NUMBER___USER_SPECIFIC=12,
	FLASH__SECTOR_NUMBER___USER_CONFIGURATION

}SectorNumber_et;
typedef enum __attribute__((__packed__)){

	FLASH__PROGRAM_SIZE___PROGRAM_x8,
	FLASH__PROGRAM_SIZE___PROGRAM_x16,
	FLASH__PROGRAM_SIZE___PROGRAM_x32,
	FLASH__PROGRAM_SIZE___PROGRAM_x64

}ProgramSize_et;
typedef enum __attribute__((__packed__)){

	FLASH__BROWNOUT_THERSHOLD_LEVEL___3,
	FLASH__BROWNOUT_THERSHOLD_LEVEL___2,
	FLASH__BROWNOUT_THERSHOLD_LEVEL___1,
	FLASH__BROWNOUT_THERSHOLD_LEVEL___OFF

}BrownoutThersholdLevel_et;
typedef enum __attribute__((__packed__)){

	FLASH__READ_PROTECT_OPTION___LEVEL_0_READ_PROTECTION_NOT_ACTIVE,
	FLASH__BROWNOUT_THERSHOLD_LEVEL___2_CHIP_READ_PROTECTION_ACTIVE,
	FLASH__BROWNOUT_THERSHOLD_LEVEL___1_READ_PROTECTION_OF_MEMORIES

}ReadProtectOption_et;
typedef enum __attribute__((__packed__)){

	FLASH__PROTECTION_MODE___WRITE_PROTECTION,
	FLASH__PROTECTION_MODE___READ_AND_WRITE_PROTECTION

}ProtectionMode_et;

typedef enum __attribute__((__packed__)){

	FLASH__NO_RESET_STANDBY_MODE___ENABLE,
	FLASH__NO_RESET_STANDBY_MODE___DISABLE

}NoResetStandbyMode_et;
typedef enum __attribute__((__packed__)){

	FLASH__NO_RESET_STOP_MODE___ENABLE,
	FLASH__NO_RESET_STOP_MODE___DISABLE

}NoResetStopMode_et;
typedef enum __attribute__((__packed__)){

	FLASH__WATCHDOG_MODE___HARDWARE,
	FLASH__WATCHDOG_MODE___SOFTWARE

}WatchdogMode_et;
typedef enum __attribute__((__packed__)){

	FLASH__PROTECT_STATE___NOT_ACTIVE,
	FLASH__PROTECT_STATE___ACTIVE

}ProtectState_et;
class FLASH_ct{
public:
/*PRE-BUILD CONFIGURATION (PRE-PROCESSING)*/
	FLASH_ct(void);
/*RUN-TIME CONFIGURATION*/
void FLASH_vSetLatencyTicksToAccessFlashMemory(WaitState_et WaitState_e);
void FLASH_vPrefetchEnable(void);
void FLASH_vPrefetchDisable(void);
void FLASH_vInstructionCacheEnable(void);
void FLASH_vInstructionCacheDisable(void);
void FLASH_vDataCacheEnable(void);
void FLASH_vDataCacheDisable(void);
void FLASH_vInstructionCacheReset(void);
void FLASH_vDataCacheReset(void);
FlashState_et FLASH_enuReadEndOfOperationState(void);
FlashState_et FLASH_enuReadOperationErrorState(void);
FlashState_et FLASH_enuReadWriteProtectionErrorState(void);
FlashState_et FLASH_enuReadProgrammingAlignmentErrorState(void);
FlashState_et FLASH_enuReadProgrammingParallelismErrorState(void);
FlashState_et FLASH_enuReadProgrammingSequenceErrorState(void);
FlashState_et FLASH_enuReadReadProtectionErrorState(void);
FlashState_et FLASH_enuReadFlashMemoryOperationBusyState(void);
void FLASH_vFlashProgrammingEnable(void);
void FLASH_vFlashProgrammingDisable(void);
void FLASH_vSectorErase(SectorNumber_et  SectorNumber_e,ProgramSize_et ProgramSize_e);
void FLASH_vMassErase(ProgramSize_et ProgramSize_e);
void FLASH_vWriteToTheMainFlash(uint64_kt *pu64Address,uint64_kt u64ProgramData ,ProgramSize_et ProgramSize_e);
void FLASH_vWriteToTheMainFlash(uint64_kt au64Address[],uint64_kt au64ProgramData[] ,uint64_kt u64LengthCpy,ProgramSize_et ProgramSize_e);
void FLASH_vEndOfOperationInterruptEnable(void);
void FLASH_vEndOfOperationInterruptDisable(void);
void FLASH_vErrorInterruptEnable(void);
void FLASH_vErrorInterruptDisable(void);
void FLASH_vSetBrownOutThersholdLevel(BrownoutThersholdLevel_et BrownoutThersholdLevel_e);
void FLASH_vSetNoResetStandbyMode(NoResetStandbyMode_et NoResetStandbyMode_e);
void FLASH_vSetWatchdogMode(WatchdogMode_et WatchdogMode_e);
void FLASH_vSetNoResetStopMode(NoResetStopMode_et NoResetStopMode_e);
void FLASH_vSetReadProtectOption(ReadProtectOption_et ReadProtectOption_e);
void FLASH_vSetReadAndWriteProtectOption(ProtectionMode_et ProtectionMode_e,ProtectState_et ProtectState_e);
#if(OPERATION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetOperationErrorInterruptCallBack(pf pfCallBack);
#endif
#if(END_OF_OPERATION_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetEndOfOperationInterruptCallBack(pf pfCallBack);
#endif
#if(WRITE_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetWriteProtectionErrorInterruptCallBack(pf pfCallBack);
#endif
#if(READ_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetReadProtectionErrorInterruptCallBack(pf pfCallBack);
#endif
#if(PROGRAMMING_ALIGNMENT_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetProgrmmingAlignmentErrorInterruptCallBack(pf pfCallBack);
#endif
#if(PROGRAMMING_PARALLELISM_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetProgrammingParallelismErrorInterruptCallBack(pf pfCallBack);
#endif
#if(PROGRAMMING_SEQUENCE_ERROR_INTERRUPT_CALLBACK_STATE==FLASH__STATE___ENABLE)
ErrorStatus_et FLASH_enuSetProgrammingSequenceErrorInterruptCallBack(pf pfCallBack);
#endif

};






#endif
