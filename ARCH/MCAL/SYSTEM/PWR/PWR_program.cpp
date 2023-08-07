/**************************************/
/* Description : PWR program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 09:10:37  10 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "PWR_private.h"
#include "PWR_config.h"
#include "PWR_interface.h"
/*PRE-BUILD CONFIGURATION (PRE-PROCESSING)*/
PWR_ct::PWR_ct(void)
{
	
	PWR.PWR_CR.DATA=LOW_POWER_DEEP_SLEEP_MODE|POWER_DOWN_DEEP_SLEEP_MODE<<1|
					POWER_VOLTAGE_DETECTOR_STATE<<4|POWER_VOLTAGE_DETECTOR_LEVEL<<5|
					BACK_UP_DOMAIN_WRITE_ACCESS_STATE<<8|
					POWER_DOWN_THE_FLASH_IN_STOP_MODE_STATE<<9|
					LOW_POWER_REGULATOR_VOLTAGE_MODE<<10|MAIN_REGULATOR_VOLTAGE_MODE<<11|ADC_NOISE_IMMUNITY_FROM_EXTRA_FLASH_ACCESS_NOISES_STATE<<13|
					REGULATOR_VOLTAGE_SCALING_OUTPUT<<14;
	//while(!PWR.PWR_CSR.VOSRDY);
	PWR.PWR_CSR.DATA=WAKE_UP_PIN_STATE<<8|BACK_UP_REGULATOR_STATE<<9;
	//while(PWR.PWR_CSR.BRR);
}
/*RUN-TIME CONFIGURATION*/
void PWR_ct::PWR_vLowPowerDeepSleepMode(LowPowerDeepSleepMode_et LowPowerDeepSleepMode_e)
{
	PWR.PWR_CR.LPDS= LowPowerDeepSleepMode_e;
}
void PWR_ct::PWR_vPowerDownDeepSleepMode(PowerDownDeepSleepMode_et PowerDownDeepSleepMode_e)
{
		PWR.PWR_CR.PDDS= PowerDownDeepSleepMode_e;
}
void PWR_ct::PWR_vClrWakeUpFlag(void)
{
	PWR.PWR_CR.CWUF=1;
}
void PWR_ct::PWR_vClrStandByFlag(void)
{
	PWR.PWR_CR.CSBF=1;
}
void PWR_ct::PWR_vPowerVoltageDetectorEnable(void)
{
	PWR.PWR_CR.PVDE=1;
}
void PWR_ct::PWR_vPowerVoltageDetectorDisable(void)
{
	PWR.PWR_CR.PVDE=0;
}
void PWR_ct::PWR_vPowerVoltageDetectorLevel(PowerVoltageDetectorLevel_et PowerVoltageDetectorLevel_e)
{
		PWR.PWR_CR.PDDS=PowerVoltageDetectorLevel_e;
}
void PWR_ct::PWR_vPowerDownTheFlashInStopModeEnable(void)
{
	PWR.PWR_CR.FPDS=1;
}
void PWR_ct::PWR_vPowerDownTheFlashInStopModeDisable(void)
{
	PWR.PWR_CR.FPDS=0;
}
void PWR_ct::PWR_vLowPowerRegulatorVoltageMode(LowPowerRegulatorVoltageMode_et LowPowerRegulatorVoltMode_e)
{
		PWR.PWR_CR.LPLVDS= LowPowerRegulatorVoltMode_e;
}
void PWR_ct::PWR_vMainRegulatorVoltageMode(MainRegulatorVoltageMode_et MainRegulatorVoltageMode_e)
{
		PWR.PWR_CR.MRLVDS= MainRegulatorVoltageMode_e;
}
void PWR_ct::PWR_vRegulatorVoltageScalingOutputMode(RegulatorVoltageScalingOutputMode_et RegulatorVoltageScalingOutputMode_e)
{
		PWR.PWR_CR.VOS= RegulatorVoltageScalingOutputMode_e;
}
uint8_kt PWR_ct::PWR_u8ReadRegulatorVoltageScalingOutputRdyFlag(void)
{
	return PWR.PWR_CSR.VOSRDY;
}
uint8_kt PWR_ct::PWR_u8ReadWakeUpFlag(void)
{
	return PWR.PWR_CSR.WUF;
}
uint8_kt PWR_ct::PWR_u8ReadStandByFlag(void)
{
	return PWR.PWR_CSR.SBF;
}
uint8_kt PWR_ct::PWR_u8ReadPowerVoltageDetectorOutputState(void)
{
	return PWR.PWR_CSR.PVDO;
}
uint8_kt PWR_ct::PWR_u8ReadBackUpRegulatorRdyFlag(void)
{
	return PWR.PWR_CSR.BRR;
}
void PWR_ct::PWR_vWakeUpPinEnable(void)
{
	PWR.PWR_CSR.EWUP=1;
}
void PWR_ct::PWR_vWakeUpPinDisable(void)
{
	PWR.PWR_CSR.EWUP=1;
}
void PWR_ct::PWR_vBackUpRegulatorEnable(void)
{
	PWR.PWR_CSR.BRE=1;
}
void PWR_ct::PWR_vBackUpRegulatorDisable(void)
{
	PWR.PWR_CSR.BRE=0;
}
void PWR_ct::PWR_vBackUpDomainWriteAccessEnable(void)
{
	PWR.PWR_CR.DBP=1;
}
void PWR_ct::PWR_vBackUpDomainWriteAccessDisable(void)
{
	PWR.PWR_CR.DBP=0;
}
void PWR_ct::PWR_vADC_NoiseImunityFromExtraFlashAccessNoisesEnable(void){
	PWR.PWR_CR.ADCDC1=1;
}/*This option can only be transfered at the following conditions:
	- Prefetch must be OFF in Flash interface prepheral.
	- VDD voltage ranges from 2.4 V to 3.6 V.
	- This bit must not be set when the ADCxDC2 bit in
	SYSCFG_PMC register is set.*/






