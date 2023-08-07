/**************************************/
/* Description : RCC interface File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 04:05:35  04 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#include "RCC_config.h"

/*the user can use this preprocessor defines in the calculations of the other MCAL drivers */
#define PLL_CLOCK                            (MAIN_PLL_AND_AUDIO_PLLI2S_CLOCK_SOURCE==RCC_PLLI2S_AND_PLL__HSI_CLOCK)?(16000000ul*PLL_N/PLL_M*PLL_P):(HSE_CLOCK*PLL_N/PLL_M*PLL_P)
#define SYSTEM_CLOCK                            (SYSTEM_CLOCK_SOURCE==RCC_SYSTEM_CLOCK__PLL_CLOCK)?PLL_CLOCK:((SYSTEM_CLOCK_SOURCE==RCC_SYSTEM_CLOCK__HSI_CLOCK)?16000000ul:HSE_CLOCK)
#define RTC_CLOCK                            (RTC_CLOCK_SOURCE==RCC_RTC__LSI_CLOCK)?32000ul:((RTC_CLOCK_SOURCE==RCC_RTC__LSE_32768HZ_CLOCK)?32768ul:(HSE_CLOCK/RTC_PRESCALER_VALUE))
#define HIGH_CLOCK                              SYSTEM_CLOCK/AHB_PRESCALER_VALUE
#define APB1_PREPHERALS_CLOCK                         HIGH_CLOCK/APB1_PRESCALER_VALUE
#define APB2_PREPHERALS_CLOCK                         HIGH_CLOCK/APB2_PRESCALER_VALUE
#define APB1_TIMERS_CLOCK                    (APB1_PRESCALER_VALUE>=2)?APB1_PREPHERALS_CLOCK*2:APB1_PREPHERALS_CLOCK
#define APB2_TIMERS_CLOCK                    (APB2_PRESCALER_VALUE>=2)?APB2_PREPHERALS_CLOCK*2:APB2_PREPHERALS_CLOCK
#define USB_OTG_CLOCK                        ((MAIN_PLL_AND_AUDIO_PLLI2S_CLOCK_SOURCE==RCC_PLLI2S_AND_PLL__HSI_CLOCK)?16000000ul:HSE_CLOCK)*PLL_N/PLL_M*PLL_Q
#define PLLI2S_CLOCK                         ((MAIN_PLL_AND_AUDIO_PLLI2S_CLOCK_SOURCE==RCC_PLLI2S_AND_PLL__HSI_CLOCK)?16000000ul:HSE_CLOCK)*PLLI2S_N/PLL_M*PLLI2S_R
#define MCO1_CLOCK                         ((MCO1_CLOCK_SOURCE==RCC_MCO1_CLOCK__HSI_16MHZ_CLOCK)?16000000ul:((MCO1_CLOCK_SOURCE==RCC_MCO1_CLOCK__PLL_CLOCK)?PLL_CLOCK:((MCO1_CLOCK_SOURCE==RCC_MCO1_CLOCK__HSE_4_TO_26MHZ_CLOCK)?HSE_CLOCK:32768ul)))/MCO1_CLOCK_PRESCALER_VALUE
#define MCO2_CLOCK                         ((MCO2_CLOCK_SOURCE==RCC_MCO2_CLOCK__SYSTEM_CLOCK)?SYSTEM_CLOCK:((MCO1_CLOCK_SOURCE==RCC_MCO1_CLOCK__PLL_CLOCK)?PLL_CLOCK:((MCO1_CLOCK_SOURCE==RCC_MCO1_CLOCK__HSE_4_TO_26MHZ_CLOCK)?HSE_CLOCK:PLLI2S_CLOCK)))/MCO2_CLOCK_PRESCALER_VALUE

/*********************************options***********************************/

