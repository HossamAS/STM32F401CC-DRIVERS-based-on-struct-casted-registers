/*****************************************/
/* Description : REGFILE private cpp File*/
/* Author      : hossam                  */
/* Version     : 0.1V                    */
/* Date        : 18:26:31  29 Jul 2023   */
/* History     : 0.1V Initial Creation   */
/*****************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "REGFILE_interface.h"

                                                 
pf pfSV_CallExceptionCallBack=NULL_PTR_TO_FUNC;  
PrivilegedAcessState_et REGFILE_PrivilegedAcessState_e=REGFILE__PRIVILEGED_ACCESS_STATE___PRIVILEGED;