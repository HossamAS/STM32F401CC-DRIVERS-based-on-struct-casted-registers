/**************************************/
/* Description : PWR interface File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 09:10:37  10 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef PWR_INTERFACE_H
#define PWR_INTERFACE_H

/**************************OPTIONS***************************/
/*POW STATE*/
#define PWR__STATE___DISABLE 0
#define PWR__STATE___ENABLE  1
/*LOW POWER DEEP SLEEP MODE*/
typedef enum __attribute__((__packed__)){
PWR__LOW_POWER_DEEP_SLEEP_MODE___VOLTAGE_REGULATOR_ON 	,
PWR__LOW_POWER_DEEP_SLEEP_MODE___LOW_POWER_VOLTAGE_REGULATOR_ON
}LowPowerDeepSleepMode_et;


/*POW DOWN DEEP SLEEP MODE*/
typedef enum __attribute__((__packed__)){
PWR__POWER_DOWN_DEEP_SLEEP_MODE___ENTER_STOP_MODE					,
PWR__POWER_DOWN_DEEP_SLEEP_MODE___ENTER_STANDBY_MODE
}PowerDownDeepSleepMode_et;
/*POW VOLT DETECTOR LEVEL*/
typedef enum __attribute__((__packed__)){
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_2V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_3V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_4V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_5V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_6V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_7V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_8V   ,
PWR__POWER_VOLTAGE_DETECTOR_LEVEL___2_9V
}PowerVoltageDetectorLevel_et;


/*LOW POWER REGULATOR VOLTAGE MODE*/
typedef enum __attribute__((__packed__)){
PWR__LOW_POWER_REGULATOR_VOLTAGE_MODE___LOW_POWER_REGULATOR_ON					,
PWR__LOW_POWER_REGULATOR_VOLTAGE_MODE___LOW_POWER_REGULATOR_IN_LOW_VOLTAGE_AND_FLASH_MEMORY_IN_DEEP_SLEEP_MODE
}LowPowerRegulatorVoltageMode_et;
/*MAIN REGULATOR VOLT MOD*/
typedef enum __attribute__((__packed__)){
PWR__MAIN_REGULATOR_VOLTAGE_MODE___MAIN_REGULATOR_IN_VOLTAGE_SCALE_3		,
PWR__MAIN_REGULATOR_VOLTAGE_MODE___MAIN_REGULATOR_IN_LOW_VOLTAGE_AND_FLASH_MEMORY_IN_DEEP_SLEEP_MODE
}MainRegulatorVoltageMode_et;
/*REGULATOR VOLTAGE SCALING OUTPUT MODE*/
typedef enum __attribute__((__packed__)){
PWR__REGULATOR_VOLTAGE_SCALING_OUTPUT_MODE___SCALE_3,
PWR__REGULATOR_VOLTAGE_SCALING_OUTPUT_MODE___SCALE_2
}RegulatorVoltageScalingOutputMode_et;

class PWR_ct{
public:
/*PRE-BUILD CONFIGURATION (PRE-PROCESSING)*/
PWR_ct(void);
/*RUN-TIME CONFIGURATION*/
void PWR_vLowPowerDeepSleepMode(LowPowerDeepSleepMode_et LowPowerDeepSleepMode_e);
void PWR_vPowerDownDeepSleepMode(PowerDownDeepSleepMode_et PowerDownDeepSleepMode_e);
void PWR_vClrWakeUpFlag(void);
void PWR_vClrStandByFlag(void);
void PWR_vPowerVoltageDetectorEnable(void);
void PWR_vPowerVoltageDetectorDisable(void);
void PWR_vPowerVoltageDetectorLevel(PowerVoltageDetectorLevel_et PowerVoltageDetectorLevel_e);
void PWR_vPowerDownTheFlashInStopModeEnable(void);
void PWR_vPowerDownTheFlashInStopModeDisable(void);
void PWR_vLowPowerRegulatorVoltageMode(LowPowerRegulatorVoltageMode_et LowPowerRegulatorVoltageMode_e);
void PWR_vMainRegulatorVoltageMode(MainRegulatorVoltageMode_et MainRegulatorVoltageMode_e);
void PWR_vRegulatorVoltageScalingOutputMode(RegulatorVoltageScalingOutputMode_et RegulatorVoltageScalingOutputMode_e);
uint8_kt PWR_u8ReadRegulatorVoltageScalingOutputRdyFlag(void);
uint8_kt PWR_u8ReadWakeUpFlag(void);
uint8_kt PWR_u8ReadStandByFlag(void);
uint8_kt PWR_u8ReadPowerVoltageDetectorOutputState(void);
uint8_kt PWR_u8ReadBackUpRegulatorRdyFlag(void);
void PWR_vWakeUpPinEnable(void);
void PWR_vWakeUpPinDisable(void);
void PWR_vBackUpRegulatorEnable(void);
void PWR_vBackUpRegulatorDisable(void);
void PWR_vBackUpDomainWriteAccessEnable(void);
void PWR_vBackUpDomainWriteAccessDisable(void);
void PWR_vADC_NoiseImunityFromExtraFlashAccessNoisesEnable(void);
};
#endif