/*STATE OPTIONS*/
#define RCC__STATE___DISABLE 0
#define RCC__STATE___ENABLE  1
/*RTC CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__RTC_CLOCK_SOURCE___NO_CLOCK     ,
RCC__RTC_CLOCK_SOURCE___LSE_CLOCK    ,/*32768HZ*/
RCC__RTC_CLOCK_SOURCE___LSI_CLOCK    ,/*32KHZ*/
RCC__RTC_CLOCK_SOURCE___HSE_CLOCK   /*4 TO 26MHZ and upto 50MHZ in bypass Mode*/
}RTC_ClockSource_et;
/*RTC HSE PRESCALER*/
typedef enum __attribute__((__packed__)){
RCC__RTC_HSE_PRESCALER___NO_HSE_CLOCK    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_2     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_3     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_4     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_5     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_6     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_7     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_8     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_9     ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_10    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_11    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_12    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_13    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_14    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_15    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_16    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_17    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_18    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_19    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_20    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_21    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_22    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_23    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_24    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_25    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_26    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_27    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_28    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_29    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_30    ,
RCC__RTC_HSE_PRESCALER___HSE_CLOCK_PER_31
}RTC_HSE_Prescaler_et;
/*I2S CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__I2S_CLOCK_SOURCE___PLLI2S_CLOCK ,
RCC__I2S_CLOCK_SOURCE___EXTERNAL_CLOCK
}I2S_ClockSource_et;
/*PLLI2S AND PLL CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSI_CLOCK       ,/*16MHZ*/
RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK  /*4 TO 26MHZ and upto 50MHZ in bypass Mode*/
}MainPLL_And_PLLI2S_ClockSource_et;
/*SYSTEM CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__SYSTEM_CLOCK_SOURCE___HSI_CLOCK   ,
RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK   ,
RCC__SYSTEM_CLOCK_SOURCE___PLL_CLOCK
}SystemClockSource_et;
/*MICROCONTROLLER'S CLOCK OUTPUT 2 CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__MCO2_CLOCK_SOURCE___SYS_CLOCK               ,
RCC__MCO2_CLOCK_SOURCE___PLLI2S_CLOCK            ,
RCC__MCO2_CLOCK_SOURCE___HSE_CLOCK               ,
RCC__MCO2_CLOCK_SOURCE___PLL_CLOCK
}MCO2_ClockSource_et;
/*MICROCONTROLLER'S CLOCK OUTPUT 1 CLOCK SOURCE*/
typedef enum __attribute__((__packed__)){
RCC__MCO1_CLOCK_SOURCE___HSI_CLOCK              ,
RCC__MCO1_CLOCK_SOURCE___LSE_CLOCK               ,
RCC__MCO1_CLOCK_SOURCE___HSE_CLOCK              ,
RCC__MCO1_CLOCK_SOURCE___PLL_CLOCK
}MCO1_ClockSource_et;
/*MICROCONTROLLER'S CLOCK OUTPUT 1 AND 2 PRESCALER*/
typedef enum __attribute__((__packed__)){
RCC__MCO_PRESCALER___CLOCK_SOURCE         ,
RCC__MCO_PRESCALER___CLOCK_SOURCE_PER_2 =4,
RCC__MCO_PRESCALER___CLOCK_SOURCE_PER_3   ,
RCC__MCO_PRESCALER___CLOCK_SOURCE_PER_4   ,
RCC__MCO_PRESCALER___CLOCK_SOURCE_PER_5   ,
}MCO_Prescaler_et;

/*AHB PRESCALER*/
typedef enum __attribute__((__packed__)){
RCC__AHB_PRESCALER___SYSTEM_CLOCK          ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_2=8  ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_4    ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_8    ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_16   ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_64   ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_128  ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_256  ,
RCC__AHB_PRESCALER___SYSTEM_CLOCK_PER_512

}AHB_Prescaler_et;

/*APB 1 AND 2 PRESCALER*/
typedef enum __attribute__((__packed__)){
RCC__APB_PRESCALER___AHB_CLOCK          ,
RCC__APB_PRESCALER___AHB_CLOCK_PER_2 =4 ,
RCC__APB_PRESCALER___AHB_CLOCK_PER_4    ,
RCC__APB_PRESCALER___AHB_CLOCK_PER_8    ,
RCC__APB_PRESCALER___AHB_CLOCK_PER_16


}APB_Prescaler_et;


