/**************************************/
/* Description : SYSCFG program File  */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 17:27:32  20 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include"../../../LIB/STD_TYPES/STD_TYPES.h"
#include"SYSCFG_interface.h"
#include "SYSCFG_config.h"
#include "SYSCFG_private.h"





/*pre-build configuration (pre-processing configuration)*/
SYSCFG_ct::SYSCFG_ct()
{
SYSCFG.SYSCFG_MEMRMP.MEM_MODE=BOOT_MEMORY;
SYSCFG.SYSCFG_EXTICR.DATA1=EXTERNAL_INTERRUPT_0_PORT|EXTERNAL_INTERRUPT_1_PORT<<4|
						   EXTERNAL_INTERRUPT_2_PORT<<8|EXTERNAL_INTERRUPT_3_PORT<<12;
SYSCFG.SYSCFG_EXTICR.DATA2=EXTERNAL_INTERRUPT_4_PORT|EXTERNAL_INTERRUPT_5_PORT<<4|
						   EXTERNAL_INTERRUPT_6_PORT<<8|EXTERNAL_INTERRUPT_7_PORT<<12;
SYSCFG.SYSCFG_EXTICR.DATA3=EXTERNAL_INTERRUPT_8_PORT|EXTERNAL_INTERRUPT_9_PORT<<4|
						   EXTERNAL_INTERRUPT_10_PORT<<8|EXTERNAL_INTERRUPT_11_PORT<<12;
SYSCFG.SYSCFG_EXTICR.DATA4=EXTERNAL_INTERRUPT_12_PORT|EXTERNAL_INTERRUPT_13_PORT<<4|
						   EXTERNAL_INTERRUPT_14_PORT<<8|EXTERNAL_INTERRUPT_15_PORT<<12;

SYSCFG.SYSCFG_CMPCR.CMP_PD=COMPENSATION_CELL_MODE;
SYSCFG.SYSCFG_PMC.ADC1DC2=ADC_NOISE_IMMUNITY_FROM_INTERNAL_FLASH_NOISES_STATE;

}
/*run-time configuration*/
void SYSCFG_ct::SYSCFG_vSetBootMemory(BootMemory_et BootMemory_e)
{
	SYSCFG.SYSCFG_MEMRMP.MEM_MODE=BootMemory_e;
}
void SYSCFG_ct::SYSCFG_vSetExternalInterruptPort(ExternalInterrupt_et ExternalInterrupt_e,ExternalInterruptPort_et ExternalInterruptPort_e)
{
	if(ExternalInterrupt_e<4)
	{
		SYSCFG.SYSCFG_EXTICR.DATA1=ExternalInterruptPort_e<<ExternalInterrupt_e;
	}
	else if(ExternalInterrupt_e<8)
	{
		SYSCFG.SYSCFG_EXTICR.DATA2=ExternalInterruptPort_e<<(ExternalInterrupt_e%4);
	}
	else if(ExternalInterrupt_e<12)
	{
		SYSCFG.SYSCFG_EXTICR.DATA3=ExternalInterruptPort_e<<(ExternalInterrupt_e%4);
	}
	else
	{
		SYSCFG.SYSCFG_EXTICR.DATA4=ExternalInterruptPort_e<<(ExternalInterrupt_e%4);
	}
}
void SYSCFG_ct::SYSCFG_vSetCompensationCellMode(CompensationCell_et CompensationCell_e)
{
	SYSCFG.SYSCFG_CMPCR.CMP_PD=CompensationCell_e;
}
void SYSCFG_ct::SYSCFG_vADC_NoiseImunityFromInternalFlashNoisesEnable(void)
{
	SYSCFG.SYSCFG_PMC.ADC1DC2=1;
}

