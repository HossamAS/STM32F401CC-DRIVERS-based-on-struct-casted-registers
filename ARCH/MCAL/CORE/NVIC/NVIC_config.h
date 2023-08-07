/**************************************/
/* Description : NVIC config h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 23:50:49  29 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef NVIC_CONFIG_H
#define NVIC_CONFIG_H

#define  WWDG_INTERRUPT_INITIAL_STATE											   NVIC__STATE___DISABLE
#define  EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE                                     NVIC__STATE___DISABLE
#define  EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_STATE                              NVIC__STATE___DISABLE
#define  EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_STATE                                NVIC__STATE___DISABLE
#define  FLASH_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  RCC_INTERRUPT_INITIAL_STATE                                               NVIC__STATE___DISABLE
#define  EXTI0_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  EXTI1_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  EXTI2_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  EXTI3_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  EXTI4_INTERRUPT_INITIAL_STATE                                             NVIC__STATE___DISABLE
#define  DMA1_Stream0_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream1_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream2_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream3_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream4_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream5_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA1_Stream6_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  ADC_INTERRUPT_INITIAL_STATE                                               NVIC__STATE___DISABLE
#define  EXTI9_5_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  TIM1_BRK_TIM9_INTERRUPT_INITIAL_STATE                                     NVIC__STATE___DISABLE
#define  TIM1_UP_TIM10_INTERRUPT_INITIAL_STATE                                     NVIC__STATE___DISABLE
#define  TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_STATE                                NVIC__STATE___DISABLE
#define  TIM1_CC_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  TIM2_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  TIM3_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  TIM4_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  I2C1_EV_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  I2C1_ER_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  I2C2_EV_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  I2C2_ER_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  SPI1_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  SPI2_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  USART1_INTERRUPT_INITIAL_STATE                                            NVIC__STATE___DISABLE
#define  USART2_INTERRUPT_INITIAL_STATE                                            NVIC__STATE___DISABLE
#define  EXTI15_10_INTERRUPT_INITIAL_STATE                                         NVIC__STATE___DISABLE
#define  EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_STATE                               NVIC__STATE___DISABLE
#define  EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_STATE                             NVIC__STATE___DISABLE
#define  DMA1_Stream7_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  SDIO_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  TIM5_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  SPI3_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
#define  DMA2_Stream0_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream1_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream2_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream3_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream4_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  OTG_FS_INTERRUPT_INITIAL_STATE                                            NVIC__STATE___DISABLE
#define  DMA2_Stream5_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream6_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  DMA2_Stream7_INTERRUPT_INITIAL_STATE                                      NVIC__STATE___DISABLE
#define  USART6_INTERRUPT_INITIAL_STATE                                            NVIC__STATE___DISABLE
#define  I2C3_EV_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  I2C3_ER_INTERRUPT_INITIAL_STATE                                           NVIC__STATE___DISABLE
#define  FPU_INTERRUPT_INITIAL_STATE                                               NVIC__STATE___DISABLE
#define  SPI4_INTERRUPT_INITIAL_STATE                                              NVIC__STATE___DISABLE
																				 
																				 
																				 
#define  WWDG_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI16_OR_PVD_INTERRUPT_INITIAL_MODE                                    NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_MODE                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_MODE                               NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  FLASH_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  RCC_INTERRUPT_INITIAL_MODE                                              NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI0_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI1_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI2_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI3_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI4_INTERRUPT_INITIAL_MODE                                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream0_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream1_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream2_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream3_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream4_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream5_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream6_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  ADC_INTERRUPT_INITIAL_MODE                                              NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI9_5_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM1_BRK_TIM9_INTERRUPT_INITIAL_MODE                                    NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM1_UP_TIM10_INTERRUPT_INITIAL_MODE                                    NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_MODE                               NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM1_CC_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM2_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM3_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM4_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C1_EV_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C1_ER_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C2_EV_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C2_ER_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  SPI1_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  SPI2_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  USART1_INTERRUPT_INITIAL_MODE                                           NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  USART2_INTERRUPT_INITIAL_MODE                                           NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI15_10_INTERRUPT_INITIAL_MODE                                        NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_MODE                              NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_MODE                            NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA1_Stream7_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  SDIO_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  TIM5_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  SPI3_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream0_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream1_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream2_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream3_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream4_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  OTG_FS_INTERRUPT_INITIAL_MODE                                           NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream5_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream6_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  DMA2_Stream7_INTERRUPT_INITIAL_MODE                                     NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  USART6_INTERRUPT_INITIAL_MODE                                           NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C3_EV_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  I2C3_ER_INTERRUPT_INITIAL_MODE                                          NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  FPU_INTERRUPT_INITIAL_MODE                                              NVIC__INTERRUPT_SET_MODE___NOT_PENDING
#define  SPI4_INTERRUPT_INITIAL_MODE                                             NVIC__INTERRUPT_SET_MODE___NOT_PENDING
																				 
#define  WWDG_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI16_OR_PVD_INTERRUPT_INITIAL_PRIORITY                                NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_PRIORITY                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_PRIORITY                           NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  FLASH_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  RCC_INTERRUPT_INITIAL_PRIORITY                                          NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI0_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI1_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI2_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI3_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI4_INTERRUPT_INITIAL_PRIORITY                                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream0_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream1_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream2_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream3_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream4_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream5_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream6_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  ADC_INTERRUPT_INITIAL_PRIORITY                                          NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI9_5_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM1_BRK_TIM9_INTERRUPT_INITIAL_PRIORITY                                NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM1_UP_TIM10_INTERRUPT_INITIAL_PRIORITY                                NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_PRIORITY                           NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM1_CC_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM2_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM3_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM4_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C1_EV_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C1_ER_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C2_EV_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C2_ER_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  SPI1_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  SPI2_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  USART1_INTERRUPT_INITIAL_PRIORITY                                       NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  USART2_INTERRUPT_INITIAL_PRIORITY                                       NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI15_10_INTERRUPT_INITIAL_PRIORITY                                    NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_PRIORITY                          NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_PRIORITY                        NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA1_Stream7_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  SDIO_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  TIM5_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  SPI3_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream0_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream1_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream2_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream3_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream4_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  OTG_FS_INTERRUPT_INITIAL_PRIORITY                                       NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream5_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream6_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  DMA2_Stream7_INTERRUPT_INITIAL_PRIORITY                                 NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  USART6_INTERRUPT_INITIAL_PRIORITY                                       NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C3_EV_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  I2C3_ER_INTERRUPT_INITIAL_PRIORITY                                      NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  FPU_INTERRUPT_INITIAL_PRIORITY                                          NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       
#define  SPI4_INTERRUPT_INITIAL_PRIORITY                                         NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1       



#endif
