/**************************************/
/* Description : SCB program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:55:45  25 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"

#include "SCB_interface.h"
#include "SCB_config.h"
#include "SCB_private.h"



/*PRE-BUILD CONFIGURATION(PRE-PROCESSING)*/
SCB_ct::SCB_ct(void)
{
SCB.ACTLR.DATA=(!INTERRUPTING_MULTI_CYCLE_INSTRUCTION_INITIAL_STATE)|
		(!CORTEXM4_WRITE_BUFFER_INITIAL_STATE)<<1|
		(!FOLDING_OF_IT_INSTRUCTION_INITIAL_STATE)<<2|
		(!FLOATING_POINT_INSTRUCTIONS_INITIAL_STATE)<<9;

SCB.ICSR.DATA=(!SYS_TICK_EXCEPTION_PENDING_INITIAL_STATE)<<25|
				SYS_TICK_EXCEPTION_PENDING_INITIAL_STATE<<26|
			  (!PEND_SV_EXCEPTION_PENDING_INITIAL_STATE)<<27|
			    PEND_SV_EXCEPTION_PENDING_INITIAL_STATE<<28|
				NMI_EXCEPTION_PENDING_INITIAL_STATE<<31;

SCB.VTOR.TBLOFF=(VECTOR_TABLE_INITIAL_OFFSET-(VECTOR_TABLE_INITIAL_OFFSET%128));

SCB.AIRCR.DATA=INITIAL_PRIORITY_GROUPING_STYLE<<8|0X05FA0000;

SCB.SCR.DATA=SLEEP_ON_EXIT_FROM_INTERRUPT_INITIAL_STATE<<1|
			 INITIAL_SLEEP_MODE<<2|
			 WAKES_UP_INTERRUPT_INITIAL_STATE<<4;

SCB.CCR.DATA=WHEN_TO_ENTER_THREAD_MODE_INITIAL_STATE|
			 UNALIGNED_ACCESS_TRAPPING_INITIAL_STATE<<3|
			 DIVIDE_BY_ZERO_TRAPPING_INITIAL_STATE<<4|
			 (!IGNORING_DATA_BUS_FAULTS_CAUSED_BY_LOAD_AND_STORE_INSTRUCTIONS_INITIAL_STATE)<<8|
			 STACK_ALIGNMENT_INITIAL_VALUE<<8;

SCB.SHPR.DATA0=MEMORY_MANAGEMENT_FAULT_EXCEPTIONS_PRIORITY<<4|
		       BUS_FAULT_EXCEPTIONS_PRIORITY<<12|
			   USAGE_FAULT_EXCEPTIONS_PRIORITY<<20;

SCB.SHPR.DATA1=SV_CALL_EXCEPTIONS_PRIORITY<<28;

SCB.SHPR.DATA2=PEND_SV_EXCEPTIONS_PRIORITY<<20|
			   SYS_TICK_EXCEPTIONS_PRIORITY<<28;

SCB.SHCSR.DATA=MEMORY_MANAGEMENT_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE|
			   BUS_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE<<1|
			   USAGE_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE<<3|
			   SV_CALL_EXCEPTION_ACTIVE_INITIAL_STATE<<7|
			   DEBUG_MONITOR_EXCEPTION_ACTIVE_INITIAL_STATE<<8|
			   PEND_SV_EXCEPTION_ACTIVE_INITIAL_STATE<<10|
			   SYS_TICK_EXCEPTION_ACTIVE_INITIAL_STATE<<11|
			   USAGE_FAULT_EXCEPTION_PENDING_INITIAL_STATE<<12|
			   MEMORY_MANAGEMENT_FAULT_EXCEPTION_PENDING_INITIAL_STATE<<13|
			   BUS_FAULT_EXCEPTION_PENDING_INITIAL_STATE<<14|
			   SV_CALL_EXCEPTION_PENDING_INITIAL_STATE<<15|
			   MEMORY_MANAGEMENT_FAULT_EXCEPTION_INITIAL_STATE<<16|
			   BUS_FAULT_EXCEPTION_INITIAL_STATE<<17|
			   USAGE_FAULT_EXCEPTION_INITIAL_STATE<<18;

}


