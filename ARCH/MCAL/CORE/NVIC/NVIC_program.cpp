/**************************************/
/* Description : NVIC program File    */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 23:50:49  29 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../../LIB/STD_MACROS/STD_MACROS.h"
#include "NVIC_interface.h"
#include "NVIC_config.h"
#include "NVIC_private.h"



NVIC_ct::NVIC_ct(void)
{
	NVIC.NVIC_ISER.DATA0=WWDG_INTERRUPT_INITIAL_STATE|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<1|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<2|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<3|
						 EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_STATE<<4|
						 EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_STATE<<5|
						 FLASH_INTERRUPT_INITIAL_STATE<<6|
						 RCC_INTERRUPT_INITIAL_STATE<<7|
						 EXTI0_INTERRUPT_INITIAL_STATE<<8|
						 EXTI1_INTERRUPT_INITIAL_STATE<<9|
						 EXTI2_INTERRUPT_INITIAL_STATE<<10|
						 EXTI3_INTERRUPT_INITIAL_STATE<<11|
						 EXTI4_INTERRUPT_INITIAL_STATE<<12|
						 DMA1_Stream0_INTERRUPT_INITIAL_STATE<<13|
						 DMA1_Stream1_INTERRUPT_INITIAL_STATE<<14|
						 DMA1_Stream2_INTERRUPT_INITIAL_STATE<<15|
						 DMA1_Stream3_INTERRUPT_INITIAL_STATE<<16|
						 DMA1_Stream4_INTERRUPT_INITIAL_STATE<<17|
						 DMA1_Stream5_INTERRUPT_INITIAL_STATE<<18|
						 DMA1_Stream6_INTERRUPT_INITIAL_STATE<<19|
						 ADC_INTERRUPT_INITIAL_STATE<<20|
						 EXTI9_5_INTERRUPT_INITIAL_STATE<<21|
						 TIM1_BRK_TIM9_INTERRUPT_INITIAL_STATE<<22|
						 TIM1_UP_TIM10_INTERRUPT_INITIAL_STATE<<23|
						 TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_STATE<<24|
						 TIM1_CC_INTERRUPT_INITIAL_STATE<<25|
						 TIM2_INTERRUPT_INITIAL_STATE<<26|
						 TIM3_INTERRUPT_INITIAL_STATE<<27|
						 TIM4_INTERRUPT_INITIAL_STATE<<28|
						 I2C1_EV_INTERRUPT_INITIAL_STATE<<29|
						 I2C1_ER_INTERRUPT_INITIAL_STATE<<30|
						 I2C2_EV_INTERRUPT_INITIAL_STATE<<31;
	
	NVIC.NVIC_ISER.DATA1=I2C2_ER_INTERRUPT_INITIAL_STATE|
						 SPI1_INTERRUPT_INITIAL_STATE<<1|
						 SPI2_INTERRUPT_INITIAL_STATE<<2|
						 USART1_INTERRUPT_INITIAL_STATE<<3|
						 USART2_INTERRUPT_INITIAL_STATE<<4|
						 EXTI15_10_INTERRUPT_INITIAL_STATE<<5|
						 EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_STATE<<6|
						 EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_STATE<<7|
						 DMA1_Stream7_INTERRUPT_INITIAL_STATE<<8|
						 SDIO_INTERRUPT_INITIAL_STATE<<9|
						 TIM5_INTERRUPT_INITIAL_STATE<<10|
						 SPI3_INTERRUPT_INITIAL_STATE<<11|
						 DMA2_Stream0_INTERRUPT_INITIAL_STATE<<12|
						 DMA2_Stream1_INTERRUPT_INITIAL_STATE<<13|
						 DMA2_Stream2_INTERRUPT_INITIAL_STATE<<14|
						 DMA2_Stream3_INTERRUPT_INITIAL_STATE<<15|
						 DMA2_Stream4_INTERRUPT_INITIAL_STATE<<16|
						 OTG_FS_INTERRUPT_INITIAL_STATE<<17|
						 DMA2_Stream5_INTERRUPT_INITIAL_STATE<<18|
						 DMA2_Stream6_INTERRUPT_INITIAL_STATE<<19|
						 DMA2_Stream7_INTERRUPT_INITIAL_STATE<<20|
						 USART6_INTERRUPT_INITIAL_STATE<<21|
						 I2C3_EV_INTERRUPT_INITIAL_STATE<<22|
						 I2C3_ER_INTERRUPT_INITIAL_STATE<<23|
						 FPU_INTERRUPT_INITIAL_STATE<<24|
						 SPI4_INTERRUPT_INITIAL_STATE<<25;


	NVIC.NVIC_ICER.DATA0=~(WWDG_INTERRUPT_INITIAL_STATE|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<1|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<2|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_STATE<<3|
						 EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_STATE<<4|
						 EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_STATE<<5|
						 FLASH_INTERRUPT_INITIAL_STATE<<6|
						 RCC_INTERRUPT_INITIAL_STATE<<7|
						 EXTI0_INTERRUPT_INITIAL_STATE<<8|
						 EXTI1_INTERRUPT_INITIAL_STATE<<9|
						 EXTI2_INTERRUPT_INITIAL_STATE<<10|
						 EXTI3_INTERRUPT_INITIAL_STATE<<11|
						 EXTI4_INTERRUPT_INITIAL_STATE<<12|
						 DMA1_Stream0_INTERRUPT_INITIAL_STATE<<13|
						 DMA1_Stream1_INTERRUPT_INITIAL_STATE<<14|
						 DMA1_Stream2_INTERRUPT_INITIAL_STATE<<15|
						 DMA1_Stream3_INTERRUPT_INITIAL_STATE<<16|
						 DMA1_Stream4_INTERRUPT_INITIAL_STATE<<17|
						 DMA1_Stream5_INTERRUPT_INITIAL_STATE<<18|
						 DMA1_Stream6_INTERRUPT_INITIAL_STATE<<19|
						 ADC_INTERRUPT_INITIAL_STATE<<20|
						 EXTI9_5_INTERRUPT_INITIAL_STATE<<21|
						 TIM1_BRK_TIM9_INTERRUPT_INITIAL_STATE<<22|
						 TIM1_UP_TIM10_INTERRUPT_INITIAL_STATE<<23|
						 TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_STATE<<24|
						 TIM1_CC_INTERRUPT_INITIAL_STATE<<25|
						 TIM2_INTERRUPT_INITIAL_STATE<<26|
						 TIM3_INTERRUPT_INITIAL_STATE<<27|
						 TIM4_INTERRUPT_INITIAL_STATE<<28|
						 I2C1_EV_INTERRUPT_INITIAL_STATE<<29|
						 I2C1_ER_INTERRUPT_INITIAL_STATE<<30|
						 I2C2_EV_INTERRUPT_INITIAL_STATE<<31);

	NVIC.NVIC_ICER.DATA1=~(I2C2_ER_INTERRUPT_INITIAL_STATE|
						 SPI1_INTERRUPT_INITIAL_STATE<<1|
						 SPI2_INTERRUPT_INITIAL_STATE<<2|
						 USART1_INTERRUPT_INITIAL_STATE<<3|
						 USART2_INTERRUPT_INITIAL_STATE<<4|
						 EXTI15_10_INTERRUPT_INITIAL_STATE<<5|
						 EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_STATE<<6|
						 EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_STATE<<7|
						 DMA1_Stream7_INTERRUPT_INITIAL_STATE<<8|
						 SDIO_INTERRUPT_INITIAL_STATE<<9|
						 TIM5_INTERRUPT_INITIAL_STATE<<10|
						 SPI3_INTERRUPT_INITIAL_STATE<<11|
						 DMA2_Stream0_INTERRUPT_INITIAL_STATE<<12|
						 DMA2_Stream1_INTERRUPT_INITIAL_STATE<<13|
						 DMA2_Stream2_INTERRUPT_INITIAL_STATE<<14|
						 DMA2_Stream3_INTERRUPT_INITIAL_STATE<<15|
						 DMA2_Stream4_INTERRUPT_INITIAL_STATE<<16|
						 OTG_FS_INTERRUPT_INITIAL_STATE<<17|
						 DMA2_Stream5_INTERRUPT_INITIAL_STATE<<18|
						 DMA2_Stream6_INTERRUPT_INITIAL_STATE<<19|
						 DMA2_Stream7_INTERRUPT_INITIAL_STATE<<20|
						 USART6_INTERRUPT_INITIAL_STATE<<21|
						 I2C3_EV_INTERRUPT_INITIAL_STATE<<22|
						 I2C3_ER_INTERRUPT_INITIAL_STATE<<23|
						 FPU_INTERRUPT_INITIAL_STATE<<24|
						 SPI4_INTERRUPT_INITIAL_STATE<<25);

	NVIC.NVIC_ISPR.DATA0=WWDG_INTERRUPT_INITIAL_MODE|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_MODE<<1|
						 EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_MODE<<2|
						 EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_MODE<<3|
						 FLASH_INTERRUPT_INITIAL_MODE<<4|
						 RCC_INTERRUPT_INITIAL_MODE<<5|
						 EXTI0_INTERRUPT_INITIAL_MODE<<6|
						 EXTI1_INTERRUPT_INITIAL_MODE<<7|
						 EXTI2_INTERRUPT_INITIAL_MODE<<8|
						 EXTI3_INTERRUPT_INITIAL_MODE<<9|
						 EXTI4_INTERRUPT_INITIAL_MODE<<10|
						 DMA1_Stream0_INTERRUPT_INITIAL_MODE<<11|
						 DMA1_Stream1_INTERRUPT_INITIAL_MODE<<12|
						 DMA1_Stream2_INTERRUPT_INITIAL_MODE<<13|
						 DMA1_Stream3_INTERRUPT_INITIAL_MODE<<14|
						 DMA1_Stream4_INTERRUPT_INITIAL_MODE<<15|
						 DMA1_Stream5_INTERRUPT_INITIAL_MODE<<16|
						 DMA1_Stream6_INTERRUPT_INITIAL_MODE<<17|
						 ADC_INTERRUPT_INITIAL_MODE<<18|
						 EXTI9_5_INTERRUPT_INITIAL_MODE<<19|
						 TIM1_BRK_TIM9_INTERRUPT_INITIAL_MODE<<20|
						 TIM1_UP_TIM10_INTERRUPT_INITIAL_MODE<<21|
						 TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_MODE<<22|
						 TIM1_CC_INTERRUPT_INITIAL_MODE<<23|
						 TIM2_INTERRUPT_INITIAL_MODE<<24|
						 TIM3_INTERRUPT_INITIAL_MODE<<25|
						 TIM4_INTERRUPT_INITIAL_MODE<<26|
						 I2C1_EV_INTERRUPT_INITIAL_MODE<<27|
						 I2C1_ER_INTERRUPT_INITIAL_MODE<<28|
						 I2C2_EV_INTERRUPT_INITIAL_MODE<<29|
						 I2C2_ER_INTERRUPT_INITIAL_MODE<<30|
						 SPI1_INTERRUPT_INITIAL_MODE<<31;

	NVIC.NVIC_ISPR.DATA1=SPI2_INTERRUPT_INITIAL_MODE|
						 USART1_INTERRUPT_INITIAL_MODE<<1|
						 USART2_INTERRUPT_INITIAL_MODE<<2|
						 EXTI15_10_INTERRUPT_INITIAL_MODE<<3|
						 EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_MODE<<4|
						 EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_MODE<<5|
						 DMA1_Stream7_INTERRUPT_INITIAL_MODE<<6|
						 SDIO_INTERRUPT_INITIAL_MODE<<7|
						 TIM5_INTERRUPT_INITIAL_MODE<<8|
						 SPI3_INTERRUPT_INITIAL_MODE<<9|
						 DMA2_Stream0_INTERRUPT_INITIAL_MODE<<10|
						 DMA2_Stream1_INTERRUPT_INITIAL_MODE<<11|
						 DMA2_Stream2_INTERRUPT_INITIAL_MODE<<12|
						 DMA2_Stream3_INTERRUPT_INITIAL_MODE<<13|
						 DMA2_Stream4_INTERRUPT_INITIAL_MODE<<14|
						 OTG_FS_INTERRUPT_INITIAL_MODE<<15|
						 DMA2_Stream5_INTERRUPT_INITIAL_MODE<<16|
						 DMA2_Stream6_INTERRUPT_INITIAL_MODE<<17|
						 DMA2_Stream7_INTERRUPT_INITIAL_MODE<<18|
						 USART6_INTERRUPT_INITIAL_MODE<<19|
						 I2C3_EV_INTERRUPT_INITIAL_MODE<<20|
						 I2C3_ER_INTERRUPT_INITIAL_MODE<<21|
						 FPU_INTERRUPT_INITIAL_MODE<<22|
						 SPI4_INTERRUPT_INITIAL_MODE<<23;

	NVIC.NVIC_ICPR.DATA0=~(WWDG_INTERRUPT_INITIAL_MODE|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_MODE<<1|
						 EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_MODE<<2|
						 EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_MODE<<3|
						 FLASH_INTERRUPT_INITIAL_MODE<<4|
						 RCC_INTERRUPT_INITIAL_MODE<<5|
						 EXTI0_INTERRUPT_INITIAL_MODE<<6|
						 EXTI1_INTERRUPT_INITIAL_MODE<<7|
						 EXTI2_INTERRUPT_INITIAL_MODE<<8|
						 EXTI3_INTERRUPT_INITIAL_MODE<<9|
						 EXTI4_INTERRUPT_INITIAL_MODE<<10|
						 DMA1_Stream0_INTERRUPT_INITIAL_MODE<<11|
						 DMA1_Stream1_INTERRUPT_INITIAL_MODE<<12|
						 DMA1_Stream2_INTERRUPT_INITIAL_MODE<<13|
						 DMA1_Stream3_INTERRUPT_INITIAL_MODE<<14|
						 DMA1_Stream4_INTERRUPT_INITIAL_MODE<<15|
						 DMA1_Stream5_INTERRUPT_INITIAL_MODE<<16|
						 DMA1_Stream6_INTERRUPT_INITIAL_MODE<<17|
						 ADC_INTERRUPT_INITIAL_MODE<<18|
						 EXTI9_5_INTERRUPT_INITIAL_MODE<<19|
						 TIM1_BRK_TIM9_INTERRUPT_INITIAL_MODE<<20|
						 TIM1_UP_TIM10_INTERRUPT_INITIAL_MODE<<21|
						 TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_MODE<<22|
						 TIM1_CC_INTERRUPT_INITIAL_MODE<<23|
						 TIM2_INTERRUPT_INITIAL_MODE<<24|
						 TIM3_INTERRUPT_INITIAL_MODE<<25|
						 TIM4_INTERRUPT_INITIAL_MODE<<26|
						 I2C1_EV_INTERRUPT_INITIAL_MODE<<27|
						 I2C1_ER_INTERRUPT_INITIAL_MODE<<28|
						 I2C2_EV_INTERRUPT_INITIAL_MODE<<29|
						 I2C2_ER_INTERRUPT_INITIAL_MODE<<30|
						 SPI1_INTERRUPT_INITIAL_MODE<<31);

	NVIC.NVIC_ISPR.DATA1=~(SPI2_INTERRUPT_INITIAL_MODE|
						 USART1_INTERRUPT_INITIAL_MODE<<1|
						 USART2_INTERRUPT_INITIAL_MODE<<2|
						 EXTI15_10_INTERRUPT_INITIAL_MODE<<3|
						 EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_MODE<<4|
						 EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_MODE<<5|
						 DMA1_Stream7_INTERRUPT_INITIAL_MODE<<6|
						 SDIO_INTERRUPT_INITIAL_MODE<<7|
						 TIM5_INTERRUPT_INITIAL_MODE<<8|
						 SPI3_INTERRUPT_INITIAL_MODE<<9|
						 DMA2_Stream0_INTERRUPT_INITIAL_MODE<<10|
						 DMA2_Stream1_INTERRUPT_INITIAL_MODE<<11|
						 DMA2_Stream2_INTERRUPT_INITIAL_MODE<<12|
						 DMA2_Stream3_INTERRUPT_INITIAL_MODE<<13|
						 DMA2_Stream4_INTERRUPT_INITIAL_MODE<<14|
						 OTG_FS_INTERRUPT_INITIAL_MODE<<15|
						 DMA2_Stream5_INTERRUPT_INITIAL_MODE<<16|
						 DMA2_Stream6_INTERRUPT_INITIAL_MODE<<17|
						 DMA2_Stream7_INTERRUPT_INITIAL_MODE<<18|
						 USART6_INTERRUPT_INITIAL_MODE<<19|
						 I2C3_EV_INTERRUPT_INITIAL_MODE<<20|
						 I2C3_ER_INTERRUPT_INITIAL_MODE<<21|
						 FPU_INTERRUPT_INITIAL_MODE<<22|
						 SPI4_INTERRUPT_INITIAL_MODE<<23);

	 NVIC.NVIC_IPR.DATA0=WWDG_INTERRUPT_INITIAL_PRIORITY<<4|
						 EXTI16_OR_PVD_INTERRUPT_INITIAL_PRIORITY<<12|
						 EXTI21_OR_TAMP_STAMP_INTERRUPT_INITIAL_PRIORITY<<20|
						 EXTI22_OR_RTC_WKUP_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=FLASH_INTERRUPT_INITIAL_PRIORITY<<4|
						 RCC_INTERRUPT_INITIAL_PRIORITY<<12|
						 EXTI0_INTERRUPT_INITIAL_PRIORITY<<20|
						 EXTI1_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=EXTI2_INTERRUPT_INITIAL_PRIORITY<<4|
						 EXTI3_INTERRUPT_INITIAL_PRIORITY<<12|
						 EXTI4_INTERRUPT_INITIAL_PRIORITY<<20|
						 DMA1_Stream0_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=DMA1_Stream1_INTERRUPT_INITIAL_PRIORITY<<4|
						 DMA1_Stream2_INTERRUPT_INITIAL_PRIORITY<<12|
						 DMA1_Stream3_INTERRUPT_INITIAL_PRIORITY<<20|
						 DMA1_Stream4_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=DMA1_Stream5_INTERRUPT_INITIAL_PRIORITY<<4|
						 DMA1_Stream6_INTERRUPT_INITIAL_PRIORITY<<12|
						 ADC_INTERRUPT_INITIAL_PRIORITY<<20|
						 EXTI9_5_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=TIM1_BRK_TIM9_INTERRUPT_INITIAL_PRIORITY<<4|
						 TIM1_UP_TIM10_INTERRUPT_INITIAL_PRIORITY<<12|
						 TIM1_TRG_COM_TIM11_INTERRUPT_INITIAL_PRIORITY<<20|
						 TIM1_CC_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=TIM2_INTERRUPT_INITIAL_PRIORITY<<4|
						 TIM3_INTERRUPT_INITIAL_PRIORITY<<12|
						 TIM4_INTERRUPT_INITIAL_PRIORITY<<20|
						 I2C1_EV_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=I2C1_ER_INTERRUPT_INITIAL_PRIORITY<<4|
						 I2C2_EV_INTERRUPT_INITIAL_PRIORITY<<12|
						 I2C2_ER_INTERRUPT_INITIAL_PRIORITY<<20|
						 SPI1_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=SPI2_INTERRUPT_INITIAL_PRIORITY<<4|
						 USART1_INTERRUPT_INITIAL_PRIORITY<<12|
						 USART2_INTERRUPT_INITIAL_PRIORITY<<20|
						 EXTI15_10_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=EXTI17_OR_RTC_Alarm_INTERRUPT_INITIAL_PRIORITY<<4|
						 EXTI18_OR_OTG_FS_WKUP_INTERRUPT_INITIAL_PRIORITY<<12|
						 DMA1_Stream7_INTERRUPT_INITIAL_PRIORITY<<20|
						 SDIO_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=TIM5_INTERRUPT_INITIAL_PRIORITY<<4|
						 SPI3_INTERRUPT_INITIAL_PRIORITY<<12|
						 DMA2_Stream0_INTERRUPT_INITIAL_PRIORITY<<20|
						 DMA2_Stream1_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=DMA2_Stream2_INTERRUPT_INITIAL_PRIORITY<<4|
						 DMA2_Stream3_INTERRUPT_INITIAL_PRIORITY<<12|
						 DMA2_Stream4_INTERRUPT_INITIAL_PRIORITY<<20|
						 OTG_FS_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=DMA2_Stream5_INTERRUPT_INITIAL_PRIORITY<<4|
						 DMA2_Stream6_INTERRUPT_INITIAL_PRIORITY<<12|
						 DMA2_Stream7_INTERRUPT_INITIAL_PRIORITY<<20|
						 USART6_INTERRUPT_INITIAL_PRIORITY<<28;
						 
	 NVIC.NVIC_IPR.DATA1=I2C3_EV_INTERRUPT_INITIAL_PRIORITY<<4|
						 I2C3_ER_INTERRUPT_INITIAL_PRIORITY<<12|
						 FPU_INTERRUPT_INITIAL_PRIORITY<<20|
						 SPI4_INTERRUPT_INITIAL_PRIORITY<<28;

}

