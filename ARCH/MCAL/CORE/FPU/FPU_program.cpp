/**************************************/
/* Description : FPU program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 14:37:32  28 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/


#include "../../../LIB/STD_TYPES/STD_TYPES.h"

#include "FPU_interface.h"
#include "FPU_private.h"
#include "FPU_config.h"

FPU_ct::FPU_ct(void)
{

FPU.CPACR.DATA=COPROCESSOR_10_ACCESSABILITY_INITIAL_MODE<<20|
			   COPROCESSOR_11_ACCESSABILITY_INITIAL_MODE<<22;

FPU.FPCCR.DATA=AUTOMATIC_LAZY_STATE_PRESERVATION_INITIAL_STATE<<30|
		   	   CONTROL_2_INITIAL_STATE<<31;

FPU.FPSCR.DATA=ROUNDING_INITIAL_MODE<<22|FLUSH_TO_ZERO_INITIAL_STATE<<24|
			   DEFAULT_NAN_INITIAL_STATE<<25|ALTERNATE_HALF_PRECISION_INITIAL_STATE<<26;

}


void FPU_ct::FPU_vSetCoprocessorAccessability(Coprocessor_et Coprocessor_e,CoprocessorAccessability_et CoprocessorAccessability_e)
{

	if(Coprocessor_e)
	{
		FPU.CPACR.CP11=CoprocessorAccessability_e;
	}
	else
	{
		FPU.CPACR.CP10=CoprocessorAccessability_e;
	}
asm(
	"DSB\n\t"
	"ISB\n"
);

}



void FPU_ct::FPU_vForceLazyStatePreservationModeFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPCCR.LSPACT=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadLazyStatePreservationModeFlag(void)
{

	return (ActivationMode_et)FPU.FPCCR.LSPACT;

}



void FPU_ct::FPU_vForceUserAccessStateFlag(PrivilegedAcessState_et PrivilegedAcessState_e)
{

	FPU.FPCCR.USER=PrivilegedAcessState_e;

}


PrivilegedAcessState_et FPU_ct::FPU_enuReadUserAccessStateFlag(void)
{

	return (PrivilegedAcessState_et)FPU.FPCCR.USER;

}



void FPU_ct::FPU_vForceUserModeFlag(UserAccessMode_et UserAccessMode_e)
{

	 FPU.FPCCR.THREAD=UserAccessMode_e;

}


UserAccessMode_et FPU_ct::FPU_enuReadUserModeFlag(void)
{

	return (UserAccessMode_et)FPU.FPCCR.THREAD;

}




void FPU_ct::FPU_vForceHardFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPCCR.HFRDY=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadeHardFaultHandlerPendingStateReadyFlag(void)
{

	return (ActivationMode_et)FPU.FPCCR.HFRDY;

}



void FPU_ct::FPU_vForceMemoryManagmentFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPCCR.MMRDY=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadeMemoryManagmentFaultHandlerPendingStateReadyFlag(void)
{

	return (ActivationMode_et)FPU.FPCCR.MMRDY;

}



void FPU_ct::FPU_vForceBusFaultHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPCCR.BFRDY=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadBusFaultHandlerPendingStateReadyFlag(void)
{

	return (ActivationMode_et)FPU.FPCCR.BFRDY;

}



void FPU_ct::FPU_vForceDebugMonitorHandlerPendingStateReadyFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPCCR.MONRDY=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadDebugMonitorHandlerPendingStateReadyFlag(void)
{

	return (ActivationMode_et)FPU.FPCCR.MONRDY;

}



void  FPU_ct::FPU_vSetAutomaticLazyStatePreservation(FPU_State_et FPU_State_e)
{

	FPU.FPCCR.LSPEN=FPU_State_e;

}



void  FPU_ct::FPU_vSetControl_2_State(FPU_State_et FPU_State_e)
{

	FPU.FPCCR.ASPEN=FPU_State_e;

}



uint32_kt  FPU_ct::FPU_u32ReadStackedRegistersFirstAddress(void)
{

	return FPU.FPCAR.ADDRESS;

}



void FPU_ct::FPU_vForceInvalidOperationExceptionFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPSCR.IOC=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadInvalidOperationExceptionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.IOC;

}



void FPU_ct::FPU_vForceDivideByZeroExceptionFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPSCR.DZC=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadDivideByZeroExceptionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.DZC;

}



void FPU_ct::FPU_vForceOverflowExceptionFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPSCR.OFC=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadOverflowExceptionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.OFC;

}




void FPU_ct::FPU_vForceUnderflowExceptionFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPSCR.UFC=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadUnderflowExceptionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.UFC;

}



void FPU_ct::FPU_vForceInputDenormalExceptionFlag(ActivationMode_et ActivationMode_e)
{

	FPU.FPSCR.IDC=ActivationMode_e;

}


ActivationMode_et FPU_ct::FPU_enuReadInputDenormalExceptionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.IDC;

}



void FPU_ct::FPU_vSetRoundingMode(RoundingMode_et RoundingMode_e)
{

	FPU.FPSCR.RMODE=RoundingMode_e;

}


void FPU_ct::FPU_vSetFlushToZeroState(FPU_State_et FPU_State_e)
{

	FPU.FPSCR.FZ=FPU_State_e;

}



void FPU_ct::FPU_vSetDefaultNAN_State(FPU_State_et FPU_State_e)
{

	FPU.FPSCR.DN=FPU_State_e;

}


void FPU_ct::FPU_vSetAlternateHalfPrecision_State(FPU_State_et FPU_State_e)
{

	FPU.FPSCR.AHP=FPU_State_e;

}



ActivationMode_et FPU_ct::FPU_enuReadOverflowConditionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.V;

}



ActivationMode_et FPU_ct::FPU_enuReadCarryConditionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.C;

}



ActivationMode_et FPU_ct::FPU_enuReadZeroConditionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.Z;

}



ActivationMode_et FPU_ct::FPU_enuReadNegativeConditionFlag(void)
{

	return (ActivationMode_et)FPU.FPSCR.N;

}


RoundingMode_et FPU_ct::FPU_enuReadDefaultRoundingMode(void)
{

	return (RoundingMode_et)FPU.FPDSCR.RMODE;

}


FPU_State_et FPU_ct::FPU_venuReadDefaultFlushToZeroState( void)
{

	return (FPU_State_et)FPU.FPDSCR.FZ;

}


FPU_State_et FPU_ct::FPU_venuReadDefaultNAN_State(void)
{

	return (FPU_State_et)FPU.FPDSCR.DN;

}


FPU_State_et FPU_ct::FPU_venuReadDefaultAlternateHalfPrecision_State(void)
{

	return (FPU_State_et)FPU.FPDSCR.AHP;

}

#if(INVALID_OPERATION_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetInvalidOperationCumulativeExceptionCallBack(pf pfCallBack)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfInvalidOperationCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(DIVISION_BY_ZERO_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetDivisionByZeroCumulativeExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfDivisionByZeroCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(OVERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetOverFlowCumulativeExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfOverFlowCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(UNDERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetUnderFlowCumulativeExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfUnderFlowCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(INEXACT_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetInExactCumulativeExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfInExactCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif
#if(INPUT_DENORMAL_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
ErrorStatus_et FPU_ct::FPU_enuSetInPutDenormalCumulativeExceptionCallBack(pf pfCallBack)
{

	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(pfCallBack!=NULL_PTR_TO_FUNC)
	{
		pfInPutDenormalCumulativeExceptionCallBack=pfCallBack;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
	}
	return ErrorStatusLoc_e;
}
#endif


extern "C"{
void FPU_Handler(void)
{
#if(INVALID_OPERATION_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfInvalidOperationCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.IOC)
	{
		  pfInvalidOperationCumulativeExceptionCallBack();
	}
#endif
#if(DIVISION_BY_ZERO_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfDivisionByZeroCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.DZC)
	{
		pfDivisionByZeroCumulativeExceptionCallBack();
	}
#endif
#if(OVERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfOverFlowCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.OFC)
	{
		pfOverFlowCumulativeExceptionCallBack();
	}
#endif
#if(UNDERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfUnderFlowCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.UFC)
	{
		pfUnderFlowCumulativeExceptionCallBack();
	}
#endif
#if(INEXACT_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfInExactCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.IXC)
	{
		pfInExactCumulativeExceptionCallBack();
	}
#endif
#if(INPUT_DENORMAL_CUMULATIVE_EXCEPTION_CALLBACK_STATE)
	if(pfInPutDenormalCumulativeExceptionCallBack!=PARAM_NULL_PTR_TO_FUNC && FPU.FPSCR.IDC)
	{
		pfInPutDenormalCumulativeExceptionCallBack();
	}
#endif


}
}

