/**************************************/
/* Description : SCB interface File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:55:45  25 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef SCB_INTERFACE_H
#define SCB_INTERFACE_H

typedef enum  __attribute__((__packed__)){
	SCB__CPU_VENDOR___ARM=0X41,
}CpuVendor_et;
typedef enum  __attribute__((__packed__)){
	SCB__CPU_TYPE___Cortex_M4=0XC24,
}CpuType_et;
typedef enum  __attribute__((__packed__)){
	SCB__PREMPTED_ACTIVE_EXCEPTION_STATE___THERE_ARE_PREMPTED_ACTIVE_EXCEPTIONS,
	SCB__PREMPTED_ACTIVE_EXCEPTION_STATE___THERE_ARE_NO_PREMPTED_ACTIVE_EXCEPTIONS,
}PremptedActiveExeptionState_et;
typedef enum  __attribute__((__packed__)){
	SCB__PENDING_EXCEPTION_STATE___THERE_ARE_NO_PENDED_EXCEPTION,
	SCB__PENDING_EXCEPTION_STATE___THERE_ARE_A_PENDED_EXCEPTION,
}PendingExceptionState_et;
typedef enum  __attribute__((__packed__)){
	SCB__PENDING_INTERRUPT_STATE___THERE_ARE_NO_PENDED_INTERRUPT,
	SCB__PENDING_INTERRUPT_STATE___THERE_ARE_A_PENDED_INTERRUPT,
}PendingStateFlag_et;
typedef enum  __attribute__((__packed__)){
	SCB__PRIORITY_GROUPING_STYLE___16_GROUP_1_SUBGROUPS,
	SCB__PRIORITY_GROUPING_STYLE___8_GROUP_2_SUBGROUPS=4,
	SCB__PRIORITY_GROUPING_STYLE___4_GROUP_4_SUBGROUPS,
	SCB__PRIORITY_GROUPING_STYLE___2_GROUP_8_SUBGROUPS,
	SCB__PRIORITY_GROUPING_STYLE___1_GROUP_16_SUBGROUPS,
}PriorityGroupingStyle_et;
typedef enum  __attribute__((__packed__)){
	SCB__SLEEP_MODE___NORMAL_SLEEP,
	SCB__SLEEP_MODE___DEEP_SLEEP
}SleepMode_et;
typedef enum  __attribute__((__packed__)){
	SCB__WAKE_UP_INTERRUPT___EVENTS_AND_ENABLED_INTERRUPTS_CAN_WAKE_UP_THE_CPU,
	SCB__WAKE_UP_INTERRUPT___EVENTS_AND_ENABLED_OR_DISABLED_INTERRUPTS_CAN_WAKE_UP_THE_CPU
}WakesUpInterruptState_et;
typedef enum  __attribute__((__packed__)){
	SCB__THREAD_MODE_TIME___WHEN_NO_EXCEPTION_IS_ACTIVE,
	SCB__THREAD_MODE_TIME___WITH_ANY_EXCEPTION_RETURN
}ThreadModeTime_et;

typedef enum  __attribute__((__packed__)){
	SCB__STATE___DISABLE,
	SCB__STATE___ENABLE
}SCB_State_et;
typedef enum  __attribute__((__packed__)){
	SCB__IGNORING_DATA_BUS_FAULTS_STATE___DONOT_IGNORE,
	SCB__IGNORING_DATA_BUS_FAULTS_STATE___IGNORE
}IgnoringDataBusFaultsState_et;
typedef enum  __attribute__((__packed__)){
	SCB__STACK_ALIGNMENT___4_BYTE_ALIGNMENT,
	SCB__STACK_ALIGNMENT___8_BYTE_ALIGNEMNT
}StackAlignment_et;
typedef enum  __attribute__((__packed__)){
	SCB__SYSTEM_EXCEPTION___MEMORY_MANAGEMENT_FAULT_EXCEPTION,
	SCB__SYSTEM_EXCEPTION___BUS_FAULT_EXCEPTION,
	SCB__SYSTEM_EXCEPTION___USAGE_FAULT_EXCEPTION,
	SCB__SYSTEM_EXCEPTION___SV_CALL_EXCEPTION,
	SCB__SYSTEM_EXCEPTION___PEND_SV_EXCEPTION,
	SCB__SYSTEM_EXCEPTION___SYSTICK_EXCEPTION,
}SystemException_et;
typedef enum  __attribute__((__packed__)){
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_2_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_3_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_4_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_5_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_6_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_7_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_8_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_9_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_10_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_11_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_12_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_13_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_14_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_15_SUBGROUP_1,
	SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_16_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_2_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_2_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_3_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_3_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_4_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_4_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_5_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_5_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_6_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_6_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_7_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_7_SUBGROUP_2,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_8_SUBGROUP_1,
	SCB__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_8_SUBGROUP_2,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_2,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_3,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_4,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_1,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_2,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_3,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_4,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_1,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_2,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_3,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_4,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_1,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_2,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_3,
	SCB__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_4,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_2,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_3,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_4,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_5,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_6,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_7,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_8,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_1,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_2,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_3,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_4,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_5,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_6,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_7,
	SCB__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_8,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_2,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_3,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_4,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_5,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_6,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_7,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_8,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_9,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_10,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_11,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_12,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_13,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_14,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_15,
	SCB__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_16,
}PriorityGroupAndSubgroup_et;

typedef enum  __attribute__((__packed__)){
	SCB__SYSTEM_FAULT___NO_FAULT,
    SCB__MEMORY_MANAGEMENT_FAULT___INSTRUCTION_ACCESS_VIOLATION,
    SCB__MEMORY_MANAGEMENT_FAULT___DATA_ACCESS_VIOLATION,
    SCB__MEMORY_MANAGEMENT_FAULT___EXCEPTION_RETURN_UNSTACKING_FAIL,
    SCB__MEMORY_MANAGEMENT_FAULT___EXCEPTION_ENTRY_STACKING_FAIL,
    SCB__MEMORY_MANAGEMENT_FAULT___FLOATING_POINT_LAZY_STATE_PRESERVATION,
    SCB__BUS_FAULT___INSTRUCTION_BUS_ERROR=8,
    SCB__BUS_FAULT___PRECISE_DATA_BUS_ERROR,
    SCB__BUS_FAULT___IMPRECISE_DATA_BUS_ERROR,
    SCB__BUS_FAULT___EXCEPTION_RETURN_UNSTACKING_FAIL,
    SCB__BUS_FAULT___EXCEPTION_ENTRY_STACKING_FAIL,
    SCB__BUS_FAULT___FLOATING_POINT_LAZY_STATE_PRESERVATION,
    SCB__USAGE_FAULT___UNDEFINED_INSTRUCTION,
	SCB__USAGE_FAULT___STACKING_OF_AN_PROGRAM_COUNTER_ADDRESS_POINTS_TO_AN_INSTRUCTION_THAT_ATTEMPTED_AN_ILLEGAL_USE_OF_THE_STATUS_REGISTER,
	SCB__USAGE_FAULT___UNSTACKING_OF_AN_PROGRAM_COUNTER_ADDRESS_POINTS_TO_AN_INSTRUCTION_THAT_ATTEMPTED_AN_ILLEGAL_LOAD_OF_THE_PROGRAM_COUNTER,
	SCB__USAGE_FAULT___THE_PROCESSOR_ATTEMPTED_TO_ACCESS_A_COPROCESSOR,
	SCB__USAGE_FAULT___UNALIGNED_MEMORY_ACCESS=24,
	SCB__USAGE_FAULT___DIVIDE_BY_ZERO=33,
	SCB__BUS_FAULT_ESCALATED_TO_HARD_FAULT___THE_EXCEPTION_IS_PROCESSED_BEFORE_FINISHING_THE_CURRENT_INSTRUCTION_EXECUTION=61,
	SCB__HARD_FAULT___FORCED_HARD_FAULT
}SystemFault_et;
typedef enum  __attribute__((__packed__)){
	SCB__ADDRESS_VALIDITY_STATUS___NOT_VALID,
	SCB__ADDRESS_VALIDITY_STATUS___VALID,
}AddressValidityState_et;


class SCB_ct{
public:
/*PRE-BUILD CONFIGURATION(PRE-PROCESSING)*/
	SCB_ct(void);
