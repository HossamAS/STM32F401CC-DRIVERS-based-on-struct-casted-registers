/**************************************/
/* Description : FPU private cpp File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 14:37:32  28 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"

pf pfInvalidOperationCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfDivisionByZeroCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfOverFlowCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfUnderFlowCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfInExactCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfInPutDenormalCumulativeExceptionCallBack=NULL_PTR_TO_FUNC;


