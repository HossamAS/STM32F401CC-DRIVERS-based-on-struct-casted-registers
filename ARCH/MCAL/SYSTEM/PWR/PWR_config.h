/**************************************/
/* Description : PWR config c File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 09:10:37  10 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef PWR_CONFIG_H
#define PWR_CONFIG_H

#define LOW_POWER_DEEP_SLEEP_MODE					                PWR__LOW_POWER_DEEP_SLEEP_MODE___VOLTAGE_REGULATOR_ON
#define POWER_DOWN_DEEP_SLEEP_MODE                                  PWR__POWER_DOWN_DEEP_SLEEP_MODE___ENTER_STANDBY_MODE
#define POWER_VOLTAGE_DETECTOR_STATE                                PWR__STATE___ENABLE
#define POWER_VOLTAGE_DETECTOR_LEVEL                                PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_9V
#define POWER_DOWN_THE_FLASH_IN_STOP_MODE_STATE                     PWR__STATE___ENABLE
#define LOW_POWER_REGULATOR_VOLTAGE_MODE                            PWR__LOW_POWER_REGULATOR_VOLTAGE_MODE___LOW_POWER_REGULATOR_IN_LOW_VOLTAGE_AND_FLASH_MEMORY_IN_DEEP_SLEEP_MODE
#define MAIN_REGULATOR_VOLTAGE_MODE                                 PWR__MAIN_REGULATOR_VOLTAGE_MODE___MAIN_REGULATOR_IN_LOW_VOLTAGE_AND_FLASH_MEMORY_IN_DEEP_SLEEP_MODE
#define REGULATOR_VOLTAGE_SCALING_OUTPUT                            PWR__REGULATOR_VOLTAGE_SCALING_OUTPUT_MODE___SCALE_3 /*to transfer this configuration parameter you just need to disable the PLL CLK in RCC Prepheral*/
#define WAKE_UP_PIN_STATE                                           PWR__STATE___DISABLE
#define BACK_UP_REGULATOR_STATE                                     PWR__STATE___DISABLE
#define BACK_UP_DOMAIN_WRITE_ACCESS_STATE                           PWR__STATE___ENABLE
#define ADC_NOISE_IMMUNITY_FROM_EXTRA_FLASH_ACCESS_NOISES_STATE     PWR__STATE___DISABLE /*This option can only be transfered at the following conditions:
																							- Prefetch must be OFF in Flash interface prepheral.
																							- VDD voltage ranges from 2.4 V to 3.6 V.
																							- This bit must not be set when the ADCxDC2 bit in
																								SYSCFG_PMC register is set.*/

#endif