/*RUN-TIME CONFIGURATION*/
void SCB_vInterruptOfMultiCycleInstructionDisable(void);
void SCB_vInterruptOfMultiCycleInstructionEnable(void);
void SCB_vCortexM4WriteBufferDisable(void);
void SCB_vCortexM4WriteBufferEnable(void);
void SCB_vFoldingOfIT_InstructionDisable(void);
void SCB_vFoldingOfIT_InstructionEnable(void);
void SCB_vFloatingPointInstructionsDisable(void);
void SCB_vFloatingPointInstructionsEnable(void);
void SCB_vSleepOnExitFromInterruptEnable(void);
void SCB_vSleepOnExitFromInterruptDisable(void);
void SCB_vMemoryManagementFaultExceptionEnable(void);
void SCB_vMemoryManagementFaultExceptionDisable(void);
void SCB_vBusFaultExceptionEnable(void);
void SCB_vBusFaultExceptionDisable(void);
void SCB_vUsageFaultExceptionEnable(void);
void SCB_vUsageFaultExceptionDisable(void);

/*RUN-TIME APIs*/
CpuVendor_et SCB_enuCpuVendor(void);
uint8_kt SCB_u8CpuRevisionId(void);
CpuType_et SCB_enuCpuType(void);
uint8_kt SCB_u8CpuRevisionNumber(void);
uint16_kt SCB_u16ReadCurrentlyActiveExceptionsNumber(void);
PremptedActiveExeptionState_et SCB_enuCheckIfTherePremptedActiveExeption(void);
uint8_kt SCB_u16ReadTheExeptionNumberOfTheHighestPriorityPendingExeption(void);
PendingExceptionState_et SCB_enuCheckIfTherePendingInterrupt(void);
void SCB_vRemoveSysTickPendingExceptionState(void);
void SCB_vChangeSysTickExceptionStateToPending(void);
PendingExceptionState_et SCB_enuReadSysTickExceptionPendingStateFlag(void);
void SCB_vRemovePendSV_PendingExceptionState(void);
void SCB_vChangePendSV_ExceptionStateToPending(void);
PendingExceptionState_et SCB_enuReadPendSV_ExceptionPendingStateFlag(void);
void SCB_vChangeNMI_ExceptionStateToPending(void);
PendingExceptionState_et SCB_enuReadNMI_ExceptionPendingStateFlag(void);
ErrorStatus_et SCB_enuSetVectorTableOffset(uint32_kt u32AddressCpy);
void SCB_vRequestSystemReset(void);
void SCB_vSetPriorityGroupingStyle(PriorityGroupingStyle_et PriorityGroupingStyle_e);
void SCB_vSetSleepMode(SleepMode_et SleepMode_e);
void SCB_vWakesUpInterruptState(WakesUpInterruptState_et WakesUpInterruptState_e);
void SCB_vWhenToEnterThreadMode(ThreadModeTime_et ThreadModeTime_e);
void SCB_vUnalignedAccessTrappingState(SCB_State_et UnalignedAccessTrappingState_e);
void SCB_vDivideByZeroTrappingState(SCB_State_et DivideByZeroTrappingState_e);
void SCB_vIgnoringDataBusFaultsCausedByLoadAndStoreInstructionsState(IgnoringDataBusFaultsState_et IgnoringDataBusFaultsState_e);
void SCB_vSetStackAlignment(StackAlignment_et StackAlignment_e);
ErrorStatus_et SCB_enuSetSystemExceptionsPriority(SystemException_et SystemException_e,PriorityGroupAndSubgroup_et PriorityGroupAndSubgroup_e);
void SCB_vForceEnterMemoryManagementFaultExceptionActiveState(void);
void SCB_vForceExitMemoryManagementFaultExceptionActiveState(void);
void SCB_vForceEnterBusFaultExceptionActiveState(void);
void SCB_vForceExitBusFaultExceptionActiveState(void);
void SCB_vForceEnterUsageFaultExceptionActiveState(void);
void SCB_vForceExitUsageFaultExceptionActiveState(void);
void SCB_vForceEnterSV_CallExceptionActiveState(void);
void SCB_vForceExitSV_CallExceptionActiveState(void);
void SCB_vForceEnterDebugMonitorExceptionActiveState(void);
void SCB_vForceExitDebugMonitorExceptionActiveState(void);
void SCB_vForceEnterPendSV_ExceptionActiveState(void);
void SCB_vForceExitPendSV_ExceptionActiveState(void);
void SCB_vForceEnterSysTickExceptionActiveState(void);
void SCB_vForceExitSysTickExceptionPendingState(void);
void SCB_vForceEnterMemoryManagementFaultExceptionPendingState(void);
void SCB_vForceExitMemoryManagementFaultExceptionPendingState(void);
void SCB_vForceEnterBusFaultExceptionPendingState(void);
void SCB_vForceExitBusFaultExceptionPendingState(void);
void SCB_vForceEnterUsageFaultExceptionPendingState(void);
void SCB_vForceExitUsageFaultExceptionPendingState(void);
void SCB_vForceEnterSV_CallExceptionPendingState(void);
void SCB_vForceExitSV_CallExceptionPendingState(void);
SCB_State_et SCB_enuReadMemoryManagementFaultExceptionActiveState(void);
SCB_State_et SCB_enuReadBusFaultExceptionActiveState(void);
SCB_State_et SCB_enuReadUsageFaultExceptionActiveState(void);
SCB_State_et SCB_enuReadSV_CallExceptionActiveState(void);
SCB_State_et SCB_enuReadDebugMonitorExceptionActiveState(void);
SCB_State_et SCB_enuReadPendSV_ExceptionActiveState(void);
SCB_State_et SCB_enuReadSysTickExceptionActiveState(void);
SCB_State_et SCB_enuReadMemoryManagementFaultExceptionPendingState(void);
SCB_State_et SCB_enuReadBusFaultExceptionPendingState(void);
SCB_State_et SCB_enuReadUsageFaultExceptionPendingState(void);
SCB_State_et SCB_enuReadSV_CallExceptionPendingState(void);
SystemFault_et SCB_enuReadCurrentTrappedSystemFaultType(void);
void SCB_vClearCurrentTrappedSystemFaults(void);
AddressValidityState_et SCB_enuCheckCurrentBusFaultValidAddressExistance(void);
AddressValidityState_et SCB_enuCheckCurrentMemoryManagementFaultValidAddressExistance(void);
uint32_kt SCB_u32ReadCurrentBusFaultAddress(void);
uint32_kt SCB_u32ReadCurrentMemoryManagementFaultAddress(void);
uint32_kt SCB_u32ReadCurrentAuxiliaryFaultAddress(void);



ErrorStatus_et SCB_enuSetMemoryManagementFaultExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetBusFaultExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetUsageFaultExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetSV_CallExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetDebugMonitorExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetPendSV_ExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetNMI_ExceptionCallBack(pf pfCallBack);

ErrorStatus_et SCB_enuSetHardFaultExceptionCallBack(pf pfCallBack);


};



#endif