/*prototypes class*/
class RCC_ct{
public:
/*Pre-processing Configuration (pre-build)*/
	RCC_ct(void); /*to use this API you have to enable backup domain access from PWR prepheral*/
/*Run-Time Configuration*/
 void RCC_vHSI_ClockEnable(void);
 void RCC_vHSI_ClockDisable(void);
 void RCC_vHSE_ClockEnable(void);
 void RCC_vHSE_ClockDisable(void);
 void RCC_vHSE_BypassClockEnable(void);
 void RCC_vHSE_BypassClockDisable(void);
 void RCC_vLSI_ClockEnable(void);
 void RCC_vLSI_ClockDisable(void);
 void RCC_vLSE_ClockEnable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vLSE_ClockDisable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vLSE_BypassClockEnable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vLSE_BypassClockDisable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vClockSecuritySystemEnable(void);
 void RCC_vClockSecuritySystemDisable(void);
 void RCC_vMainPLL_ClockEnable(void);
 void RCC_vMainPLL_ClockDisable(void);
 void RCC_vPLLI2S_ClockEnable(void);
 void RCC_vPLLI2S_ClockDisable(void);
 void RCC_vPLLI2S_ReadyInterruptEnable(void);
 void RCC_vPLLI2S_ReadyInterruptDisable(void);
 void RCC_vMainPLL_ReadyInterruptEnable(void);
 void RCC_vMainPLL_ReadyInterruptDisable(void);
 void RCC_vHSE_ReadyInterruptEnable(void);
 void RCC_vHSE_ReadyInterruptDisable(void);
 void RCC_vHSI_ReadyInterruptEnable(void);
 void RCC_vHSI_ReadyInterruptDisable(void);
 void RCC_vLSE_ReadyInterruptEnable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vLSE_ReadyInterruptDisable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 void RCC_vLSI_ReadyInterruptEnable(void);
 void RCC_vLSI_ReadyInterruptDisable(void);
 ErrorStatus_et RCC_enuHSI_CalibrateTrim(uint8_kt u8TrimValueCpy);
      uint16_kt RCC_u16HSI_CalibrateVal(void);
 ErrorStatus_et RCC_enuSetMainPLL_N_Freq(uint16_kt u16FrequencyCpy);
 ErrorStatus_et RCC_enuSetPLLI2S_N_Freq(uint16_kt u16FrequencyCpy);
 ErrorStatus_et RCC_enuSetMainPLL_AND_PLLI2S_M_Freq(uint8_kt u8FrequencyCpy);
 ErrorStatus_et RCC_enuSetMainPLL_Q_Freq(uint8_kt u8FrequencyCpy);
 ErrorStatus_et RCC_enuSetMainPLL_P_Freq(uint8_kt u8FrequencyCpy);
 ErrorStatus_et RCC_enuSetPLLI2S_R_Freq(uint8_kt u8FrequencyCpy);
 
 void RCC_vSetSystemClockSource(SystemClockSource_et SystemClockSource_e);
 void RCC_vSetAHB_Prescaler(AHB_Prescaler_et AHB_Prescaler_e);/*the clock source for AHB is The Systemtem clock*/
 void RCC_vSetAPB1_Prescaler(APB_Prescaler_et APB_Prescaler_e);/*the clock source for APB2 is HSE clock*/
 void RCC_vSetAPB2_Prescaler(APB_Prescaler_et APB_Prescaler_e);/*the clock source for APB1 is HSE clock*/
 void RCC_vSetRTC_ClockSource(RTC_ClockSource_et RTC_ClockSource_e);
 void RCC_vSetRTC_HSE_Prescaler(RTC_HSE_Prescaler_et RTC_HSE_Prescaler_e);/*the clock source for RTC is HSE clock*/
 void RCC_vSetMCO1_ClockSource(MCO1_ClockSource_et MCO1_ClockSource_e);
 void RCC_vSetMCO2_ClockSource(MCO2_ClockSource_et MCO2_ClockSource_e);
 void RCC_vSetMCO1_Prescaler(MCO_Prescaler_et MCO_Prescaler_e);
 void RCC_vSetMCO2_Prescaler(MCO_Prescaler_et MCO_Prescaler_e);
 void RCC_vSetI2S_ClockSource(I2S_ClockSource_et I2S_ClockSource_e);
 void RCC_vSetMainPLL_And_PLLI2S_ClockSource(MainPLL_And_PLLI2S_ClockSource_et MainPLL_And_PLLI2S_ClockSource_e);
 