void NVIC_ct::NVIC_vSetInterruptState(InterruptSignal_et InterruptSignal_e,NVIC_State_et NVIC_State_e)
{

	NVIC_SET_INTERRUPT_STATE_REG(InterruptSignal_e,NVIC_State_e);

}


NVIC_State_et NVIC_ct::NVIC_enuReadInterruptState(InterruptSignal_et InterruptSignal_e)
{

	return (NVIC_State_et)NVIC_READ_INTERRUPT_STATE_REG(InterruptSignal_e);

}



void NVIC_ct::NVIC_vSetInterruptMode(InterruptSignal_et InterruptSignal_e,InterruptSetMode_et InterruptSetMode_e)
{

    if(InterruptSetMode_e==NVIC__INTERRUPT_SET_MODE___NOT_PENDING)
    {
    	NVIC_SET_INTERRUPT_PENDING_STATE_REG(InterruptSignal_e,NVIC__STATE___DISABLE);
    }
    else if(InterruptSetMode_e==NVIC__INTERRUPT_SET_MODE___PENDING)
    {
    	NVIC_SET_INTERRUPT_PENDING_STATE_REG(InterruptSignal_e,NVIC__STATE___ENABLE);
    }
    else if(InterruptSetMode_e==NVIC__INTERRUPT_SET_MODE___ACTIVE)
    {
    	NVIC_SET_INTERRUPT_PENDING_STATE_REG(InterruptSignal_e,NVIC__STATE___DISABLE);
    	NVIC.NVIC_STIR.DATA=InterruptSignal_e;
    }
    else
    {
    	NVIC.NVIC_STIR.DATA=InterruptSignal_e;
    	NVIC.NVIC_STIR.DATA=InterruptSignal_e;
    }


}


