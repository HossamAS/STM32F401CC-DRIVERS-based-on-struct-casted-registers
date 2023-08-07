/**************************************/
/* Description : RCC private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 04:05:35  04 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

typedef union {
	uint32_kt DATA;
	struct{
	uint32_kt :3;
    uint32_kt HSITRIM:5;
    uint32_kt HSICAL:8;
	};
	struct{
		uint32_kt HSION:1;
		uint32_kt HSIRDY:1;
		uint32_kt :1;
		uint32_kt HSITRIM0:1;
		uint32_kt HSITRIM1:1;
		uint32_kt HSITRIM2:1;
		uint32_kt HSITRIM3:1;
		uint32_kt HSITRIM4:1;
		uint32_kt HSICAL0:1;
		uint32_kt HSICAL1:1;
		uint32_kt HSICAL2:1;
		uint32_kt HSICAL3:1;
		uint32_kt HSICAL4:1;
		uint32_kt HSICAL5:1;
		uint32_kt HSICAL6:1;
		uint32_kt HSICAL7:1;
		uint32_kt HSEON:1;
		uint32_kt HSERDY:1;
		uint32_kt HSEBYP:1;
		uint32_kt CSSON:1;
		uint32_kt :4;
		uint32_kt PLLON:1;
		uint32_kt PLLRDY:1;
		uint32_kt PLLI2SON:1;
		uint32_kt PLLI2SRDY:1;
	};
}RCC_CR_ut;

typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt PLLM:6;
		uint32_kt PLLN:9;
		uint32_kt :1;
		uint32_kt PLLP:2;
		uint32_kt :6;
		uint32_kt PLLQ:4;
	};
	struct{
		uint32_kt PLLM0:1;
		uint32_kt PLLM1:1;
		uint32_kt PLLM2:1;
		uint32_kt PLLM3:1;
		uint32_kt PLLM4:1;
		uint32_kt PLLM5:1;
		uint32_kt PLLN0:1;
		uint32_kt PLLN1:1;
		uint32_kt PLLN2:1;
		uint32_kt PLLN3:1;
		uint32_kt PLLN4:1;
		uint32_kt PLLN5:1;
		uint32_kt PLLN6:1;
		uint32_kt PLLN7:1;
		uint32_kt PLLN8:1;
		uint32_kt :1;
		uint32_kt PLLP0:1;
		uint32_kt PLLP1:1;
		uint32_kt :4;
		uint32_kt PLLSRC:1;
		uint32_kt :1;
		uint32_kt PLLQ0:1;
		uint32_kt PLLQ1:1;
		uint32_kt PLLQ2:1;
		uint32_kt PLLQ3:1;
	};
}RCC_PLLCFGR_ut;

typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt SW:2;
		uint32_kt SWS:2;
		uint32_kt HPRE:4;
		uint32_kt :2;
		uint32_kt PPRE1:3;
		uint32_kt PPRE2:3;
		uint32_kt RTCPRE:5;
		uint32_kt MCO1:2;
		uint32_kt :1;
		uint32_kt MCO1PRE:3;
		uint32_kt MCO2PRE:3;
		uint32_kt MCO2:2;
	};
	struct{
		uint32_kt SW0:1;
		uint32_kt SW1:1;
		uint32_kt SWS0:1;
		uint32_kt SWS1:1;
		uint32_kt HPRE0:1;
		uint32_kt HPRE1:1;
		uint32_kt HPRE2:1;
		uint32_kt HPRE3:1;
		uint32_kt :2;
		uint32_kt PPRE10:1;
		uint32_kt PPRE11:1;
		uint32_kt PPRE12:1;
		uint32_kt PPRE20:1;
		uint32_kt PPRE21:1;
		uint32_kt PPRE22:1;
		uint32_kt RTCPRE0:1;
		uint32_kt RTCPRE1:1;
		uint32_kt RTCPRE2:1;
		uint32_kt RTCPRE3:1;
		uint32_kt RTCPRE4:1;
		uint32_kt MCO10:1;
		uint32_kt MCO11:1;
		uint32_kt I2SSRC:1;
		uint32_kt MCO1PRE0:1;
		uint32_kt MCO1PRE1:1;
		uint32_kt MCO1PRE2:1;
		uint32_kt MCO2PRE0:1;
		uint32_kt MCO2PRE1:1;
		uint32_kt MCO2PRE2:1;
		uint32_kt MCO20:1;
		uint32_kt MCO21:1;
	};
}RCC_CFGR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt LSIRDYF:1;
		uint32_kt LSERDYF:1;
		uint32_kt HSIRDYF:1;
		uint32_kt HSERDYF:1;
		uint32_kt PLLRDYF:1;
		uint32_kt PLLI2SRDYF:1;
		uint32_kt :1;
		uint32_kt CSSF:1;
		uint32_kt LSIRDYIE:1;
		uint32_kt LSERDYIE:1;
		uint32_kt HSIRDYIE:1;
		uint32_kt HSERDYIE:1;
		uint32_kt PLLRDYIE:1;
		uint32_kt PLLI2SRDYIE:1;
		uint32_kt :2;
		uint32_kt LSIRDYC:1;
		uint32_kt LSERDYC:1;
		uint32_kt HSIRDYC:1;
		uint32_kt HSERDYC:1;
		uint32_kt PLLRDYC:1;
		uint32_kt PLLI2SRDYC:1;
		uint32_kt :1;
		uint32_kt CSSC:1;	
	};
}RCC_CIR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt GPIOARST:1;
		uint32_kt GPIOBRST:1;
		uint32_kt GPIOCRST:1;
		uint32_kt GPIODRST:1;
		uint32_kt GPIOERST:1;
		uint32_kt :2;
		uint32_kt GPIOHRST:1;
		uint32_kt :4;
		uint32_kt CRCRST:1;
		uint32_kt :8;
		uint32_kt DMA1RST:1;
		uint32_kt DMA2RST:1;
	};
}RCC_AHB1RSTR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt :7;
		uint32_kt OTGFSRST:1;
	};
}RCC_AHB2RSTR_ut;

typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM2RST:1;
		uint32_kt TIM3RST:1;
		uint32_kt TIM4RST:1;
		uint32_kt TIM5RST:1;
		uint32_kt :7;
		uint32_kt WWDGRST:1;
		uint32_kt :2;
		uint32_kt SPI2RST:1;
		uint32_kt SPI3RST:1;
		uint32_kt :1;
		uint32_kt USART2RST:1;
		uint32_kt :3;
		uint32_kt I2C1RST:1;
		uint32_kt I2C2RST:1;
		uint32_kt I2C3RST:1;
		uint32_kt :4;
		uint32_kt PWRRST:1;
	};
}RCC_APB1RSTR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM1RST:1;
		uint32_kt :3;
		uint32_kt USART1RST:1;
		uint32_kt USART6RST:1;
		uint32_kt :2;
		uint32_kt ADC1RST:1;
		uint32_kt :2;
		uint32_kt SDIORST:1;
		uint32_kt SPI1RST:1;
		uint32_kt SPI4RST:1;
		uint32_kt SYSCFGRST:1;
		uint32_kt :1;
		uint32_kt TIM9RST:1;
		uint32_kt TIM10RST:1;
		uint32_kt TIM11RST:1;
	};
}RCC_APB2RSTR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt GPIOAEN:1;
		uint32_kt GPIOBEN:1;
		uint32_kt GPIOCEN:1;
		uint32_kt GPIODEN:1;
		uint32_kt GPIOEEN:1;
		uint32_kt :2;
		uint32_kt GPIOHEN:1;
		uint32_kt :4;
		uint32_kt CRCEN:1;
		uint32_kt :8;
		uint32_kt DMA1EN:1;
		uint32_kt DMA2EN:1;
		
	};
}RCC_AHB1ENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt :7;
		uint32_kt OTGFSEN:1;
	};
}RCC_AHB2ENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM2EN:1;
		uint32_kt TIM3EN:1;
		uint32_kt TIM4EN:1;
		uint32_kt TIM5EN:1;
		uint32_kt :7;
		uint32_kt WWDGEN:1;
		uint32_kt :2;
		uint32_kt SPI2EN:1;
		uint32_kt SPI3EN:1;
		uint32_kt :1;
		uint32_kt USART2EN:1;
		uint32_kt :3;
		uint32_kt I2C1EN:1;
		uint32_kt I2C2EN:1;
		uint32_kt I2C3EN:1;
		uint32_kt :4;
		uint32_kt PWREN:1;
	};
}RCC_APB1ENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM1EN:1;
		uint32_kt :3;
		uint32_kt USART1EN:1;
		uint32_kt USART6EN:1;
		uint32_kt :2;
		uint32_kt ADC1EN:1;
		uint32_kt :2;
		uint32_kt SDIOEN:1;
		uint32_kt SPI1EN:1;
		uint32_kt SPI4EN:1;
		uint32_kt SYSCFGEN:1;
		uint32_kt :1;
		uint32_kt TIM9EN:1;
		uint32_kt TIM10EN:1;
		uint32_kt TIM11EN:1;
	};
}RCC_APB2ENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt GPIOALPEN:1;
		uint32_kt GPIOBLPEN:1;
		uint32_kt GPIOCLPEN:1;
		uint32_kt GPIODLPEN:1;
		uint32_kt GPIOELPEN:1;
		uint32_kt :2;
		uint32_kt GPIOHLPEN:1;
		uint32_kt :4;
		uint32_kt CRCLPEN:1;
		uint32_kt :2;
		uint32_kt FLITFLPEN:1;
		uint32_kt SRAM1LPEN:1;
		uint32_kt :4;
		uint32_kt DMA1LPEN:1;
		uint32_kt DMA2LPEN:1;
	};
}RCC_AHB1LPENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt :7;
		uint32_kt OTGFSLPEN:1;
	};
}RCC_AHB2LPENR_ut;

typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM2LPEN:1;
		uint32_kt TIM3LPEN:1;
		uint32_kt TIM4LPEN:1;
		uint32_kt TIM5LPEN:1;
		uint32_kt :7;
		uint32_kt WWDGLPEN:1;
		uint32_kt :2;
		uint32_kt SPI2LPEN:1;
		uint32_kt SPI3LPEN:1;
		uint32_kt :1;
		uint32_kt USART2LPEN:1;
		uint32_kt :3;
		uint32_kt I2C1LPEN:1;
		uint32_kt I2C2LPEN:1;
		uint32_kt I2C3LPEN:1;
		uint32_kt :4;
		uint32_kt PWRLPEN:1;
	};
}RCC_APB1LPENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt TIM1LPEN:1;
		uint32_kt :3;
		uint32_kt USART1LPEN:1;
		uint32_kt USART6LPEN:1;
		uint32_kt :2;
		uint32_kt ADC1LPEN:1;
		uint32_kt :2;
		uint32_kt SDIOLPEN:1;
		uint32_kt SPI1LPEN:1;
		uint32_kt SPI4LPEN:1;
		uint32_kt SYSCFGLPEN:1;
		uint32_kt :1;
		uint32_kt TIM9LPEN:1;
		uint32_kt TIM10LPEN:1;
		uint32_kt TIM11LPEN:1;
	};
}RCC_APB2LPENR_ut;
typedef union {
	uint32_kt DATA;
	struct{
      uint32_kt :8;
	  uint32_kt RTCSEL:2;
	};
	struct{
		uint32_kt LSEON:1;
		uint32_kt LSERDY:1;
		uint32_kt LSEBYP:1;
		uint32_kt :5;
		uint32_kt RTCSEL0:1;
		uint32_kt RTCSEL1:1;
		uint32_kt :5;
		uint32_kt RTCEN:1;
		uint32_kt BDRST:1;
	};
}RCC_BDCR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt LSION:1;
		uint32_kt LSIRDY:1;
		uint32_kt :22;
		uint32_kt RMVF:1;
		uint32_kt BORRSTF:1;
		uint32_kt PINRSTF:1;
		uint32_kt PORRSTF:1;
		uint32_kt SFTRSTF:1;
		uint32_kt IWDGRSTF:1;
		uint32_kt WWDGRSTF:1;
		uint32_kt LPWRRSTF:1;
	};
}RCC_CSR_ut;
typedef union {
	uint32_kt DATA;
	struct{
      uint32_kt MODPER:14;
	  uint32_kt INCSTEP:14;
	};
	struct{
		uint32_kt MODPER0:1;
		uint32_kt MODPER1:1;
		uint32_kt MODPER2:1;
		uint32_kt MODPER3:1;
		uint32_kt MODPER4:1;
		uint32_kt MODPER5:1;
		uint32_kt MODPER6:1;
		uint32_kt MODPER7:1;
		uint32_kt MODPER8:1;
		uint32_kt MODPER9:1;
		uint32_kt MODPER10:1;
		uint32_kt MODPER11:1;
		uint32_kt MODPER12:1;
		uint32_kt MODPER13:1;
		uint32_kt INCSTEP0:1;
		uint32_kt INCSTEP1:1;
		uint32_kt INCSTEP2:1;
		uint32_kt INCSTEP3:1;
		uint32_kt INCSTEP4:1;
		uint32_kt INCSTEP5:1;
		uint32_kt INCSTEP6:1;
		uint32_kt INCSTEP7:1;
		uint32_kt INCSTEP8:1;
		uint32_kt INCSTEP9:1;
		uint32_kt INCSTEP10:1;
		uint32_kt INCSTEP11:1;
		uint32_kt INCSTEP12:1;
		uint32_kt INCSTEP13:1;
		uint32_kt :2;
		uint32_kt SPREADSEL:1;
		uint32_kt SSCGEN:1;
		
	};
}RCC_SSCGR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt :6;
		uint32_kt PLLI2SNx:9;
		uint32_kt :13;
		uint32_kt PLLI2SRx:3;
	};
	struct{
		uint32_kt :6;
		uint32_kt PLLI2SNx0:1;
		uint32_kt PLLI2SNx1:1;
		uint32_kt PLLI2SNx2:1;
		uint32_kt PLLI2SNx3:1;
		uint32_kt PLLI2SNx4:1;
		uint32_kt PLLI2SNx5:1;
		uint32_kt PLLI2SNx6:1;
		uint32_kt PLLI2SNx7:1;
		uint32_kt PLLI2SNx8:1;
		uint32_kt :13;
		uint32_kt PLLI2SRx0:1;
		uint32_kt PLLI2SRx1:1;
		uint32_kt PLLI2SRx2:1;
	};
}RCC_PLLI2SCFGR_ut;
typedef union {
	uint32_kt DATA;
	struct{
		uint32_kt :24;
		uint32_kt TIMPRE:1;
	};
}RCC_DCKCFGR_ut;

typedef struct{

	RCC_CR_ut RCC_CR;
	RCC_PLLCFGR_ut RCC_PLLCFGR;
	RCC_CFGR_ut RCC_CFGR;
	RCC_CIR_ut RCC_CIR;
	RCC_AHB1RSTR_ut RCC_AHB1RSTR;
	RCC_AHB2RSTR_ut RCC_AHB2RSTR;
	uint64_kt :64;
	RCC_APB1RSTR_ut RCC_APB1RSTR;
	RCC_APB2RSTR_ut RCC_APB2RSTR;
	uint64_kt :64;
	RCC_AHB1ENR_ut RCC_AHB1ENR;
	RCC_AHB2ENR_ut RCC_AHB2ENR;
	uint64_kt :64;
	RCC_APB1ENR_ut RCC_APB1ENR;
	RCC_APB2ENR_ut RCC_APB2ENR;
	uint64_kt :64;
	RCC_AHB1LPENR_ut RCC_AHB1LPENR;
	RCC_AHB2LPENR_ut RCC_AHB2LPENR;
	uint64_kt :64;
	RCC_APB1LPENR_ut RCC_APB1LPENR;
	RCC_APB2LPENR_ut RCC_APB2LPENR;
	uint64_kt :64;
	RCC_BDCR_ut RCC_BDCR;
	RCC_CSR_ut RCC_CSR;
	uint64_kt :64;
	RCC_SSCGR_ut RCC_SSCGR;
	RCC_PLLI2SCFGR_ut RCC_PLLI2SCFGR;
	uint32_kt :32;
	RCC_DCKCFGR_ut RCC_DCKCFGR;

}RCC_st;

#define RCC (*(volatile RCC_st*)(0x40023800))
extern pf RCC_LSI_ReadyCallBack;
extern pf RCC_LSE_ReadyCallBack;
extern pf RCC_HSI_ReadyCallBack;
extern pf RCC_HSE_ReadyCallBack;
extern pf RCC_MainPLL_ReadyCallBack;
extern pf RCC_PLLI2S_ReadyCallBack;
extern pf RCC_ClockSecuritySystem_ReadyCallBack;
#endif