 void RCC_vClrClockSecuritySystemInterruptFlag(void);
 uint8_kt RCC_u8ReadClockSecuritySystemInterruptFlag(void);
 void RCC_vClrPLLI2S_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadPLLI2S_ReadyInterruptFlag(void);
 void RCC_vClrMainPLL_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadMainPLL_ReadyInterruptFlag(void);
 void RCC_vClrHSE_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadHSE_ReadyInterruptFlag(void);
 void RCC_vClrHSI_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadHSI_ReadyInterruptFlag(void);
 void RCC_vClrLSE_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadLSE_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadLSE_ReadyClockFlag(void);
 uint8_kt RCC_u8ReadHSE_ReadyClockFlag(void);
 void RCC_vClrLSI_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadLSI_ReadyInterruptFlag(void);
 uint8_kt RCC_u8ReadBOR_POR_PDR_ResetFlag(void);
 uint8_kt RCC_u8ReadPOR_PDR_ResetFlag(void);
 uint8_kt RCC_u8ReadSW_ResetFlag(void);
 uint8_kt RCC_u8ReadIWDG_ResetFlag(void);
 uint8_kt RCC_u8ReadWWDG_ResetFlag(void);
 uint8_kt RCC_u8ReadLowPowerResetFlag(void);
 uint8_kt RCC_u8ReadPinResetFlag(void);
 void RCC_vClrAllResetFlags(void);
 uint8_kt RCC_u8HSI_ClockState(void);
 uint8_kt RCC_u8HSE_ClockState(void);
 uint8_kt RCC_u8HSE_BypassClockState(void);
 uint8_kt RCC_u8LSI_ClockState(void);
 uint8_kt RCC_u8LSE_ClockState(void);
 uint8_kt RCC_u8LSE_BypassClockState(void);
 uint8_kt RCC_u8ClockSecuritySystemState(void);
 uint8_kt RCC_u8MainPLL_State(void);
 uint8_kt RCC_u8PLLI2S_State(void);
 uint8_kt RCC_u8PLLI2S_ReadyInterruptState(void);
 uint8_kt RCC_u8MainPLL_ReadyInterruptState(void);
 uint8_kt RCC_u8HSE_ReadyInterruptState(void);
 uint8_kt RCC_u8HSI_ReadyInterruptState(void);
 uint8_kt RCC_u8LSE_ReadyInterruptState(void);/*to use this API you have to enable backup domain access from PWR prepheral*/
 uint8_kt RCC_u8LSI_ReadyInterruptState(void);
/*RUN-TIME APIs*/
 void RCC_vResetPortA(void);
 void RCC_vResetPortB(void);
 void RCC_vResetPortC(void);
 void RCC_vResetPortD(void);
 void RCC_vResetPortE(void);
 void RCC_vResetPortH(void);
 void RCC_vResetCRC(void);
 void RCC_vResetDMA1(void);
 void RCC_vResetDMA2(void);
 void RCC_vResetOTGFS(void);
 void RCC_vResetTIM1(void);
 void RCC_vResetTIM2(void);
 void RCC_vResetTIM3(void);
 void RCC_vResetTIM4(void);
 void RCC_vResetTIM5(void);
 void RCC_vResetTIM9(void);
 void RCC_vResetTIM10(void);
 void RCC_vResetTIM11(void);
 void RCC_vResetWWDG(void);
 void RCC_vResetSPI1(void);
 void RCC_vResetSPI2(void);
 void RCC_vResetSPI3(void);
 void RCC_vResetSPI4(void);
 void RCC_vResetSYSCFG(void);
 void RCC_vResetUSART1(void);
 void RCC_vResetUSART2(void);
 void RCC_vResetUSART6(void);
 void RCC_vResetI2C1(void);
 void RCC_vResetI2C2(void);
 void RCC_vResetI2C3(void);
 void RCC_vResetPWR(void);
 void RCC_vResetADC1(void);
 void RCC_vResetSDIO(void);

 void RCC_vResetBackUpDomain(void);/*the backup domain is
									• The RTC
									• The LSE oscillator
									• PC13 to PC15 I/Os */
 /*to use this API you have to enable backup domain access from PWR prepheral*/