/*RUN-TIME CONFIGURATION*/
void SCB_ct::SCB_vInterruptOfMultiCycleInstructionDisable(void)
{

	SCB.ACTLR.DISMCYCINT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vInterruptOfMultiCycleInstructionEnable(void)
{

	SCB.ACTLR.DISMCYCINT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vCortexM4WriteBufferDisable(void)
{

	SCB.ACTLR.DISDEFWBUF=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vCortexM4WriteBufferEnable(void)
{

	SCB.ACTLR.DISDEFWBUF=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vFoldingOfIT_InstructionDisable(void)
{

	SCB.ACTLR.DISFOLD=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vFoldingOfIT_InstructionEnable(void)
{

	SCB.ACTLR.DISFOLD=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vFloatingPointInstructionsDisable(void)
{

	SCB.ACTLR.DISOOFP=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vFloatingPointInstructionsEnable(void)
{

	SCB.ACTLR.DISOOFP=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vSleepOnExitFromInterruptEnable(void)
{

	SCB.SCR.SLEEPONEXIT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vSleepOnExitFromInterruptDisable(void)
{

	SCB.SCR.SLEEPONEXIT=SCB__STATE___DISABLE;

}

void SCB_ct::SCB_vRemoveSysTickPendingExceptionState(void)
{

	 SCB.ICSR.PENDSTCLR=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vChangeSysTickExceptionStateToPending(void)
{

	 SCB.ICSR.PENDSTSET=SCB__STATE___ENABLE;

}
void SCB_ct::SCB_vMemoryManagementFaultExceptionEnable(void)
{

	SCB.SHCSR.MEMFAULTENA=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vMemoryManagementFaultExceptionDisable(void)
{

	SCB.SHCSR.MEMFAULTENA=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vBusFaultExceptionEnable(void)
{

	SCB.SHCSR.BUSFAULTENA=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vBusFaultExceptionDisable(void)
{

	SCB.SHCSR.BUSFAULTENA=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vUsageFaultExceptionEnable(void)
{

	SCB.SHCSR.USGFAULTENA=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vUsageFaultExceptionDisable(void)
{

	SCB.SHCSR.USGFAULTENA=SCB__STATE___DISABLE;

}


CpuVendor_et SCB_ct::SCB_enuCpuVendor(void)
{

 return (CpuVendor_et)SCB.CPUID.IMPLEMENTER;

}


uint8_kt SCB_ct::SCB_u8CpuRevisionId(void)
{

	return SCB.CPUID.VARIANT;

}


CpuType_et SCB_ct::SCB_enuCpuType(void)
{

	return (CpuType_et)SCB.CPUID.PARTNO;

}


uint8_kt SCB_ct::SCB_u8CpuRevisionNumber(void)
{

	return (CpuType_et)SCB.CPUID.REVISION;

}


uint16_kt SCB_ct::SCB_u16ReadCurrentlyActiveExceptionsNumber(void)
{

	return SCB.ICSR.VECTACTIVE;

}



PremptedActiveExeptionState_et SCB_ct::SCB_enuCheckIfTherePremptedActiveExeption(void)
{

	return (PremptedActiveExeptionState_et)SCB.ICSR.RETOBASE;

}



uint8_kt SCB_ct::SCB_u16ReadTheExeptionNumberOfTheHighestPriorityPendingExeption(void)
{

	return SCB.ICSR.VECTPENDING;

}



PendingExceptionState_et SCB_ct::SCB_enuCheckIfTherePendingInterrupt(void)
{

	return (PendingExceptionState_et)SCB.ICSR.ISRPENDING;

}



PendingExceptionState_et SCB_ct::SCB_enuReadSysTickExceptionPendingStateFlag(void)
{

	 return (PendingExceptionState_et)SCB.ICSR.PENDSTSET;

}


void SCB_ct::SCB_vRemovePendSV_PendingExceptionState(void)
{

	 SCB.ICSR.PENDSVCLR=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vChangePendSV_ExceptionStateToPending(void)
{

	 SCB.ICSR.PENDSVSET=SCB__STATE___ENABLE;

}


PendingExceptionState_et SCB_ct::SCB_enuReadPendSV_ExceptionPendingStateFlag(void)
{

	 return (PendingExceptionState_et)SCB.ICSR.PENDSVSET;

}


void SCB_ct::SCB_vChangeNMI_ExceptionStateToPending(void)
{

	 SCB.ICSR.NMIPENDSET=SCB__STATE___ENABLE;

}


PendingExceptionState_et SCB_ct::SCB_enuReadNMI_ExceptionPendingStateFlag(void)
{

	 return (PendingExceptionState_et)SCB.ICSR.NMIPENDSET;

}



ErrorStatus_et SCB_ct::SCB_enuSetVectorTableOffset(uint32_kt u32AddressCpy)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(((u32AddressCpy%128)==0)&&(u32AddressCpy<0X001FFF80))
	{
		SCB.VTOR.TBLOFF=u32AddressCpy;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatusLoc_e;
}


void SCB_ct::SCB_vRequestSystemReset(void)
{

	SCB.AIRCR.DATA=0X05FA0004;
	while(SCB.AIRCR.SYSRESETREQ);
}

void SCB_ct::SCB_vSetPriorityGroupingStyle(PriorityGroupingStyle_et PriorityGroupingStyle_e)
{

	SCB.AIRCR.DATA=0X05FA0000|PriorityGroupingStyle_e<<8;

}


void SCB_ct::SCB_vSetSleepMode(SleepMode_et SleepMode_e)
{

	SCB.SCR.SLEEPDEEP=SleepMode_e;

}


void SCB_ct::SCB_vWakesUpInterruptState(WakesUpInterruptState_et WakesUpInterruptState_e)
{

	SCB.SCR.SEVEONPEND=WakesUpInterruptState_e;

}


void SCB_ct::SCB_vWhenToEnterThreadMode(ThreadModeTime_et ThreadModeTime_e)
{

	SCB.CCR.NONBASETHRDENA=ThreadModeTime_e;

}


void SCB_ct::SCB_vUnalignedAccessTrappingState(SCB_State_et UnalignedAccessTrappingState_e)
{

	SCB.CCR.UNALIGN_TRP=UnalignedAccessTrappingState_e;

}

void SCB_ct::SCB_vDivideByZeroTrappingState(SCB_State_et DivideByZeroTrappingState_e)
{

	SCB.CCR.DIV_0_TRP=DivideByZeroTrappingState_e;

}

void SCB_ct::SCB_vIgnoringDataBusFaultsCausedByLoadAndStoreInstructionsState(IgnoringDataBusFaultsState_et IgnoringDataBusFaultsState_e)
{

	SCB.CCR.BFHFNMIGN=IgnoringDataBusFaultsState_e;

}

void SCB_vSetStackAlignment(StackAlignment_et StackAlignment_e)
{

	SCB.CCR.STKALIGN=StackAlignment_e;

}

ErrorStatus_et SCB_ct::SCB_enuSetSystemExceptionsPriority(SystemException_et SystemException_e,PriorityGroupAndSubgroup_et PriorityGroupAndSubgroup_e)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(((SCB.AIRCR.PRIGROUP==SCB__PRIORITY_GROUPING_STYLE___16_GROUP_1_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<=SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_16_SUBGROUP_1))

	 ||((SCB.AIRCR.PRIGROUP==SCB__PRIORITY_GROUPING_STYLE___8_GROUP_2_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((SCB.AIRCR.PRIGROUP==SCB__PRIORITY_GROUPING_STYLE___4_GROUP_4_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((SCB.AIRCR.PRIGROUP==SCB__PRIORITY_GROUPING_STYLE___2_GROUP_8_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((SCB.AIRCR.PRIGROUP==SCB__PRIORITY_GROUPING_STYLE___1_GROUP_16_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<=SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_16  &&
		  PriorityGroupAndSubgroup_e>=SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1 )))
	{
		if(SystemException_e==SCB__SYSTEM_EXCEPTION___MEMORY_MANAGEMENT_FAULT_EXCEPTION)
		{
			SCB.SHPR.PRI_4=PriorityGroupAndSubgroup_e;
		}
		else if(SystemException_e==SCB__SYSTEM_EXCEPTION___BUS_FAULT_EXCEPTION)
		{
			SCB.SHPR.PRI_5=PriorityGroupAndSubgroup_e%16;
		}
		else if(SystemException_e==SCB__SYSTEM_EXCEPTION___USAGE_FAULT_EXCEPTION)
		{
			SCB.SHPR.PRI_6=PriorityGroupAndSubgroup_e%16;
		}
		else if(SystemException_e==SCB__SYSTEM_EXCEPTION___SV_CALL_EXCEPTION)
		{
			SCB.SHPR.PRI_11=PriorityGroupAndSubgroup_e%16;
		}
		else if(SystemException_e==SCB__SYSTEM_EXCEPTION___PEND_SV_EXCEPTION)
		{
			SCB.SHPR.PRI_14=PriorityGroupAndSubgroup_e%16;
		}
		else if(SystemException_e==SCB__SYSTEM_EXCEPTION___SYSTICK_EXCEPTION)
		{
			SCB.SHPR.PRI_15=PriorityGroupAndSubgroup_e%16;
		}
	}
	
	else
	{
		ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatusLoc_e;


}






void SCB_ct::SCB_vForceEnterMemoryManagementFaultExceptionActiveState(void)
{

	SCB.SHCSR.MEMFAULTACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitMemoryManagementFaultExceptionActiveState(void)
{

	SCB.SHCSR.MEMFAULTACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterBusFaultExceptionActiveState(void)
{

	SCB.SHCSR.BUSFAULTACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitBusFaultExceptionActiveState(void)
{

	SCB.SHCSR.BUSFAULTACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterUsageFaultExceptionActiveState(void)
{

	SCB.SHCSR.USGFAULTACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitUsageFaultExceptionActiveState(void)
{

	SCB.SHCSR.USGFAULTACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterSV_CallExceptionActiveState(void)
{

	SCB.SHCSR.SVCALLACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitSV_CallExceptionActiveState(void)
{

	SCB.SHCSR.SVCALLACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterDebugMonitorExceptionActiveState(void)
{

	SCB.SHCSR.MONITORACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitDebugMonitorExceptionActiveState(void)
{

	SCB.SHCSR.MONITORACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterPendSV_ExceptionActiveState(void)
{

	SCB.SHCSR.PENDSVACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitPendSV_ExceptionActiveState(void)
{

	SCB.SHCSR.PENDSVACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterSysTickExceptionActiveState(void)
{

	SCB.SHCSR.SYSTICKACT=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitSysTickExceptionPendingState(void)
{

	SCB.SHCSR.SYSTICKACT=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterMemoryManagementFaultExceptionPendingState(void)
{

	SCB.SHCSR.MEMFAULTPENDED=SCB__STATE___ENABLE;


}


void SCB_ct::SCB_vForceExitMemoryManagementFaultExceptionPendingState(void)
{

	SCB.SHCSR.MEMFAULTPENDED=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterBusFaultExceptionPendingState(void)
{

	SCB.SHCSR.BUSFAULTPENDED=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitBusFaultExceptionPendingState(void)
{

	SCB.SHCSR.BUSFAULTPENDED=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterUsageFaultExceptionPendingState(void)
{

	SCB.SHCSR.USGFAULTPENDED=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitUsageFaultExceptionPendingState(void)
{

	SCB.SHCSR.USGFAULTPENDED=SCB__STATE___DISABLE;

}


void SCB_ct::SCB_vForceEnterSV_CallExceptionPendingState(void)
{

	SCB.SHCSR.SVCALLPENDED=SCB__STATE___ENABLE;

}


void SCB_ct::SCB_vForceExitSV_CallExceptionPendingState(void)
{

	SCB.SHCSR.SVCALLPENDED=SCB__STATE___DISABLE;

}



SCB_State_et SCB_ct::SCB_enuReadMemoryManagementFaultExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.MEMFAULTACT;

}


SCB_State_et SCB_ct::SCB_enuReadBusFaultExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.BUSFAULTACT;

}


SCB_State_et SCB_ct::SCB_enuReadUsageFaultExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.USGFAULTACT;

}


SCB_State_et SCB_ct::SCB_enuReadSV_CallExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.SVCALLACT;

}


SCB_State_et SCB_ct::SCB_enuReadDebugMonitorExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.MONITORACT;

}


SCB_State_et SCB_ct::SCB_enuReadPendSV_ExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.PENDSVACT;

}


SCB_State_et SCB_ct::SCB_enuReadSysTickExceptionActiveState(void)
{

	return (SCB_State_et)SCB.SHCSR.SYSTICKACT;

}


SCB_State_et SCB_ct::SCB_enuReadMemoryManagementFaultExceptionPendingState(void)
{

	return (SCB_State_et)SCB.SHCSR.MEMFAULTPENDED;

}


SCB_State_et SCB_ct::SCB_enuReadBusFaultExceptionPendingState(void)
{

	return (SCB_State_et)SCB.SHCSR.BUSFAULTPENDED;

}


SCB_State_et SCB_ct::SCB_enuReadUsageFaultExceptionPendingState(void)
{

	return (SCB_State_et)SCB.SHCSR.USGFAULTPENDED;

}


SCB_State_et SCB_ct::SCB_enuReadSV_CallExceptionPendingState(void)
{

	return (SCB_State_et)SCB.SHCSR.SVCALLPENDED;

}





SystemFault_et SCB_ct::SCB_enuReadCurrentTrappedSystemFaultType(void)
{
  SystemFault_et SystemFaultLoc_e=SCB__SYSTEM_FAULT___NO_FAULT;



  	if(SCB.CFSR.IACCVIOL)
  	{
  		SystemFaultLoc_e=SCB__MEMORY_MANAGEMENT_FAULT___INSTRUCTION_ACCESS_VIOLATION;
  	}
  	else if(SCB.CFSR.DACCVIOL)
  	{
  		SystemFaultLoc_e=SCB__MEMORY_MANAGEMENT_FAULT___DATA_ACCESS_VIOLATION;
  	}
  	else if(SCB.CFSR.MUNSTKERR)
  	{
  		SystemFaultLoc_e=SCB__MEMORY_MANAGEMENT_FAULT___EXCEPTION_RETURN_UNSTACKING_FAIL;
  	}
  	else if(SCB.CFSR.MSTKERR)
  	{
  		SystemFaultLoc_e=SCB__MEMORY_MANAGEMENT_FAULT___EXCEPTION_ENTRY_STACKING_FAIL;
  	}
  	else if(SCB.CFSR.MLSPERR)
  	{
  		SystemFaultLoc_e=SCB__MEMORY_MANAGEMENT_FAULT___FLOATING_POINT_LAZY_STATE_PRESERVATION;
  	}
  	else if(SCB.CFSR.IBUSERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___INSTRUCTION_BUS_ERROR;
  	}
  	else if(SCB.CFSR.PRECISERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___PRECISE_DATA_BUS_ERROR;
  	}
  	else if(SCB.CFSR.IMPRECISERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___IMPRECISE_DATA_BUS_ERROR;
  	}
  	else if(SCB.CFSR.UNSTKERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___EXCEPTION_RETURN_UNSTACKING_FAIL;
  	}
  	else if(SCB.CFSR.STKERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___EXCEPTION_ENTRY_STACKING_FAIL;
  	}
  	else if(SCB.CFSR.LSPERR)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT___FLOATING_POINT_LAZY_STATE_PRESERVATION;
  	}
  	else if(SCB.CFSR.UNDEFINSTR)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___UNDEFINED_INSTRUCTION;
  	}
  	else if(SCB.CFSR.INVSTATE)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___STACKING_OF_AN_PROGRAM_COUNTER_ADDRESS_POINTS_TO_AN_INSTRUCTION_THAT_ATTEMPTED_AN_ILLEGAL_USE_OF_THE_STATUS_REGISTER;
  	}
  	else if(SCB.CFSR.INVPC)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___UNSTACKING_OF_AN_PROGRAM_COUNTER_ADDRESS_POINTS_TO_AN_INSTRUCTION_THAT_ATTEMPTED_AN_ILLEGAL_LOAD_OF_THE_PROGRAM_COUNTER;
  	}
  	else if(SCB.CFSR.NOCP)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___THE_PROCESSOR_ATTEMPTED_TO_ACCESS_A_COPROCESSOR;
  	}
  	else if(SCB.CFSR.UNALIGNED)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___UNALIGNED_MEMORY_ACCESS;
  	}
  	else if(SCB.CFSR.DIVBYZERO)
  	{
  		SystemFaultLoc_e=SCB__USAGE_FAULT___DIVIDE_BY_ZERO;
  	}
  	else if(SCB.CFSR.VECTTBL)
  	{
  		SystemFaultLoc_e=SCB__BUS_FAULT_ESCALATED_TO_HARD_FAULT___THE_EXCEPTION_IS_PROCESSED_BEFORE_FINISHING_THE_CURRENT_INSTRUCTION_EXECUTION;
  	}
  	else if(SCB.CFSR.FORCED)
  	{
  		SystemFaultLoc_e=SCB__HARD_FAULT___FORCED_HARD_FAULT;
  	}

   return SystemFaultLoc_e;
}


void SCB_ct::SCB_vClearCurrentTrappedSystemFaults(void)
{

	SCB.CFSR.DATA=0X10000002030F0000;

}


AddressValidityState_et SCB_ct::SCB_enuCheckCurrentBusFaultValidAddressExistance(void)
{

	return (AddressValidityState_et)SCB.CFSR.BFARVALID;

}


AddressValidityState_et SCB_ct::SCB_enuCheckCurrentMemoryManagementFaultValidAddressExistance(void)
{

	return (AddressValidityState_et)SCB.CFSR.MMARVALID;

}


uint32_kt SCB_ct::SCB_u32ReadCurrentBusFaultAddress(void)
{

	return SCB.BFAR.DATA;

}


uint32_kt SCB_ct::SCB_u32ReadCurrentMemoryManagementFaultAddress(void)
{

	return SCB.MMAR.DATA;

}


uint32_kt SCB_ct::SCB_u32ReadCurrentAuxiliaryFaultAddress(void)
{

	return SCB.AFSR.DATA;

}


ErrorStatus_et SCB_ct::SCB_enuSetMemoryManagementFaultExceptionCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfMemoryManagementFaultExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}


ErrorStatus_et SCB_ct::SCB_enuSetBusFaultExceptionCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfBusFaultExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}


ErrorStatus_et SCB_ct::SCB_enuSetUsageFaultExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfUsageFaultExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;

}




ErrorStatus_et SCB_ct::SCB_enuSetDebugMonitorExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfDebugMonitorExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;

}


ErrorStatus_et SCB_ct::SCB_enuSetPendSV_ExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfPendSV_ExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;

}

ErrorStatus_et SCB_ct::SCB_enuSetNMI_ExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfNMI_ExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;

}

ErrorStatus_et SCB_ct::SCB_enuSetHardFaultExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfHardFaultExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;

}



extern "C"{

void NMI_Handler(void)
{

	if(pfNMI_ExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfNMI_ExceptionCallBack();
	}


}


void HardFault_Handler(void)
{

	if(pfHardFaultExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfHardFaultExceptionCallBack();
	}


}



void MemManage_Handler(void)
{

	if(pfMemoryManagementFaultExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfMemoryManagementFaultExceptionCallBack();
	}

}



void BusFault_Handler(void)
{

	if(pfBusFaultExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfBusFaultExceptionCallBack();
	}

}



void UsageFault_Handler(void)
{

	if(pfUsageFaultExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfUsageFaultExceptionCallBack();
	}

}







void DebugMonitor_Handler(void)
{

	if(pfDebugMonitorExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfDebugMonitorExceptionCallBack();
	}

}

void PendSV_Handler(void)
{

	if(pfPendSV_ExceptionCallBack!=NULL_PTR_TO_FUNC)
	{
		pfPendSV_ExceptionCallBack();
	}

}

}



















