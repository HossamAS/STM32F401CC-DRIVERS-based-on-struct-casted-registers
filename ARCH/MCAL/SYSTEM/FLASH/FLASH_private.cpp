/***************************************/
/* Description : FLASH private cpp File*/
/* Author      : hossam                */
/* Version     : 0.1V                  */
/* Date        : 16:20:06  23 Jul 2023 */
/* History     : 0.1V Initial Creation */
/***************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"
	
pf	pfOperationErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfReadProtectionErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfWriteProtectionErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfProgrammingAlignmentErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfProgrammingParallelismErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfProgrammingSequenceErrorInterruptCallback=NULL_PTR_TO_FUNC;
pf	pfEndOfOperationInterruptCallback=NULL_PTR_TO_FUNC;