 void RCC_vPortA_ClockEnable(void);
 void RCC_vPortB_ClockEnable(void);
 void RCC_vPortC_ClockEnable(void);
 void RCC_vPortD_ClockEnable(void);
 void RCC_vPortE_ClockEnable(void);
 void RCC_vPortH_ClockEnable(void);
 void RCC_vCRC_ClockEnable(void);
 void RCC_vDMA1ClockEnable(void);
 void RCC_vDMA2ClockEnable(void);
 void RCC_vOTGFS_ClockEnable(void);
 void RCC_vTIM1ClockEnable(void);
 void RCC_vTIM2ClockEnable(void);
 void RCC_vTIM3ClockEnable(void);
 void RCC_vTIM4ClockEnable(void);
 void RCC_vTIM5ClockEnable(void);
 void RCC_vTIM9ClockEnable(void);
 void RCC_vTIM10ClockEnable(void);
 void RCC_vTIM11ClockEnable(void);
 void RCC_vWWDG_ClockEnable(void);
 void RCC_vSPI1ClockEnable(void);
 void RCC_vSPI2ClockEnable(void);
 void RCC_vSPI3ClockEnable(void);
 void RCC_vSPI4ClockEnable(void);
 void RCC_vSYSCFG_ClockEnable(void);
 void RCC_vUSART1ClockEnable(void);
 void RCC_vUSART2ClockEnable(void);
 void RCC_vUSART6ClockEnable(void);
 void RCC_vI2C1ClockEnable(void);
 void RCC_vI2C2ClockEnable(void);
 void RCC_vI2C3ClockEnable(void);
 void RCC_vPWR_ClockEnable(void);
 void RCC_vADC1ClockEnable(void);
 void RCC_vSDIO_ClockEnable(void);
 void RCC_vRTC_ClockEnable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/


 void RCC_vPortA_ClockDisable(void);
 void RCC_vPortB_ClockDisable(void);
 void RCC_vPortC_ClockDisable(void);
 void RCC_vPortD_ClockDisable(void);
 void RCC_vPortE_ClockDisable(void);
 void RCC_vPortH_ClockDisable(void);
 void RCC_vCRC_ClockDisable(void);
 void RCC_vDMA1ClockDisable(void);
 void RCC_vDMA2ClockDisable(void);
 void RCC_vOTGFS_ClockDisable(void);
 void RCC_vTIM1ClockDisable(void);
 void RCC_vTIM2ClockDisable(void);
 void RCC_vTIM3ClockDisable(void);
 void RCC_vTIM4ClockDisable(void);
 void RCC_vTIM5ClockDisable(void);
 void RCC_vTIM9ClockDisable(void);
 void RCC_vTIM10ClockDisable(void);
 void RCC_vTIM11ClockDisable(void);
 void RCC_vWWDG_ClockDisable(void);
 void RCC_vSPI1ClockDisable(void);
 void RCC_vSPI2ClockDisable(void);
 void RCC_vSPI3ClockDisable(void);
 void RCC_vSPI4ClockDisable(void);
 void RCC_vSYSCFG_ClockDisable(void);
 void RCC_vUSART1ClockDisable(void);
 void RCC_vUSART2ClockDisable(void);
 void RCC_vUSART6ClockDisable(void);
 void RCC_vI2C1ClockDisable(void);
 void RCC_vI2C2ClockDisable(void);
 void RCC_vI2C3ClockDisable(void);
 void RCC_vPWR_ClockDisable(void);
 void RCC_vADC1ClockDisable(void);
 void RCC_vSDIO_ClockDisable(void);
 void RCC_vRTC_ClockDisable(void);/*to use this API you have to enable backup domain access from PWR prepheral*/