InterruptReadMode_et NVIC_ct::NVIC_enuReadInterruptMode(InterruptSignal_et InterruptSignal_e)
{

	return((InterruptReadMode_et)(NVIC_READ_INTERRUPT_PENDING_STATE_REG(InterruptSignal_e)|NVIC_READ_INTERRUPT_ACTIVE_STATE_REG(InterruptSignal_e)<<1));

}



ErrorStatus_et NVIC_ct::NVIC_enuSetInterruptPriority(InterruptSignal_et InterruptSignal_e,PriorityGroupAndSubgroup_et PriorityGroupAndSubgroup_e)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(((NVIC.NVIC_AIRCR.NVIC_PRIGROUP==NVIC__PRIORITY_GROUPING_STYLE___16_GROUP_1_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<=NVIC__PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_16_SUBGROUP_1))

	 ||((NVIC.NVIC_AIRCR.NVIC_PRIGROUP==NVIC__PRIORITY_GROUPING_STYLE___8_GROUP_2_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<NVIC__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=NVIC__PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((NVIC.NVIC_AIRCR.NVIC_PRIGROUP==NVIC__PRIORITY_GROUPING_STYLE___4_GROUP_4_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<NVIC__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=NVIC__PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((NVIC.NVIC_AIRCR.NVIC_PRIGROUP==NVIC__PRIORITY_GROUPING_STYLE___2_GROUP_8_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<NVIC__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
		  PriorityGroupAndSubgroup_e>=NVIC__PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

	 ||((NVIC.NVIC_AIRCR.NVIC_PRIGROUP==NVIC__PRIORITY_GROUPING_STYLE___1_GROUP_16_SUBGROUPS)&&
		( PriorityGroupAndSubgroup_e<=NVIC__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_16  &&
		  PriorityGroupAndSubgroup_e>=NVIC__PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1 )))
	{
		  NVIC_SET_INTERRUPT_PRIORITY_REG(InterruptSignal_e,PriorityGroupAndSubgroup_e%16);
	}
	else
	{
		ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatusLoc_e;
}


PriorityGroupAndSubgroup_et NVIC_ct::NVIC_enuReadInterruptPriority(InterruptSignal_et InterruptSignal_e)
{
	return ((PriorityGroupAndSubgroup_et) NVIC_READ_INTERRUPT_PRIORITY_REG(InterruptSignal_e));
}



