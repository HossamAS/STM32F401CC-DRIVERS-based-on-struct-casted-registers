/**************************************/
/* Description : FPU interface File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 14:37:32  28 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FPU_INTERFACE_H
#define FPU_INTERFACE_H

typedef enum{
	FPU__COPROCESSOR___10,
	FPU__COPROCESSOR___11
}Coprocessor_et;



typedef enum __attribute__((__packed__)){
	FPU__COPROCESSOR_ACCESSABILITY___DENIED,
	FPU__COPROCESSOR_ACCESSABILITY___PRIVILEGED_ACCESS_ONLY,
	FPU__COPROCESSOR_ACCESSABILITY___FULL_ACCESS=3
}CoprocessorAccessability_et;
typedef enum __attribute__((__packed__)){
	FPU__STATE___DISABLE,
	FPU__STATE___ENABLE

}FPU_State_et;
typedef enum __attribute__((__packed__)){
	FPU__PRIVILEGED_ACCESS_STATE___UNPRIVILEGED,
	FPU__PRIVILEGED_ACCESS_STATE___PRIVILEGED
}PrivilegedAcessState_et;
typedef enum __attribute__((__packed__)){
	FPU__USER_ACCESS_MODE___HANDLER_MODE,
	FPU__USER_ACCESS_MODE___THREAD_MODE

}UserAccessMode_et;
typedef enum __attribute__((__packed__)){
	FPU__ACTIVATION_MODE___NOT_ACTIVE,
	FPU__ACTIVATION_MODE___ACTIVE

}ActivationMode_et;
typedef enum __attribute__((__packed__)){
	FPU__ROUNDING_MODE___ROUND_TO_NEAREST,
	FPU__ROUNDING_MODE___ROUND_TO_POSITIVE_INFINITY,
	FPU__ROUNDING_MODE___ROUND_TO_NEGATIVE_INFINITY,
	FPU__ROUNDING_MODE___ROUND_TOWARDS_ZERO
}RoundingMode_et;
class FPU_ct{
public:
	 FPU_ct(void);
void FPU_vSetCoprocessorAccessability(Coprocessor_et Coprocessor_e,CoprocessorAccessability_et CoprocessorAccessability_e);

void FPU_vForceLazyStatePreservationModeFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadLazyStatePreservationModeFlag(void);

void FPU_vForceUserAccessStateFlag(PrivilegedAcessState_et PrivilegedAcessState_e);
PrivilegedAcessState_et FPU_enuReadUserAccessStateFlag(void);

void FPU_vForceUserModeFlag(UserAccessMode_et UserAccessMode_e);
UserAccessMode_et FPU_enuReadUserModeFlag(void);


void FPU_vForceHardFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadeHardFaultHandlerPendingStateReadyFlag(void);

void FPU_vForceMemoryManagmentFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadeMemoryManagmentFaultHandlerPendingStateReadyFlag(void);

void FPU_vForceBusFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadBusFaultHandlerPendingStateReadyFlag(void);

void FPU_vForceDebugMonitorHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadDebugMonitorHandlerPendingStateReadyFlag(void);

void  FPU_vSetAutomaticLazyStatePreservation(FPU_State_et FPU_State_e);

void  FPU_vSetControl_2_State(FPU_State_et FPU_State_e);

uint32_kt  FPU_u32ReadStackedRegistersFirstAddress(void);

void FPU_vForceInvalidOperationExceptionFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadInvalidOperationExceptionFlag(void);

void FPU_vForceDivideByZeroExceptionFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadDivideByZeroExceptionFlag(void);

void FPU_vForceOverflowExceptionFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadOverflowExceptionFlag(void);


void FPU_vForceUnderflowExceptionFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadUnderflowExceptionFlag(void);

void FPU_vForceInputDenormalExceptionFlag(ActivationMode_et ActivationMode_e);
ActivationMode_et FPU_enuReadInputDenormalExceptionFlag(void);

void FPU_vSetRoundingMode(RoundingMode_et RoundingMode_e);
void FPU_vSetFlushToZeroState(FPU_State_et FPU_State_e);

void FPU_vSetDefaultNAN_State(FPU_State_et FPU_State_e);
void FPU_vSetAlternateHalfPrecision_State(FPU_State_et FPU_State_e);

ActivationMode_et FPU_enuReadOverflowConditionFlag(void);

ActivationMode_et FPU_enuReadCarryConditionFlag(void);

ActivationMode_et FPU_enuReadZeroConditionFlag(void);

ActivationMode_et FPU_enuReadNegativeConditionFlag(void);

RoundingMode_et FPU_enuReadDefaultRoundingMode(void);
FPU_State_et FPU_venuReadDefaultFlushToZeroState( void);

FPU_State_et FPU_venuReadDefaultNAN_State(void);
FPU_State_et FPU_venuReadDefaultAlternateHalfPrecision_State(void);



#if(INVALID_OPERATION_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetInvalidOperationCumulativeExceptionCallBack(pf pfCallBack);
#endif
#if(DIVISION_BY_ZERO_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetDivisionByZeroCumulativeExceptionCallBack(pf pfCallBack);
#endif
#if(OVERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetOverFlowCumulativeExceptionCallBack(pf pfCallBack);
#endif
#if(UNDERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetUnderFlowCumulativeExceptionCallBack(pf pfCallBack);
#endif
#if(INEXACT_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetInExactCumulativeExceptionCallBack(pf pfCallBack);
#endif
#if(INPUT_DENORMAL_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_enuSetInPutDenormalCumulativeExceptionCallBack(pf pfCallBack);
#endif


};






#endif
