/**************************************/
/* Description : RCC private c File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 04:05:35  04 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"

pf RCC_LSI_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_LSE_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_HSI_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_HSE_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_MainPLL_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_PLLI2S_ReadyCallBack=NULL_PTR_TO_FUNC;
pf RCC_ClockSecuritySystem_ReadyCallBack=NULL_PTR_TO_FUNC;


