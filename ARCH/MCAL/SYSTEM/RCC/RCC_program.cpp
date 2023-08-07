/**************************************/
/* Description : RCC program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 04:05:35  04 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../../LIB/STD_MACROS/STD_MACROS.h"

#include "RCC_private.h"
#include "RCC_interface.h"
#include "RCC_config.h"



 RCC_ct::RCC_ct(void) /*to use this API you have to enable backup domain access from PWR prepheral*/
{

 RCC.RCC_PLLCFGR.DATA=PLL_M|PLL_N<<6|PLL_P<<16|
		              MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE<<22|PLL_Q<<24;

 RCC.RCC_CFGR.DATA=SYSTEM_CLOCK_SOURCE|AHB_PRESCALER<<4|
		           APB1_PRESCALER<<10|APB2_PRESCALER<<13|
				   RTC_HSE_PRESCALER<<16|MCO1_CLOCK_SOURCE<<21|
				   I2S_CLOCK_SOURCE<<23|MCO1_PRESCALER<<24|
				   MCO2_PRESCALER<<27|MCO2_CLOCK_SOURCE<<30;
 
 RCC.RCC_CIR.DATA=LSI_READY_INTERRUPT_STATE<<8|LSE_READY_INTERRUPT_STATE<<9|
		 	 	  HSI_READY_INTERRUPT_STATE<<10|HSE_READY_INTERRUPT_STATE<<11|
				  MAIN_PLL_READY_INTERRUPT_STATE<<12|PLLI2S_READY_INTERRUPT_STATE<<13;

 RCC.RCC_AHB1ENR.DATA=PORTA_CLOCK_STATE|PORTB_CLOCK_STATE<<1|PORTC_CLOCK_STATE<<2|
		 	 	 	  PORTD_CLOCK_STATE<<3|PORTE_CLOCK_STATE<<4|PORTH_CLOCK_STATE<<7|
					  CRC_CLOCK_STATE<<12|DMA1_CLOCK_STATE<<21|DMA2_CLOCK_STATE<<22;

 RCC.RCC_AHB2ENR.DATA=OTGFS_CLOCK_STATE<<7;

 RCC.RCC_APB1ENR.DATA=TIM2_CLOCK_STATE|TIM3_CLOCK_STATE<<1|TIM4_CLOCK_STATE<<2|
		 	 	 	  TIM5_CLOCK_STATE<<3|WWDG_CLOCK_STATE<<11|SPI2_CLOCK_STATE<<14|
					  SPI3_CLOCK_STATE<<15|USART2_CLOCK_STATE<<17|I2C1_CLOCK_STATE<<21|
					  I2C2_CLOCK_STATE<<22|I2C3_CLOCK_STATE<<23|PWR_CLOCK_STATE<<28;

 RCC.RCC_APB2ENR.DATA=TIM1_CLOCK_STATE|USART1_CLOCK_STATE<<4|USART6_CLOCK_STATE<<5|
		 	 	 	  ADC1_CLOCK_STATE<<8|SDIO_CLOCK_STATE<<11|SPI1_CLOCK_STATE<<12|
					  SPI4_CLOCK_STATE<<13|SYSCFG_CLOCK_STATE<<14|TIM9_CLOCK_STATE<<16|
					  TIM10_CLOCK_STATE<<17|TIM11_CLOCK_STATE<<18;


 RCC.RCC_AHB1LPENR.DATA=PORTA_IN_LOW_POWER_MODE_CLOCK_STATE|PORTB_IN_LOW_POWER_MODE_CLOCK_STATE<<1|
		                PORTC_IN_LOW_POWER_MODE_CLOCK_STATE<<2|PORTD_IN_LOW_POWER_MODE_CLOCK_STATE<<3|
						PORTE_IN_LOW_POWER_MODE_CLOCK_STATE<<4|PORTH_IN_LOW_POWER_MODE_CLOCK_STATE<<7|
					    CRC_IN_LOW_POWER_MODE_CLOCK_STATE<<12|DMA1_IN_LOW_POWER_MODE_CLOCK_STATE<<21|
						DMA2_IN_LOW_POWER_MODE_CLOCK_STATE<<22;

 RCC.RCC_AHB2LPENR.DATA=OTGFS_IN_LOW_POWER_MODE_CLOCK_STATE<<7;

 RCC.RCC_APB1LPENR.DATA=TIM2_IN_LOW_POWER_MODE_CLOCK_STATE|TIM3_IN_LOW_POWER_MODE_CLOCK_STATE<<1|
		                TIM4_IN_LOW_POWER_MODE_CLOCK_STATE<<2|TIM5_IN_LOW_POWER_MODE_CLOCK_STATE<<3|
						WWDG_IN_LOW_POWER_MODE_CLOCK_STATE<<11|SPI2_IN_LOW_POWER_MODE_CLOCK_STATE<<14|
					    SPI3_IN_LOW_POWER_MODE_CLOCK_STATE<<15|USART2_IN_LOW_POWER_MODE_CLOCK_STATE<<17|
					    I2C1_IN_LOW_POWER_MODE_CLOCK_STATE<<21|I2C2_IN_LOW_POWER_MODE_CLOCK_STATE<<22|
						I2C3_IN_LOW_POWER_MODE_CLOCK_STATE<<23|PWR_IN_LOW_POWER_MODE_CLOCK_STATE<<28;

 RCC.RCC_APB2LPENR.DATA=TIM1_IN_LOW_POWER_MODE_CLOCK_STATE|USART1_IN_LOW_POWER_MODE_CLOCK_STATE<<4|
		 	 	 	 	USART6_IN_LOW_POWER_MODE_CLOCK_STATE<<5|ADC1_IN_LOW_POWER_MODE_CLOCK_STATE<<8|
						SDIO_IN_LOW_POWER_MODE_CLOCK_STATE<<11|SPI1_IN_LOW_POWER_MODE_CLOCK_STATE<<12|
						SPI4_IN_LOW_POWER_MODE_CLOCK_STATE<<13|SYSCFG_IN_LOW_POWER_MODE_CLOCK_STATE<<14|
						TIM9_IN_LOW_POWER_MODE_CLOCK_STATE<<16|TIM10_IN_LOW_POWER_MODE_CLOCK_STATE<<17|
						TIM11_IN_LOW_POWER_MODE_CLOCK_STATE<<18;

 RCC.RCC_BDCR.RTCSEL=RTC_CLOCK_SOURCE;
 RCC.RCC_BDCR.RTCEN=RTC_CLOCK_STATE;
 RCC.RCC_BDCR.LSEBYP=LSE_BYPASS_CLOCK_STATE;
 RCC.RCC_BDCR.LSEON=LSE_CLOCK_STATE;
 RCC.RCC_CR.HSION=HSI_CLOCK_STATE;
 RCC.RCC_CR.HSEBYP=HSE_BYPASS_CLOCK_STATE;
 RCC.RCC_CR.HSEON=HSE_CLOCK_STATE;

 RCC.RCC_CR.PLLON=MAIN_PLL_CLOCK_STATE;


 RCC.RCC_CR.PLLI2SON=PLLI2S_CLOCK_STATE;
 RCC.RCC_CR.CSSON=CLOCK_SECURITY_SYSTEM_STATE;




 RCC.RCC_CSR.LSION=LSI_CLOCK_STATE;
 RCC.RCC_PLLI2SCFGR.DATA=PLLI2S_N<<6|PLLI2S_R<<28;

}
void RCC_ct::RCC_vHSI_ClockEnable(void)
{

	RCC.RCC_CR.HSION=1;
}
void RCC_ct::RCC_vHSI_ClockDisable(void)
{
	RCC.RCC_CR.HSION=0;
}
void RCC_ct::RCC_vHSE_ClockEnable(void)
{
		RCC.RCC_CR.HSEON=1;
}
void RCC_ct::RCC_vHSE_ClockDisable(void)
{
	if(RCC.RCC_CFGR.SW==RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK&&RCC.RCC_PLLCFGR.PLLSRC==RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK)
		{

			RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___HSI_CLOCK;
			RCC.RCC_PLLCFGR.PLLSRC=RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK;
			RCC.RCC_CR.HSEON=0;
			RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK;
			RCC.RCC_PLLCFGR.PLLSRC=RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK;
		}
		else if(RCC.RCC_CFGR.SW==RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK)
		{
			RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___HSI_CLOCK;
			RCC.RCC_CR.HSEON=0;
			RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___HSE_CLOCK;
		}
		else if (RCC.RCC_PLLCFGR.PLLSRC==RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK)
		{
			RCC.RCC_PLLCFGR.PLLSRC=RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSI_CLOCK;
			RCC.RCC_CR.HSEON=0;
			RCC.RCC_PLLCFGR.PLLSRC=RCC__MAIN_PLL_AND_PLLI2S_CLOCK_SOURCE___HSE_CLOCK;
		}
		else
		{
			RCC.RCC_CR.HSEON=0;
		}
}
void RCC_ct::RCC_vHSE_BypassClockEnable(void)
{
	 RCC_vHSE_ClockDisable();
	 RCC.RCC_CR.HSEBYP=1;
	 RCC_vHSE_ClockEnable();
}
void RCC_ct::RCC_vHSE_BypassClockDisable(void)
{
	 RCC_vHSE_ClockDisable();
	 RCC.RCC_CR.HSEBYP=0;
	 RCC_vHSE_ClockEnable();
}
void RCC_ct::RCC_vLSI_ClockEnable(void)
{
	RCC.RCC_CSR.LSION=1;
}
void RCC_ct::RCC_vLSI_ClockDisable(void)
{
	RCC.RCC_CSR.LSION=0;
}
void RCC_ct::RCC_vLSE_ClockEnable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	 RCC.RCC_BDCR.LSEON=1;
}
void RCC_ct::RCC_vLSE_ClockDisable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	RCC.RCC_BDCR.LSEON=0;
}
void RCC_ct::RCC_vLSE_BypassClockEnable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	 RCC_vLSE_ClockDisable();
	 RCC.RCC_BDCR.LSEBYP=1;
	 RCC_vLSE_ClockEnable();
}
void RCC_ct::RCC_vLSE_BypassClockDisable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	 RCC_vLSE_ClockDisable();
	 RCC.RCC_BDCR.LSEBYP=1;
	 RCC_vLSE_ClockEnable();
}
void RCC_ct::RCC_vRTC_ClockEnable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	 RCC.RCC_BDCR.RTCEN=1;
}
void RCC_ct::RCC_vRTC_ClockDisable(void)/*to use this API you have to enable backup domain access from PWR prepheral*/
{
	 RCC.RCC_BDCR.RTCEN=0;
}
void RCC_ct::RCC_vClockSecuritySystemEnable(void)
{
	 RCC.RCC_CR.CSSON=1;
}
void RCC_ct::RCC_vClockSecuritySystemDisable(void)
{
	 RCC.RCC_CR.CSSON=0;
}
void RCC_ct::RCC_vMainPLL_ClockEnable(void)
{
	 RCC.RCC_CR.PLLON=1;
}
void RCC_ct::RCC_vMainPLL_ClockDisable(void)
{
	if(RCC.RCC_CFGR.SW==RCC__SYSTEM_CLOCK_SOURCE___PLL_CLOCK)
	{
		RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___HSI_CLOCK;
		RCC.RCC_CR.PLLON=1;
		RCC.RCC_CFGR.SW=RCC__SYSTEM_CLOCK_SOURCE___PLL_CLOCK;
	}
	else
	{
		RCC.RCC_CR.PLLON=1;
	}
}
void RCC_ct::RCC_vPLLI2S_ClockEnable(void)
{

	RCC.RCC_CR.PLLI2SON=1;
}
void RCC_ct::RCC_vPLLI2S_ClockDisable(void)
{
	RCC.RCC_CR.PLLI2SON=0;
}
void RCC_ct::RCC_vPLLI2S_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.PLLI2SRDYIE=1;
}
void RCC_ct::RCC_vPLLI2S_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.PLLI2SRDYIE=0;
}
void RCC_ct::RCC_vMainPLL_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.PLLRDYIE=1;
}
void RCC_ct::RCC_vMainPLL_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.PLLRDYIE=0;
}
void RCC_ct::RCC_vHSE_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.HSERDYIE=1;
}
void RCC_ct::RCC_vHSE_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.HSERDYIE=0;
}
void RCC_ct::RCC_vHSI_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.HSIRDYIE=1;
}
void RCC_ct::RCC_vHSI_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.HSIRDYIE=0;
}
void RCC_ct::RCC_vLSE_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.LSERDYIE=1;
}
void RCC_ct::RCC_vLSE_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.LSERDYIE=0;
}
void RCC_ct::RCC_vLSI_ReadyInterruptEnable(void)
{
	RCC.RCC_CIR.LSIRDYIE=1;
}
void RCC_ct::RCC_vLSI_ReadyInterruptDisable(void)
{
	RCC.RCC_CIR.LSIRDYIE=0;
}
ErrorStatus_et RCC_ct::RCC_enuHSI_CalibrateTrim(uint8_kt u8TrimValueCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(u8TrimValueCpy<32)
	{
		RCC.RCC_CR.HSITRIM= u8TrimValueCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
		return ErrorStatus_e;
	}
uint16_kt RCC_ct::RCC_u16HSI_CalibrateVal(void)
{
	return RCC.RCC_CR.HSICAL;
}
ErrorStatus_et RCC_ct::RCC_enuSetMainPLL_N_Freq(uint16_kt u16FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(191<u16FrequencyCpy&&u16FrequencyCpy<433)
	{
	RCC.RCC_PLLCFGR.PLLN= u16FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
ErrorStatus_et RCC_ct::RCC_enuSetPLLI2S_N_Freq(uint16_kt u16FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(191<u16FrequencyCpy&&u16FrequencyCpy<433)
	{
		RCC.RCC_PLLI2SCFGR.PLLI2SNx=u16FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;

}
ErrorStatus_et RCC_ct::RCC_enuSetMainPLL_AND_PLLI2S_M_Freq(uint8_kt u8FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(1<u8FrequencyCpy&&u8FrequencyCpy<64)
	{
		RCC.RCC_PLLCFGR.PLLM= u8FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
ErrorStatus_et RCC_ct::RCC_enuSetMainPLL_Q_Freq(uint8_kt u8FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(1<u8FrequencyCpy&&u8FrequencyCpy<16)
	{
		RCC.RCC_PLLCFGR.PLLQ= u8FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;

}
ErrorStatus_et RCC_ct::RCC_enuSetMainPLL_P_Freq(uint8_kt u8FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(u8FrequencyCpy<4)
	{
		RCC.RCC_PLLCFGR.PLLP= u8FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;

}
ErrorStatus_et RCC_ct::RCC_enuSetPLLI2S_R_Freq(uint8_kt u8FrequencyCpy)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(1<u8FrequencyCpy&&u8FrequencyCpy<8)
	{
		RCC.RCC_PLLI2SCFGR.PLLI2SRx= u8FrequencyCpy;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;

}
void RCC_ct::RCC_vSetSystemClockSource(SystemClockSource_et SystemClockSource_e)
{
		RCC.RCC_CFGR.SW=SystemClockSource_e;
}
void RCC_ct::RCC_vSetAHB_Prescaler(AHB_Prescaler_et AHB_Prescaler_e)
{
		RCC.RCC_CFGR.HPRE=AHB_Prescaler_e;
}/*the clock source for AHB is The System clock*/
void RCC_ct::RCC_vSetAPB1_Prescaler(APB_Prescaler_et APB_Prescaler_e)
{
		RCC.RCC_CFGR.PPRE1=APB_Prescaler_e;
}/*the clock source for APB2 is HSE clock*/
void RCC_ct::RCC_vSetAPB2_Prescaler(APB_Prescaler_et APB_Prescaler_e)
{
		RCC.RCC_CFGR.PPRE2=APB_Prescaler_e;
}/*the clock source for APB1 is HSE clock*/
void RCC_ct::RCC_vSetRTC_ClockSource(RTC_ClockSource_et RTC_ClockSource_e)
{
		RCC.RCC_BDCR.RTCSEL=RTC_ClockSource_e;
}
void RCC_ct::RCC_vSetRTC_HSE_Prescaler(RTC_HSE_Prescaler_et RTC_HSE_Prescaler_et)
{
		RCC.RCC_CFGR.RTCPRE	=RTC_HSE_Prescaler_et;
}/*the clock source for RTC is HSE clock*/
void RCC_ct::RCC_vSetMCO1_ClockSource(MCO1_ClockSource_et MCO1_ClockSource_e)
{
		RCC.RCC_CFGR.MCO1=MCO1_ClockSource_e;
}
void RCC_ct::RCC_vSetMCO2_ClockSource(MCO2_ClockSource_et MCO2_ClockSource_e)
{
		RCC.RCC_CFGR.MCO2=MCO2_ClockSource_e;
}
void RCC_ct::RCC_vSetMCO1_Prescaler(MCO_Prescaler_et MCO_Prescaler_e)
{
		RCC.RCC_CFGR.MCO1PRE=MCO_Prescaler_e;
}
void RCC_ct::RCC_vSetMCO2_Prescaler(MCO_Prescaler_et MCO_Prescaler_e)
{
		RCC.RCC_CFGR.MCO2PRE=MCO_Prescaler_e;
}
void RCC_ct::RCC_vSetI2S_ClockSource(I2S_ClockSource_et I2S_ClockSource_e)
{
		RCC.RCC_CFGR.I2SSRC=I2S_ClockSource_e;
}
void RCC_ct::RCC_vSetMainPLL_And_PLLI2S_ClockSource(MainPLL_And_PLLI2S_ClockSource_et MainPLL_And_PLLI2S_ClockSource_e)
{
		RCC.RCC_PLLCFGR.PLLSRC=MainPLL_And_PLLI2S_ClockSource_e;
}
void RCC_ct::RCC_vClrClockSecuritySystemInterruptFlag(void)
{
	RCC.RCC_CIR.CSSC=1;
}
uint8_kt RCC_ct::RCC_u8ReadClockSecuritySystemInterruptFlag(void)
{
	return RCC.RCC_CIR.CSSF;
}
void RCC_ct::RCC_vClrPLLI2S_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.PLLI2SRDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadPLLI2S_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.PLLI2SRDYF;
}
void RCC_ct::RCC_vClrMainPLL_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.PLLRDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadMainPLL_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.PLLRDYF;
}
void RCC_ct::RCC_vClrHSE_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.HSERDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadHSE_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.HSERDYF;
}
void RCC_ct::RCC_vClrHSI_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.HSIRDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadHSI_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.HSIRDYF;
}
void RCC_ct::RCC_vClrLSE_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.LSERDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadLSE_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.LSERDYF;
}
uint8_kt RCC_ct::RCC_u8ReadLSE_ReadyClockFlag(void) /*to use this API you have to enable backup domain access from PWR prepheral*/
{
	return RCC.RCC_BDCR.LSERDY;
}
uint8_kt RCC_ct::RCC_u8ReadHSE_ReadyClockFlag(void)
{
	return RCC.RCC_CR.HSERDY;
}
void RCC_ct::RCC_vClrLSI_ReadyInterruptFlag(void)
{
	RCC.RCC_CIR.LSIRDYC=1;
}
uint8_kt RCC_ct::RCC_u8ReadLSI_ReadyInterruptFlag(void)
{
	return RCC.RCC_CIR.LSERDYF;
}
uint8_kt RCC_ct::RCC_u8ReadBOR_POR_PDR_ResetFlag(void)
{
	return RCC.RCC_CSR.BORRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadPOR_PDR_ResetFlag(void)
{
	return RCC.RCC_CSR.PORRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadSW_ResetFlag(void)
{
	return RCC.RCC_CSR.SFTRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadIWDG_ResetFlag(void)
{
	return RCC.RCC_CSR.IWDGRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadWWDG_ResetFlag(void)
{
	return RCC.RCC_CSR.WWDGRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadLowPowerResetFlag(void)
{
	return RCC.RCC_CSR.LPWRRSTF;
}
uint8_kt RCC_ct::RCC_u8ReadPinResetFlag(void)
{
	return RCC.RCC_CSR.PINRSTF;
}
void RCC_ct::RCC_vClrAllResetFlags(void)
{
	RCC.RCC_CSR.RMVF=1;
}

uint8_kt RCC_ct::RCC_u8HSI_ClockState(void)
{
    return RCC.RCC_CR.HSION;
}
uint8_kt RCC_ct::RCC_u8HSE_ClockState(void)
{
	return RCC.RCC_CR.HSEON;
}
uint8_kt RCC_ct::RCC_u8HSE_BypassClockState(void)
{
	return RCC.RCC_CR.HSEBYP;
}
uint8_kt RCC_ct::RCC_u8LSI_ClockState(void)
{
	return RCC.RCC_CSR.LSION;
}
uint8_kt RCC_ct::RCC_u8LSE_ClockState(void)
{
	return RCC.RCC_BDCR.LSEON;
}
uint8_kt RCC_ct::RCC_u8LSE_BypassClockState(void)
{
	return RCC.RCC_BDCR.LSEBYP;
}
uint8_kt RCC_ct::RCC_u8ClockSecuritySystemState(void)
{
	return RCC.RCC_CR.CSSON;
}
uint8_kt RCC_ct::RCC_u8MainPLL_State(void)
{
	return RCC.RCC_CR.PLLON;
}
uint8_kt RCC_ct::RCC_u8PLLI2S_State(void)
{
	return RCC.RCC_CR.PLLI2SON;
}
uint8_kt RCC_ct::RCC_u8PLLI2S_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.PLLI2SRDYF;
}
uint8_kt RCC_ct::RCC_u8MainPLL_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.PLLRDYF;
}
uint8_kt RCC_ct::RCC_u8HSE_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.HSERDYF;
}
uint8_kt RCC_ct::RCC_u8HSI_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.HSIRDYF;
}
uint8_kt RCC_ct::RCC_u8LSE_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.LSERDYF;
}
uint8_kt RCC_ct::RCC_u8LSI_ReadyInterruptState(void)
{
	return RCC.RCC_CIR.LSIRDYF;
}

void RCC_ct::RCC_vResetPortA(void)
{
	 RCC.RCC_AHB1RSTR.GPIOARST=1;
	 RCC.RCC_AHB1RSTR.GPIOARST=0;
}
void RCC_ct::RCC_vResetPortB(void)
{
	RCC.RCC_AHB1RSTR.GPIOBRST=1;
	RCC.RCC_AHB1RSTR.GPIOBRST=0;
}
void RCC_ct::RCC_vResetPortC(void)
{
	RCC.RCC_AHB1RSTR.GPIOCRST=1;
    RCC.RCC_AHB1RSTR.GPIOCRST=0;
}
void RCC_ct::RCC_vResetPortD(void)
{
	RCC.RCC_AHB1RSTR.GPIODRST=1;
	RCC.RCC_AHB1RSTR.GPIODRST=0;
}
void RCC_ct::RCC_vResetPortE(void)
{
	RCC.RCC_AHB1RSTR.GPIOERST=1;
	RCC.RCC_AHB1RSTR.GPIOERST=0;	
}
void RCC_ct::RCC_vResetPortH(void)
{
	RCC.RCC_AHB1RSTR.GPIOHRST=1;
	RCC.RCC_AHB1RSTR.GPIOHRST=0;
}
void RCC_ct::RCC_vResetCRC(void)
{
	RCC.RCC_AHB1RSTR.CRCRST=1;
	RCC.RCC_AHB1RSTR.CRCRST=0;
}
void RCC_ct::RCC_vResetDMA1(void)
{
	RCC.RCC_AHB1RSTR.DMA1RST=1;
	RCC.RCC_AHB1RSTR.DMA1RST=0;
}
void RCC_ct::RCC_vResetDMA2(void)
{
	RCC.RCC_AHB1RSTR.DMA2RST=1;
	RCC.RCC_AHB1RSTR.DMA2RST=0;
}
void RCC_ct::RCC_vResetOTGFS(void)
{
	RCC.RCC_AHB2RSTR.OTGFSRST=1;
	RCC.RCC_AHB2RSTR.OTGFSRST=0;
}
void RCC_ct::RCC_vResetTIM1(void)
{
	RCC.RCC_APB2RSTR.TIM1RST=1;
	RCC.RCC_APB2RSTR.TIM1RST=0;
}
void RCC_ct::RCC_vResetTIM2(void)
{
	RCC.RCC_APB1RSTR.TIM2RST=1;
	RCC.RCC_APB1RSTR.TIM2RST=0;
	
}
void RCC_ct::RCC_vResetTIM3(void)
{
	RCC.RCC_APB1RSTR.TIM3RST=1;
	RCC.RCC_APB1RSTR.TIM3RST=0;
	
}
void RCC_ct::RCC_vResetTIM4(void)
{
	RCC.RCC_APB1RSTR.TIM4RST=1;
	RCC.RCC_APB1RSTR.TIM4RST=0;
	
}
void RCC_ct::RCC_vResetTIM5(void)
{
	RCC.RCC_APB1RSTR.TIM5RST=1;
	RCC.RCC_APB1RSTR.TIM5RST=0;
}
void RCC_ct::RCC_vResetTIM9(void)
{
	RCC.RCC_APB2RSTR.TIM9RST=1;
	RCC.RCC_APB2RSTR.TIM9RST=0;
}
void RCC_ct::RCC_vResetTIM10(void)
{
	RCC.RCC_APB2RSTR.TIM10RST=1;
	RCC.RCC_APB2RSTR.TIM10RST=0;
}
void RCC_ct::RCC_vResetTIM11(void)
{
	RCC.RCC_APB2RSTR.TIM11RST=1;
	RCC.RCC_APB2RSTR.TIM11RST=0;
}
void RCC_ct::RCC_vResetWWDG(void)
{
	RCC.RCC_APB1RSTR.WWDGRST=1;
	RCC.RCC_APB1RSTR.WWDGRST=0;
}
void RCC_ct::RCC_vResetSPI1(void)
{
	RCC.RCC_APB2RSTR.SPI1RST=1;
	RCC.RCC_APB2RSTR.SPI1RST=0;
}
void RCC_ct::RCC_vResetSPI2(void)
{
	RCC.RCC_APB1RSTR.SPI2RST=1;
	RCC.RCC_APB1RSTR.SPI2RST=0;
}
void RCC_ct::RCC_vResetSPI3(void)
{
	RCC.RCC_APB1RSTR.SPI3RST=1;
	RCC.RCC_APB1RSTR.SPI3RST=0;
}
void RCC_ct::RCC_vResetSPI4(void)
{
	RCC.RCC_APB2RSTR.SPI4RST=1;
	RCC.RCC_APB2RSTR.SPI4RST=0;

}
void RCC_ct::RCC_vResetSYSCFG(void)
{
	RCC.RCC_APB2RSTR.SYSCFGRST=1;
	RCC.RCC_APB2RSTR.SYSCFGRST=0;

}
void RCC_ct::RCC_vResetUSART1(void)
{
	RCC.RCC_APB2RSTR.USART1RST=1;
	RCC.RCC_APB2RSTR.USART1RST=0;
}
void RCC_ct::RCC_vResetUSART2(void)
{
	RCC.RCC_APB1RSTR.USART2RST=1;
	RCC.RCC_APB1RSTR.USART2RST=0;
}
void RCC_ct::RCC_vResetUSART6(void)
{
	RCC.RCC_APB2RSTR.USART6RST=1;
	RCC.RCC_APB2RSTR.USART6RST=0;
}
void RCC_ct::RCC_vResetI2C1(void)
{
	RCC.RCC_APB1RSTR.I2C1RST=1;
	RCC.RCC_APB1RSTR.I2C1RST=0;
}
void RCC_ct::RCC_vResetI2C2(void)
{
	RCC.RCC_APB1RSTR.I2C2RST=1;
	RCC.RCC_APB1RSTR.I2C2RST=0;
}
void RCC_ct::RCC_vResetI2C3(void)
{
	RCC.RCC_APB1RSTR.I2C3RST=1;
	RCC.RCC_APB1RSTR.I2C3RST=0;
}
void RCC_ct::RCC_vResetPWR(void)
{
	RCC.RCC_APB1RSTR.PWRRST=1;
	RCC.RCC_APB1RSTR.PWRRST=0;
}
void RCC_ct::RCC_vResetADC1(void)
{
	RCC.RCC_APB2RSTR.ADC1RST=1;
	RCC.RCC_APB2RSTR.ADC1RST=0;
}
void RCC_ct::RCC_vResetSDIO(void)
{
	RCC.RCC_APB2RSTR.SDIORST=1;
	RCC.RCC_APB2RSTR.SDIORST=0;
}

void RCC_ct::RCC_vResetBackUpDomain(void) /*to use this API you have to enable backup domain access from PWR prepheral*/
{
	RCC.RCC_BDCR.BDRST=1;
	RCC.RCC_BDCR.BDRST=0;
}



void RCC_ct::RCC_vPortA_ClockEnable(void)
{
	 RCC.RCC_AHB1ENR.GPIOAEN=1;
}
void RCC_ct::RCC_vPortB_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.GPIOBEN=1;
}
void RCC_ct::RCC_vPortC_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.GPIOCEN=1;
}
void RCC_ct::RCC_vPortD_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.GPIODEN=1;
}
void RCC_ct::RCC_vPortE_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.GPIOEEN=1;
}
void RCC_ct::RCC_vPortH_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.GPIOHEN=1;
}
void RCC_ct::RCC_vCRC_ClockEnable(void)
{
	RCC.RCC_AHB1ENR.CRCEN=1;
}
void RCC_ct::RCC_vDMA1ClockEnable(void)
{
	RCC.RCC_AHB1ENR.DMA1EN=1;
}
void RCC_ct::RCC_vDMA2ClockEnable(void)
{
	RCC.RCC_AHB1ENR.DMA2EN=1;
}
void RCC_ct::RCC_vOTGFS_ClockEnable(void)
{
	RCC.RCC_AHB2ENR.OTGFSEN=1;
}
void RCC_ct::RCC_vTIM1ClockEnable(void)
{
	RCC.RCC_APB2ENR.TIM1EN=1;
}
void RCC_ct::RCC_vTIM2ClockEnable(void)
{
	RCC.RCC_APB1ENR.TIM2EN=1;
}
void RCC_ct::RCC_vTIM3ClockEnable(void)
{
	RCC.RCC_APB1ENR.TIM3EN=1;
}
void RCC_ct::RCC_vTIM4ClockEnable(void)
{
	RCC.RCC_APB1ENR.TIM4EN=1;
}
void RCC_ct::RCC_vTIM5ClockEnable(void)
{
	RCC.RCC_APB1ENR.TIM5EN=1;
}
void RCC_ct::RCC_vTIM9ClockEnable(void)
{
	RCC.RCC_APB2ENR.TIM9EN=1;
}
void RCC_ct::RCC_vTIM10ClockEnable(void)
{
	RCC.RCC_APB2ENR.TIM10EN=1;
}
void RCC_ct::RCC_vTIM11ClockEnable(void)
{
	RCC.RCC_APB2ENR.TIM11EN=1;
}
void RCC_ct::RCC_vWWDG_ClockEnable(void)
{
	RCC.RCC_APB1ENR.WWDGEN=1;
}
void RCC_ct::RCC_vSPI1ClockEnable(void)
{
	RCC.RCC_APB2ENR.SPI1EN=1;
}
void RCC_ct::RCC_vSPI2ClockEnable(void)
{
	RCC.RCC_APB1ENR.SPI2EN=1;
}
void RCC_ct::RCC_vSPI3ClockEnable(void)
{
	RCC.RCC_APB1ENR.SPI3EN=1;
}
void RCC_ct::RCC_vSPI4ClockEnable(void)
{
	RCC.RCC_APB2ENR.SPI4EN=1;
}
void RCC_ct::RCC_vSYSCFG_ClockEnable(void)
{
	RCC.RCC_APB2ENR.SYSCFGEN=1;
}
void RCC_ct::RCC_vUSART1ClockEnable(void)
{
	RCC.RCC_APB2ENR.USART1EN=1;
}
void RCC_ct::RCC_vUSART2ClockEnable(void)
{
	RCC.RCC_APB1ENR.USART2EN=1;
}
void RCC_ct::RCC_vUSART6ClockEnable(void)
{
	RCC.RCC_APB2ENR.USART6EN=1;
}
void RCC_ct::RCC_vI2C1ClockEnable(void)
{
	RCC.RCC_APB1ENR.I2C1EN=1;
}
void RCC_ct::RCC_vI2C2ClockEnable(void)
{
	RCC.RCC_APB1ENR.I2C2EN=1;
}
void RCC_ct::RCC_vI2C3ClockEnable(void)
{
	RCC.RCC_APB1ENR.I2C3EN=1;
}
void RCC_ct::RCC_vPWR_ClockEnable(void)
{
	RCC.RCC_APB1ENR.PWREN=1;
}
void RCC_ct::RCC_vADC1ClockEnable(void)
{
	RCC.RCC_APB2ENR.ADC1EN=1;
}
void RCC_ct::RCC_vSDIO_ClockEnable(void)
{
	RCC.RCC_APB2ENR.SDIOEN=1;
}

