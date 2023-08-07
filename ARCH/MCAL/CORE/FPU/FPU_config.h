/**************************************/
/* Description : FPU config h File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 14:37:32  28 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FPU_CONFIG_H
#define FPU_CONFIG_H

#define COPROCESSOR_10_ACCESSABILITY_INITIAL_MODE                        FPU__COPROCESSOR_ACCESSABILITY___DENIED
#define COPROCESSOR_11_ACCESSABILITY_INITIAL_MODE                        FPU__COPROCESSOR_ACCESSABILITY___DENIED
#define AUTOMATIC_LAZY_STATE_PRESERVATION_INITIAL_STATE                  FPU__STATE___DISABLE
#define CONTROL_2_INITIAL_STATE                                          FPU__STATE___DISABLE
#define ROUNDING_INITIAL_MODE                                            FPU__ROUNDING_MODE___ROUND_TO_NEAREST
#define FLUSH_TO_ZERO_INITIAL_STATE                                      FPU__STATE___DISABLE
#define DEFAULT_NAN_INITIAL_STATE                                        FPU__STATE___DISABLE
#define ALTERNATE_HALF_PRECISION_INITIAL_STATE                           FPU__STATE___DISABLE
#define INVALID_OPERATION_CUMULATIVE_EXCEPTION_CALLBACK_STATE            FPU__STATE___DISABLE
#define DIVISION_BY_ZERO_CUMULATIVE_EXCEPTION_CALLBACK_STATE             FPU__STATE___DISABLE
#define OVERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE                     FPU__STATE___DISABLE
#define UNDERFLOW_CUMULATIVE_EXCEPTION_CALLBACK_STATE                    FPU__STATE___DISABLE
#define INEXACT_CUMULATIVE_EXCEPTION_CALLBACK_STATE                      FPU__STATE___DISABLE
#define INPUT_DENORMAL_CUMULATIVE_EXCEPTION_CALLBACK_STATE               FPU__STATE___DISABLE



#endif
