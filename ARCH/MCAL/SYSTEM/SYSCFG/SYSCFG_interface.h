/**************************************/
/* Description : SYSCFG interface File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 17:27:32  20 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef SYSCFG_INTERFACE_H
#define SYSCFG_INTERFACE_H

typedef enum __attribute__((__packed__)){
	SYSCFG__EXTERNAL_INTERRUPT_PORT___A,
	SYSCFG__EXTERNAL_INTERRUPT_PORT___B,
	SYSCFG__EXTERNAL_INTERRUPT_PORT___C,
	SYSCFG__EXTERNAL_INTERRUPT_PORT___D,
	SYSCFG__EXTERNAL_INTERRUPT_PORT___E,
	SYSCFG__EXTERNAL_INTERRUPT_PORT___H=7,
}ExternalInterruptPort_et;
typedef enum __attribute__((__packed__)){
	SYSCFG__EXTERNAL_INTERRUPT___0,
	SYSCFG__EXTERNAL_INTERRUPT___1,
	SYSCFG__EXTERNAL_INTERRUPT___2,
	SYSCFG__EXTERNAL_INTERRUPT___3,
	SYSCFG__EXTERNAL_INTERRUPT___4,
	SYSCFG__EXTERNAL_INTERRUPT___5,
	SYSCFG__EXTERNAL_INTERRUPT___6,
	SYSCFG__EXTERNAL_INTERRUPT___7,
	SYSCFG__EXTERNAL_INTERRUPT___8,
	SYSCFG__EXTERNAL_INTERRUPT___9,
	SYSCFG__EXTERNAL_INTERRUPT___10,
	SYSCFG__EXTERNAL_INTERRUPT___11,
	SYSCFG__EXTERNAL_INTERRUPT___12,
	SYSCFG__EXTERNAL_INTERRUPT___13,
	SYSCFG__EXTERNAL_INTERRUPT___14,
	SYSCFG__EXTERNAL_INTERRUPT___15
}ExternalInterrupt_et;
typedef enum __attribute__((__packed__)){
	SYSCFG__BOOT_MEMORY___MAIN_FLASH,
	SYSCFG__BOOT_MEMORY___SYSTEM_FLASH,
	SYSCFG__BOOT_MEMORY___SRAM,

}BootMemory_et;
typedef enum __attribute__((__packed__)){
	SYSCFG__COMPENSATION_CELL___POWER_DOWN_MODE,
	SYSCFG__COMPENSATION_CELL___ENABLED_MODE

}CompensationCell_et;


#define SYSCFG__STATE___DISABLE 0
#define SYSCFG__STATE___ENABLE  1


class SYSCFG_ct{
public:
/*pre-build configuration (pre-processing configuration)*/
	SYSCFG_ct(void);
/*run-time configuration*/
void SYSCFG_vSetBootMemory(BootMemory_et BootMemory_e);
void SYSCFG_vSetExternalInterruptPort(ExternalInterrupt_et ExternalInterrupt_e,ExternalInterruptPort_et ExternalInterruptPort_e);
void SYSCFG_vSetCompensationCellMode(CompensationCell_et CompensationCell_e);
void SYSCFG_vADC_NoiseImunityFromInternalFlashNoisesEnable(void);/*Warning: These bits can only be set at the following conditions:
																		- Minimum ADC clock is 30MHz.
																		- Only one ADCxDC2 bit must be selected in case ADC
																		conversion does not start at the same time and different
																		sampling times are used.
																		- ADC resolution should be equal to 12 bits.
																		- This bit must not be set when the ADCDC1 bit in PWR_CR
register is set.*/

};






#endif
