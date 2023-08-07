/**************************************/
/* Description : RCC config h File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 04:05:35  04 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/**************************CLOCK CONFIGURATION***************************/
#define MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE   RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK
#define RTC_CLOCK_SOURCE                   RCC__RTC_CLOCK_SOURCE___HSE_CLOCK /*to use this configuration you have to enable backup domain access from PWR prepheral*/
#define SYSTEM_CLOCK_SOURCE                RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK
#define I2S_CLOCK_SOURCE                   RCC__I2S_CLOCK_SOURCE___PLLI2S_CLOCK
#define MCO1_CLOCK_SOURCE                  RCC__MCO1_CLOCK_SOURCE___PLL_CLOCK
#define MCO2_CLOCK_SOURCE                  RCC__MCO2_CLOCK_SOURCE___PLL_CLOCK
#define PLL_N                              84ul
#define PLL_M                              8ul
#define PLL_P                              4ul
#define PLL_Q                              7ul
#define PLLI2S_N                           168ul
#define PLLI2S_R                           2ul
#define RTC_HSE_PRESCALER                  RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_2
#define AHB_PRESCALER                      RCC__AHB_PRESCALER___SYSTEM_CLOCK
#define APB1_PRESCALER                     RCC__APB_PRESCALER___AHB_CLOCK_PER_2
#define APB2_PRESCALER                     RCC__APB_PRESCALER___AHB_CLOCK
#define MCO1_PRESCALER            		   RCC__MCO_PRESCALER___CLOCK_SOURCE
#define MCO2_PRESCALER            		   RCC__MCO_PRESCALER___CLOCK_SOURCE

/*PLEASE JUST COPY THE PRESCALER VALUE FROM THE CONFIGURATION PRESCALER EXAMPLE:"""""""#define APB1_PRESCALER                 RCC_APB1_AHB_CLOCK_PER_8"""""" WE JUST NEED THE VALUE 8 and EXAMPLE 2: """"""#define APB1_PRESCALER                 RCC_APB1_AHB_CLOCK"""""""" THE VALUE WILL BE 1*/
#define RTC_PRESCALER_VALUE                2
#define AHB_PRESCALER_VALUE                1
#define APB1_PRESCALER_VALUE               2
#define APB2_PRESCALER_VALUE               1
#define MC_CLOCK_OP1_PRESCALER_VALUE         1
#define MC_CLOCK_OP2_PRESCALER_VALUE         1

/*PLEASE JUST PUT THE EXTERNAL HIGH SPEED CLOCK VALUE THAT YOU USE */
#define HSE_CLOCK                            16000000ul
/************************************************************************/
#define HSI_CLOCK_STATE                      RCC__STATE___DISABLE
#define HSE_CLOCK_STATE                      RCC__STATE___ENABLE
#define LSI_CLOCK_STATE                      RCC__STATE___DISABLE
#define LSE_CLOCK_STATE                      RCC__STATE___DISABLE /*to use this configuration you have to enable backup domain access from PWR prepheral*/
#define HSI_READY_INTERRUPT_STATE            RCC__STATE___DISABLE
#define HSE_READY_INTERRUPT_STATE            RCC__STATE___DISABLE
#define LSI_READY_INTERRUPT_STATE            RCC__STATE___DISABLE
#define LSE_READY_INTERRUPT_STATE            RCC__STATE___DISABLE
#define HSE_BYPASS_CLOCK_STATE               RCC__STATE___DISABLE
#define LSE_BYPASS_CLOCK_STATE               RCC__STATE___DISABLE
#define CLOCK_SECURITY_SYSTEM_STATE          RCC__STATE___DISABLE
#define MAIN_PLL_CLOCK_STATE                 RCC__STATE___DISABLE
#define MAIN_PLL_READY_INTERRUPT_STATE       RCC__STATE___DISABLE
#define PLLI2S_CLOCK_STATE                   RCC__STATE___DISABLE
#define PLLI2S_READY_INTERRUPT_STATE         RCC__STATE___DISABLE

#define PORTA_CLOCK_STATE                    RCC__STATE___ENABLE
#define PORTB_CLOCK_STATE                    RCC__STATE___ENABLE
#define PORTC_CLOCK_STATE                    RCC__STATE___ENABLE
#define PORTD_CLOCK_STATE                    RCC__STATE___ENABLE
#define PORTE_CLOCK_STATE                    RCC__STATE___ENABLE
#define PORTH_CLOCK_STATE                    RCC__STATE___ENABLE
#define CRC_CLOCK_STATE                      RCC__STATE___DISABLE
#define DMA1_CLOCK_STATE                     RCC__STATE___DISABLE
#define DMA2_CLOCK_STATE                     RCC__STATE___DISABLE
#define OTGFS_CLOCK_STATE                    RCC__STATE___DISABLE
#define TIM1_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM2_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM3_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM4_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM5_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM9_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM10_CLOCK_STATE                    RCC__STATE___DISABLE
#define TIM11_CLOCK_STATE                    RCC__STATE___DISABLE
#define WWDG_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI1_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI2_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI3_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI4_CLOCK_STATE                     RCC__STATE___DISABLE
#define SYSCFG_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART1_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART2_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART6_CLOCK_STATE                   RCC__STATE___DISABLE
#define I2C1_CLOCK_STATE                     RCC__STATE___DISABLE
#define I2C2_CLOCK_STATE                     RCC__STATE___DISABLE
#define I2C3_CLOCK_STATE                     RCC__STATE___DISABLE
#define PWR_CLOCK_STATE                      RCC__STATE___ENABLE
#define ADC1_CLOCK_STATE                     RCC__STATE___DISABLE
#define SDIO_CLOCK_STATE                     RCC__STATE___DISABLE
#define RTC_CLOCK_STATE                      RCC__STATE___DISABLE  /*to use this configuration you have to enable backup domain access from PWR prepheral*/

#define PORTA_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define PORTB_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define PORTC_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define PORTD_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define PORTE_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define PORTH_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define CRC_IN_LOW_POWER_MODE_CLOCK_STATE                      RCC__STATE___DISABLE
#define DMA1_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define DMA2_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define OTGFS_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define TIM1_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM2_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM3_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM4_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM5_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM9_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define TIM10_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define TIM11_IN_LOW_POWER_MODE_CLOCK_STATE                    RCC__STATE___DISABLE
#define WWDG_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI1_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI2_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI3_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SPI4_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SYSCFG_IN_LOW_POWER_MODE_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART1_IN_LOW_POWER_MODE_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART2_IN_LOW_POWER_MODE_CLOCK_STATE                   RCC__STATE___DISABLE
#define USART6_IN_LOW_POWER_MODE_CLOCK_STATE                   RCC__STATE___DISABLE
#define I2C1_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define I2C2_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define I2C3_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define PWR_IN_LOW_POWER_MODE_CLOCK_STATE                      RCC__STATE___DISABLE
#define ADC1_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define SDIO_IN_LOW_POWER_MODE_CLOCK_STATE                     RCC__STATE___DISABLE
#define CLOCK_SECURITY_SYSTEM_CALLBACK_STATE                   RCC__STATE___DISABLE
#define LSE_CALLBACK_STATE                                RCC__STATE___DISABLE
#define LSI_CALLBACK_STATE                                RCC__STATE___DISABLE
#define HSE_CALLBACK_STATE                                RCC__STATE___DISABLE
#define HSI_CALLBACK_STATE                                RCC__STATE___DISABLE
#define MAIN_PLL_CALLBACK_STATE                           RCC__STATE___DISABLE
#define PLLI2S_CALLBACK_STATE                             RCC__STATE___DISABLE


#endif


