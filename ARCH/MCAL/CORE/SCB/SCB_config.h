/**************************************/
/* Description : SCB config h File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:55:45  25 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef SCB_CONFIG_H
#define SCB_CONFIG_H


#define INTERRUPTING_MULTI_CYCLE_INSTRUCTION_INITIAL_STATE   SCB__STATE___DISABLE
#define CORTEXM4_WRITE_BUFFER_INITIAL_STATE                  SCB__STATE___DISABLE
#define FOLDING_OF_IT_INSTRUCTION_INITIAL_STATE              SCB__STATE___DISABLE
#define FLOATING_POINT_INSTRUCTIONS_INITIAL_STATE            SCB__STATE___DISABLE
#define SLEEP_ON_EXIT_FROM_INTERRUPT_INITIAL_STATE           SCB__STATE___DISABLE

#define VECTOR_TABLE_INITIAL_OFFSET                          0
															
#define INITIAL_PRIORITY_GROUPING_STYLE                    								 SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1
#define INITIAL_SLEEP_MODE                                 								 SCB__SLEEP_MODE___NORMAL_SLEEP
#define WAKES_UP_INTERRUPT_INITIAL_STATE                   								 SCB__WAKE_UP_INTERRUPT___EVENTS_AND_ENABLED_INTERRUPTS_CAN_WAKE_UP_THE_CPU                           
#define WHEN_TO_ENTER_THREAD_MODE_INITIAL_STATE            								 SCB__THREAD_MODE_TIME___WHEN_NO_EXCEPTION_IS_ACTIVE                               
#define UNALIGNED_ACCESS_TRAPPING_INITIAL_STATE            								 SCB__STATE___DISABLE                               
#define DIVIDE_BY_ZERO_TRAPPING_INITIAL_STATE              								 SCB__STATE___DISABLE                               
#define IGNORING_DATA_BUS_FAULTS_CAUSED_BY_LOAD_AND_STORE_INSTRUCTIONS_INITIAL_STATE     SCB__IGNORING_DATA_BUS_FAULTS_STATE___DONOT_IGNORE   
#define STACK_ALIGNMENT_INITIAL_VALUE                                                    SCB__STACK_ALIGNMENT___4_BYTE_ALIGNMENT   
#define MEMORY_MANAGEMENT_FAULT_EXCEPTIONS_PRIORITY                                      SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
#define BUS_FAULT_EXCEPTIONS_PRIORITY                                                    SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
#define USAGE_FAULT_EXCEPTIONS_PRIORITY                                                  SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
#define SV_CALL_EXCEPTIONS_PRIORITY                                                      SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
#define PEND_SV_EXCEPTIONS_PRIORITY                                                      SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
#define SYS_TICK_EXCEPTIONS_PRIORITY                                                     SCB__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1   
																							
#define MEMORY_MANAGEMENT_FAULT_EXCEPTION_INITIAL_STATE                                     SCB__STATE___DISABLE
#define BUS_FAULT_EXCEPTION_INITIAL_STATE                                                   SCB__STATE___DISABLE
#define USAGE_FAULT_EXCEPTION_INITIAL_STATE                                                 SCB__STATE___DISABLE
																							
#define MEMORY_MANAGEMENT_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE                              SCB__STATE___DISABLE
#define BUS_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE                                            SCB__STATE___DISABLE
#define USAGE_FAULT_EXCEPTION_ACTIVE_INITIAL_STATE                                          SCB__STATE___DISABLE
#define SV_CALL_EXCEPTION_ACTIVE_INITIAL_STATE                                              SCB__STATE___DISABLE
#define DEBUG_MONITOR_EXCEPTION_ACTIVE_INITIAL_STATE                                        SCB__STATE___DISABLE
#define PEND_SV_EXCEPTION_ACTIVE_INITIAL_STATE                                              SCB__STATE___DISABLE
#define SYS_TICK_EXCEPTION_ACTIVE_INITIAL_STATE                                             SCB__STATE___DISABLE
#define MEMORY_MANAGEMENT_FAULT_EXCEPTION_PENDING_INITIAL_STATE                             SCB__STATE___DISABLE
																							
#define BUS_FAULT_EXCEPTION_PENDING_INITIAL_STATE                                           SCB__STATE___DISABLE
#define USAGE_FAULT_EXCEPTION_PENDING_INITIAL_STATE                                         SCB__STATE___DISABLE
#define SV_CALL_EXCEPTION_PENDING_INITIAL_STATE                                             SCB__STATE___DISABLE
#define SYS_TICK_EXCEPTION_PENDING_INITIAL_STATE											SCB__STATE___DISABLE
#define PEND_SV_EXCEPTION_PENDING_INITIAL_STATE 											SCB__STATE___DISABLE
#define NMI_EXCEPTION_PENDING_INITIAL_STATE													SCB__STATE___DISABLE









#endif
