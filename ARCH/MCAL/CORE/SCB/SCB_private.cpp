/**************************************/
/* Description : SCB private cpp File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:55:45  25 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "SCB_interface.h"


pf pfMemoryManagementFaultExceptionCallBack=NULL_PTR_TO_FUNC;             		                
pf pfBusFaultExceptionCallBack=NULL_PTR_TO_FUNC;                                                   
pf pfUsageFaultExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfDebugMonitorExceptionCallBack=NULL_PTR_TO_FUNC;                                            
pf pfPendSV_ExceptionCallBack=NULL_PTR_TO_FUNC;                                                   
pf pfNMI_ExceptionCallBack=NULL_PTR_TO_FUNC;
pf pfHardFaultExceptionCallBack=NULL_PTR_TO_FUNC;
