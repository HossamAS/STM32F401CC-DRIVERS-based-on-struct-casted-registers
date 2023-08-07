/**************************************/
/* Description : FLASH config h File  */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 18:31:41  22 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef FLASH_CONFIG_H
#define FLASH_CONFIG_H


#define   LATENCY_TICKS_TO_ACCESS_FLASH_MEMORY                           FLASH__WAIT_STATE___0
#define   PREFETCH_STATE                                                 FLASH__STATE___DISABLE
#define   INSTRUCTION_CACHE_STATE                                        FLASH__STATE___DISABLE
#define   DATA_CACHE_STATE                                               FLASH__STATE___DISABLE
#define   FLASH_PROGRAMMING_STATE                                        FLASH__STATE___DISABLE
#define   SECTOR_ERASE_STATE                                             FLASH__STATE___DISABLE
#define   MASS_ERASE_STATE                                               FLASH__STATE___DISABLE
#define   INITIAL_SECTOR_NUMBER                                          FLASH__SECTOR_NUMBER___0
#define   PROGRAM_SIZE_FOR_PARALLELISM                                   FLASH__PROGRAM_SIZE___PROGRAM_x8
#define   END_OF_OPERATION_INTERRUPT_STATE                               FLASH__STATE___DISABLE
#define   ERROR_INTERRUPT_STATE                                          FLASH__STATE___DISABLE
#define   INITIAL_BROWNOUT_THERSHOLD_LEVEL                               FLASH__BROWNOUT_THERSHOLD_LEVEL___OFF
#define   USER_OPTION_BYTE_NRST_STDBY_STATE                              FLASH__STATE___DISABLE
#define   USER_OPTION_BYTE_NRST_STOP_STATE                               FLASH__STATE___DISABLE
#define   USER_OPTION_BYTE_WDG_SW_STATE                                  FLASH__STATE___DISABLE
#define   READ_PROTECT_OPTION_BYTE                                       FLASH__READ_PROTECT_OPTION___LEVEL_0_READ_PROTECTION_NOT_ACTIVE
#define   WRITE_PROTECT_OPTION_BYTE_MODE                                 FLASH__PROTECTION_MODE___WRITE_PROTECTION
#define   WRITE_PROTECT_OPTION_BYTE_STATE                                FLASH__STATE___DISABLE
#define   OPERATION_ERROR_INTERRUPT_CALLBACK_STATE                       FLASH__STATE___DISABLE
#define   WRITE_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE                FLASH__STATE___DISABLE
#define   READ_PROTECTION_ERROR_INTERRUPT_CALLBACK_STATE                 FLASH__STATE___DISABLE
#define   PROGRAMMING_ALIGNMENT_ERROR_INTERRUPT_CALLBACK_STATE           FLASH__STATE___DISABLE
#define   PROGRAMMING_PARALLELISM_ERROR_INTERRUPT_CALLBACK_STATE         FLASH__STATE___DISABLE
#define   PROGRAMMING_SEQUENCE_ERROR_INTERRUPT_CALLBACK_STATE            FLASH__STATE___DISABLE
#define   END_OF_OPERATION_INTERRUPT_CALLBACK_STATE                      FLASH__STATE___DISABLE





#endif