 void RCC_vPortA_InLowPowerModeClockEnable(void);
 void RCC_vPortB_InLowPowerModeClockEnable(void);
 void RCC_vPortC_InLowPowerModeClockEnable(void);
 void RCC_vPortD_InLowPowerModeClockEnable(void);
 void RCC_vPortE_InLowPowerModeClockEnable(void);
 void RCC_vPortH_InLowPowerModeClockEnable(void);
 void RCC_vCRC_InLowPowerModeClockEnable(void);
 void RCC_vDMA1InLowPowerModeClockEnable(void);
 void RCC_vDMA2InLowPowerModeClockEnable(void);
 void RCC_vOTGFS_InLowPowerModeClockEnable(void);
 void RCC_vTIM1InLowPowerModeClockEnable(void);
 void RCC_vTIM2InLowPowerModeClockEnable(void);
 void RCC_vTIM3InLowPowerModeClockEnable(void);
 void RCC_vTIM4InLowPowerModeClockEnable(void);
 void RCC_vTIM5InLowPowerModeClockEnable(void);
 void RCC_vTIM9InLowPowerModeClockEnable(void);
 void RCC_vTIM10InLowPowerModeClockEnable(void);
 void RCC_vTIM11InLowPowerModeClockEnable(void);
 void RCC_vWWDG_InLowPowerModeClockEnable(void);
 void RCC_vSPI1InLowPowerModeClockEnable(void);
 void RCC_vSPI2InLowPowerModeClockEnable(void);
 void RCC_vSPI3InLowPowerModeClockEnable(void);
 void RCC_vSPI4InLowPowerModeClockEnable(void);
 void RCC_vSYSCFG_InLowPowerModeClockEnable(void);
 void RCC_vUSART1InLowPowerModeClockEnable(void);
 void RCC_vUSART2InLowPowerModeClockEnable(void);
 void RCC_vUSART6InLowPowerModeClockEnable(void);
 void RCC_vI2C1InLowPowerModeClockEnable(void);
 void RCC_vI2C2InLowPowerModeClockEnable(void);
 void RCC_vI2C3InLowPowerModeClockEnable(void);
 void RCC_vPWR_InLowPowerModeClockEnable(void);
 void RCC_vADC1InLowPowerModeClockEnable(void);
 void RCC_vSDIO_InLowPowerModeClockEnable(void);


 void RCC_vPortA_InLowPowerModeClockDisable(void);
 void RCC_vPortB_InLowPowerModeClockDisable(void);
 void RCC_vPortC_InLowPowerModeClockDisable(void);
 void RCC_vPortD_InLowPowerModeClockDisable(void);
 void RCC_vPortE_InLowPowerModeClockDisable(void);
 void RCC_vPortH_InLowPowerModeClockDisable(void);
 void RCC_vCRC_InLowPowerModeClockDisable(void);
 void RCC_vDMA1InLowPowerModeClockDisable(void);
 void RCC_vDMA2InLowPowerModeClockDisable(void);
 void RCC_vOTGFS_InLowPowerModeClockDisable(void);
 void RCC_vTIM1InLowPowerModeClockDisable(void);
 void RCC_vTIM2InLowPowerModeClockDisable(void);
 void RCC_vTIM3InLowPowerModeClockDisable(void);
 void RCC_vTIM4InLowPowerModeClockDisable(void);
 void RCC_vTIM5InLowPowerModeClockDisable(void);
 void RCC_vTIM9InLowPowerModeClockDisable(void);
 void RCC_vTIM10InLowPowerModeClockDisable(void);
 void RCC_vTIM11InLowPowerModeClockDisable(void);
 void RCC_vWWDG_InLowPowerModeClockDisable(void);
 void RCC_vSPI1InLowPowerModeClockDisable(void);
 void RCC_vSPI2InLowPowerModeClockDisable(void);
 void RCC_vSPI3InLowPowerModeClockDisable(void);
 void RCC_vSPI4InLowPowerModeClockDisable(void);
 void RCC_vSYSCFG_InLowPowerModeClockDisable(void);
 void RCC_vUSART1InLowPowerModeClockDisable(void);
 void RCC_vUSART2InLowPowerModeClockDisable(void);
 void RCC_vUSART6InLowPowerModeClockDisable(void);
 void RCC_vI2C1InLowPowerModeClockDisable(void);
 void RCC_vI2C2InLowPowerModeClockDisable(void);
 void RCC_vI2C3InLowPowerModeClockDisable(void);
 void RCC_vPWR_InLowPowerModeClockDisable(void);
 void RCC_vADC1InLowPowerModeClockDisable(void);
 void RCC_vSDIO_InLowPowerModeClockDisable(void);

#if(CLOCK_SECURITY_SYSTEM_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetClockSecuritySysemCallBack(pf pfCallback);
#endif
#if(LSE_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetLSE_CallBack(pf pfCallback);
#endif
#if(LSI_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetLSI_CallBack(pf pfCallback);
#endif
#if(HSE_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetHSE_CallBack(pf pfCallback);
#endif
#if(HSI_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetHSI_CallBack(pf pfCallback);
#endif
#if(MAIN_PLL_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetMainPLL_CallBack(pf pfCallback);
#endif
#if(PLLI2S_CALLBACK_STATE==RCC__STATE___ENABLE)
 ErrorStatus_et RCC_enuSetPLLI2S_CallBack(pf pfCallback);
#endif
};


#endif