void RCC_ct::RCC_vPortA_ClockDisable(void)
{
	 RCC.RCC_AHB1ENR.GPIOAEN=0;
}
void RCC_ct::RCC_vPortB_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.GPIOBEN=0;
}
void RCC_ct::RCC_vPortC_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.GPIOCEN=0;
}
void RCC_ct::RCC_vPortD_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.GPIODEN=0;
}
void RCC_ct::RCC_vPortE_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.GPIOEEN=0;
}
void RCC_ct::RCC_vPortH_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.GPIOHEN=0;
}
void RCC_ct::RCC_vCRC_ClockDisable(void)
{
	RCC.RCC_AHB1ENR.CRCEN=0;
}
void RCC_ct::RCC_vDMA1ClockDisable(void)
{
	RCC.RCC_AHB1ENR.DMA1EN=0;
}
void RCC_ct::RCC_vDMA2ClockDisable(void)
{
	RCC.RCC_AHB1ENR.DMA2EN=0;
}
void RCC_ct::RCC_vOTGFS_ClockDisable(void)
{
	RCC.RCC_AHB2ENR.OTGFSEN=0;

}
void RCC_ct::RCC_vTIM1ClockDisable(void)
{
	RCC.RCC_APB2ENR.TIM1EN=0;
}
void RCC_ct::RCC_vTIM2ClockDisable(void)
{
	RCC.RCC_APB1ENR.TIM2EN=0;
}
void RCC_ct::RCC_vTIM3ClockDisable(void)
{
	RCC.RCC_APB1ENR.TIM3EN=0;
}
void RCC_ct::RCC_vTIM4ClockDisable(void)
{
	RCC.RCC_APB1ENR.TIM4EN=0;
}
void RCC_ct::RCC_vTIM5ClockDisable(void)
{
	RCC.RCC_APB1ENR.TIM5EN=0;
}
void RCC_ct::RCC_vTIM9ClockDisable(void)
{
	RCC.RCC_APB2ENR.TIM9EN=0;
}
void RCC_ct::RCC_vTIM10ClockDisable(void)
{
	RCC.RCC_APB2ENR.TIM10EN=0;
}
void RCC_ct::RCC_vTIM11ClockDisable(void)
{
	RCC.RCC_APB2ENR.TIM11EN=0;
}
void RCC_ct::RCC_vWWDG_ClockDisable(void)
{
	RCC.RCC_APB1ENR.WWDGEN=0;
}
void RCC_ct::RCC_vSPI1ClockDisable(void)
{
	RCC.RCC_APB2ENR.SPI1EN=0;
}
void RCC_ct::RCC_vSPI2ClockDisable(void)
{
	RCC.RCC_APB1ENR.SPI2EN=0;
}
void RCC_ct::RCC_vSPI3ClockDisable(void)
{
	RCC.RCC_APB1ENR.SPI3EN=0;
}
void RCC_ct::RCC_vSPI4ClockDisable(void)
{
	RCC.RCC_APB2ENR.SPI4EN=0;
}
void RCC_ct::RCC_vSYSCFG_ClockDisable(void)
{
	RCC.RCC_APB2ENR.SYSCFGEN=0;
}
void RCC_ct::RCC_vUSART1ClockDisable(void)
{
	RCC.RCC_APB2ENR.USART1EN=0;
}
void RCC_ct::RCC_vUSART2ClockDisable(void)
{
	RCC.RCC_APB1ENR.USART2EN=0;
}
void RCC_ct::RCC_vUSART6ClockDisable(void)
{
	RCC.RCC_APB2ENR.USART6EN=0;
}
void RCC_ct::RCC_vI2C1ClockDisable(void)
{
	RCC.RCC_APB1ENR.I2C1EN=0;
}
void RCC_ct::RCC_vI2C2ClockDisable(void)
{
	RCC.RCC_APB1ENR.I2C2EN=0;
}
void RCC_ct::RCC_vI2C3ClockDisable(void)
{
	RCC.RCC_APB1ENR.I2C3EN=0;
}
void RCC_ct::RCC_vPWR_ClockDisable(void)
{
	RCC.RCC_APB1ENR.PWREN=0;
}
void RCC_ct::RCC_vADC1ClockDisable(void)
{
	RCC.RCC_APB2ENR.ADC1EN=0;
}
void RCC_ct::RCC_vSDIO_ClockDisable(void)
{
	RCC.RCC_APB2ENR.SDIOEN=0;
}
void RCC_ct::RCC_vPortA_InLowPowerModeClockEnable(void)
{
	 RCC.RCC_AHB1LPENR.GPIOALPEN=1;
}
void RCC_ct::RCC_vPortB_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.GPIOBLPEN=1;
}
void RCC_ct::RCC_vPortC_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.GPIOCLPEN=1;
}
void RCC_ct::RCC_vPortD_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.GPIODLPEN=1;
}
void RCC_ct::RCC_vPortE_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.GPIOELPEN=1;
}
void RCC_ct::RCC_vPortH_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.GPIOHLPEN=1;
}
void RCC_ct::RCC_vCRC_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.CRCLPEN=1;
}
void RCC_ct::RCC_vDMA1InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.DMA1LPEN=1;
}
void RCC_ct::RCC_vDMA2InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB1LPENR.DMA2LPEN=1;
}
void RCC_ct::RCC_vOTGFS_InLowPowerModeClockEnable(void)
{
	RCC.RCC_AHB2LPENR.OTGFSLPEN=1;
}
void RCC_ct::RCC_vTIM1InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.TIM1LPEN=1;
}
void RCC_ct::RCC_vTIM2InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.TIM2LPEN=1;
}
void RCC_ct::RCC_vTIM3InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.TIM3LPEN=1;
}
void RCC_ct::RCC_vTIM4InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.TIM4LPEN=1;
}
void RCC_ct::RCC_vTIM5InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.TIM5LPEN=1;
}
void RCC_ct::RCC_vTIM9InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.TIM9LPEN=1;
}
void RCC_ct::RCC_vTIM10InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.TIM10LPEN=1;
}
void RCC_ct::RCC_vTIM11InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.TIM11LPEN=1;
}
void RCC_ct::RCC_vWWDG_InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.WWDGLPEN=1;
}
void RCC_ct::RCC_vSPI1InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.SPI1LPEN=1;
}
void RCC_ct::RCC_vSPI2InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.SPI2LPEN=1;
}
void RCC_ct::RCC_vSPI3InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.SPI3LPEN=1;
}
void RCC_ct::RCC_vSPI4InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.SPI4LPEN=1;
}
void RCC_ct::RCC_vSYSCFG_InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.SYSCFGLPEN=1;
}
void RCC_ct::RCC_vUSART1InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.USART1LPEN=1;
}
void RCC_ct::RCC_vUSART2InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.USART2LPEN=1;
}
void RCC_ct::RCC_vUSART6InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.USART6LPEN=1;
}
void RCC_ct::RCC_vI2C1InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.I2C1LPEN=1;
}
void RCC_ct::RCC_vI2C2InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.I2C2LPEN=1;
}
void RCC_ct::RCC_vI2C3InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.I2C3LPEN=1;
}
void RCC_ct::RCC_vPWR_InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB1LPENR.PWRLPEN=1;
}
void RCC_ct::RCC_vADC1InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.ADC1LPEN=1;
}
void RCC_ct::RCC_vSDIO_InLowPowerModeClockEnable(void)
{
	RCC.RCC_APB2LPENR.SDIOLPEN=1;
}
void RCC_ct::RCC_vPortA_InLowPowerModeClockDisable(void)
{
	 RCC.RCC_AHB1LPENR.GPIOALPEN=0;
}
void RCC_ct::RCC_vPortB_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.GPIOBLPEN=0;
}
void RCC_ct::RCC_vPortC_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.GPIOCLPEN=0;
}
void RCC_ct::RCC_vPortD_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.GPIODLPEN=0;
}
void RCC_ct::RCC_vPortE_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.GPIOELPEN=0;
}
void RCC_ct::RCC_vPortH_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.GPIOHLPEN=0;
}
void RCC_ct::RCC_vCRC_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.CRCLPEN=0;
}
void RCC_ct::RCC_vDMA1InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.DMA1LPEN=0;
}
void RCC_ct::RCC_vDMA2InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB1LPENR.DMA2LPEN=0;
}
void RCC_ct::RCC_vOTGFS_InLowPowerModeClockDisable(void)
{
	RCC.RCC_AHB2LPENR.OTGFSLPEN=0;
}
void RCC_ct::RCC_vTIM1InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.TIM1LPEN=0;
}
void RCC_ct::RCC_vTIM2InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.TIM2LPEN=0;
}
void RCC_ct::RCC_vTIM3InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.TIM3LPEN=0;
}
void RCC_ct::RCC_vTIM4InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.TIM4LPEN=0;
}
void RCC_ct::RCC_vTIM5InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.TIM5LPEN=0;
}
void RCC_ct::RCC_vTIM9InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.TIM9LPEN=0;
}
void RCC_ct::RCC_vTIM10InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.TIM10LPEN=0;
}
void RCC_ct::RCC_vTIM11InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.TIM11LPEN=0;
}
void RCC_ct::RCC_vWWDG_InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.WWDGLPEN=0;
}
void RCC_ct::RCC_vSPI1InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.SPI1LPEN=0;
}
void RCC_ct::RCC_vSPI2InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.SPI2LPEN=0;
}
void RCC_ct::RCC_vSPI3InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.SPI3LPEN=0;
}
void RCC_ct::RCC_vSPI4InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.SPI4LPEN=0;
}
void RCC_ct::RCC_vSYSCFG_InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.SYSCFGLPEN=0;
}
void RCC_ct::RCC_vUSART1InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.USART1LPEN=0;
}
void RCC_ct::RCC_vUSART2InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.USART2LPEN=0;
}
void RCC_ct::RCC_vUSART6InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.USART6LPEN=0;
}
void RCC_ct::RCC_vI2C1InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.I2C1LPEN=0;
}
void RCC_ct::RCC_vI2C2InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.I2C2LPEN=0;
}
void RCC_ct::RCC_vI2C3InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.I2C3LPEN=0;
}
void RCC_ct::RCC_vPWR_InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB1LPENR.PWRLPEN=0;
}
void RCC_ct::RCC_vADC1InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.ADC1LPEN=0;
}
void RCC_ct::RCC_vSDIO_InLowPowerModeClockDisable(void)
{
	RCC.RCC_APB2LPENR.SDIOLPEN=0;
}
#if(Clock_SECURITY_SYSTEM_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetClockSecuritySystemCallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_ClockSecuritySystem_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(LSE_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetLSE_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_LSE_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(LSI_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetLSI_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_LSI_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(HSE_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetHSE_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_HSE_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(HSI_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetHSI_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_HSI_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(MAIN_PLL_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetMainPLL_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_MainPLL_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif
#if(PLLI2S_CALLBACK_STATE==RCC__STATE___ENABLE)
ErrorStatus_et RCC_ct::RCC_enuSetPLLI2S_CallBack(pf pfCallback)
{
	ErrorStatus_et ErrorStatus_e=EOK;
	if(pfCallback!=NULL_PTR)
	{
		RCC_PLLI2S_ReadyCallBack=pfCallback;
	}
	else
	{
		ErrorStatus_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatus_e;
}
#endif


extern "C" void  RCC_Handler(void)
{
#if(Clock_SECURITY_SYSTEM_CALLBACK_STATE==RCC__STATE___ENABLE)
	if(RCC.RCC_CIR.CSSF)
		{
			if(RCC_ClockSecuritySystem_ReadyCallBack!=NULL_PTR)
			{

				(*RCC_ClockSecuritySystem_ReadyCallBack)();

			}
		}
#endif
#if(LSE_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.LSERDYF)
		{
			if(RCC_LSE_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_LSE_ReadyCallBack)();
			}
		}
#endif
#if(LSI_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.LSIRDYF)
		{
			if(RCC_LSI_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_LSI_ReadyCallBack)();
			}
		}
#endif
#if(HSE_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.HSERDYF)
		{
			if(RCC_HSE_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_HSE_ReadyCallBack)();
			}
		}
#endif
#if(HSI_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.HSIRDYF)
		{
			if(RCC_HSI_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_HSI_ReadyCallBack)();
			}
		}
#endif
#if(MAIN_PLL_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.PLLRDYF)
		{
			if(RCC_MainPLL_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_MainPLL_ReadyCallBack)();
			}
		}
#endif
#if(PLLI2S_CALLBACK_STATE==RCC__STATE___ENABLE)
		if(RCC.RCC_CIR.PLLI2SRDYF)
		{
			if(RCC_PLLI2S_ReadyCallBack!=NULL_PTR)
			{
				(*RCC_PLLI2S_ReadyCallBack)();
			}
		}
#endif



}

