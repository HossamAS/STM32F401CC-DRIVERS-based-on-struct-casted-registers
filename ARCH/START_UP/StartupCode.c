#include "../../ARCH/LIB/STD_TYPES/STD_TYPES.h"
extern uint32_kt _sidata;
extern uint32_kt _sdata;
extern uint32_kt _edata;
extern uint32_kt _sbss;
extern uint32_kt _ebss;
#define _estack  0x20010000






int main(void);
void Reset_Handler(void);
void Reset_Handler(void)
{

	  uint32_kt size = ((uint32_kt)&_edata - (uint32_kt)&_sdata)/4;
	  uint32_kt *pRAM = (uint32_kt*)&_sdata;
	  uint32_kt *pFlash = (uint32_kt*)&_sidata;
	  // initialize .data section
	  for(uint32_kt i=0; i<size; i++) {
	      pRAM[i] = pFlash[i];
	  }

	  // initialize .bss section
	  size = ((uint32_kt)&_ebss - (uint32_kt)&_sbss)/4;
	  pRAM = (uint32_kt*)&_sbss;

	  for(uint32_kt i=0; i<size; i++) {
	      pRAM[i] = 0;
	  }
    main();
    while(1);
}
void Default_Handler(void);
void Default_Handler(void)
{
  while(1);
}


#define WEAK   __attribute__((weak,alias ("Default_Handler")))


void NMI_Handler(void)                WEAK;
void HardFault_Handler(void)          WEAK;
void MemManage_Handler(void)          WEAK;
void BusFault_Handler(void)           WEAK;
void UsageFault_Handler(void)         WEAK;
void SVCall_Handler(void)             WEAK;
void DebugMonitor_Handler(void)       WEAK;
void PendSV_Handler(void)             WEAK;
void Systick_Handler(void)            WEAK;
void WWDG_Handler(void)               WEAK;
void EXTI16_Handler(void)             WEAK;
void EXTI21_Handler(void)             WEAK;
void EXTI22_Handler(void)             WEAK;
void FLASH_Handler(void)              WEAK;
void RCC_Handler(void) 				  WEAK;
void EXTI0_Handler(void)              WEAK;
void EXTI1_Handler(void)              WEAK;
void EXTI2_Handler(void)              WEAK;
void EXTI3_Handler(void)              WEAK;
void EXTI4_Handler(void)              WEAK;
void DMA1_Stream0_Handler(void)       WEAK;
void DMA1_Stream1_Handler(void)       WEAK;
void DMA1_Stream2_Handler(void)       WEAK;
void DMA1_Stream3_Handler(void)       WEAK;
void DMA1_Stream4_Handler(void)       WEAK;
void DMA1_Stream5_Handler(void)       WEAK;
void DMA1_Stream6_Handler(void)       WEAK;
void ADC_Handler(void)                WEAK;
void EXTI9_5_Handler(void)            WEAK;
void TIM1_BRK_TIM9_Handler(void)      WEAK;
void TIM1_UP_TIM10_Handler(void)      WEAK;
void TIM1_TRG_COM_TIM11_Handler(void) WEAK;
void TIM1_CC_Handler(void)            WEAK;
void TIM2_Handler(void)               WEAK;
void TIM3_Handler(void)               WEAK;
void TIM4_Handler(void)               WEAK;
void I2C1_EV_Handler(void)            WEAK;
void I2C1_ER_Handler(void)            WEAK;
void I2C2_EV_Handler(void)            WEAK;
void I2C2_ER_Handler(void)            WEAK;
void SPI1_Handler(void)               WEAK;
void SPI2_Handler(void)               WEAK;
void USART1_Handler(void)             WEAK;
void USART2_Handler(void)             WEAK;
void EXTI15_10_Handler(void)          WEAK;
void EXTI17_Handler(void)             WEAK;
void EXTI18_Handler(void)             WEAK;
void DMA1_Stream7_Handler(void)       WEAK;
void SDIO_Handler(void)               WEAK;
void TIM5_Handler(void)               WEAK;
void SPI3_Handler(void)               WEAK;
void DMA2_Stream0_Handler(void)       WEAK;
void DMA2_Stream1_Handler(void)       WEAK;
void DMA2_Stream2_Handler(void)       WEAK;
void DMA2_Stream3_Handler(void)       WEAK;
void DMA2_Stream4_Handler(void)       WEAK;
void OTG_FS_Handler(void)             WEAK;
void DMA2_Stream5_Handler(void)       WEAK;
void DMA2_Stream6_Handler(void)       WEAK;
void DMA2_Stream7_Handler(void)       WEAK;
void USART6_Handler(void)             WEAK;
void I2C3_EV_Handler(void)            WEAK;
void I2C3_ER_Handler(void)            WEAK;
void FPU_Handler(void)                WEAK;
void SPI4_Handler(void)               WEAK;


uint32_kt vectors[] __attribute__((section(".isr_vector")))={
	_estack,
	(uint32_kt)Reset_Handler,
	(uint32_kt)NMI_Handler,
	(uint32_kt)HardFault_Handler,
	(uint32_kt)MemManage_Handler,
	(uint32_kt)BusFault_Handler,
	(uint32_kt)UsageFault_Handler,
	0,
	(uint32_kt)SVCall_Handler,
	(uint32_kt)DebugMonitor_Handler,
	0,
	(uint32_kt)PendSV_Handler,
	(uint32_kt)Systick_Handler,
	(uint32_kt)WWDG_Handler,
	(uint32_kt)EXTI16_Handler,
	(uint32_kt)EXTI21_Handler,
	(uint32_kt)EXTI22_Handler,
	(uint32_kt)FLASH_Handler,
	(uint32_kt)RCC_Handler,
	(uint32_kt)EXTI0_Handler,
	(uint32_kt)EXTI1_Handler,
	(uint32_kt)EXTI2_Handler,
	(uint32_kt)EXTI3_Handler,
	(uint32_kt)EXTI4_Handler,
	(uint32_kt)DMA1_Stream0_Handler,
	(uint32_kt)DMA1_Stream1_Handler,
	(uint32_kt)DMA1_Stream2_Handler,
	(uint32_kt)DMA1_Stream3_Handler,
	(uint32_kt)DMA1_Stream4_Handler,
	(uint32_kt)DMA1_Stream5_Handler,
	(uint32_kt)DMA1_Stream6_Handler,
	(uint32_kt)ADC_Handler,
	(uint32_kt)EXTI9_5_Handler,
	(uint32_kt)TIM1_BRK_TIM9_Handler,
	(uint32_kt)TIM1_UP_TIM10_Handler,
	(uint32_kt)TIM1_TRG_COM_TIM11_Handler,
	(uint32_kt)TIM1_CC_Handler,
	(uint32_kt)TIM2_Handler,
	(uint32_kt)TIM3_Handler,
	(uint32_kt)TIM4_Handler,
	(uint32_kt)I2C1_EV_Handler,
	(uint32_kt)I2C1_ER_Handler,
	(uint32_kt)I2C2_EV_Handler,
	(uint32_kt)I2C2_ER_Handler,
	(uint32_kt)SPI1_Handler,
	(uint32_kt)SPI2_Handler,
	(uint32_kt)USART1_Handler,
	(uint32_kt)USART2_Handler,
	(uint32_kt)EXTI15_10_Handler,
	(uint32_kt)EXTI17_Handler,
	(uint32_kt)EXTI18_Handler,
	(uint32_kt)DMA1_Stream7_Handler,
	(uint32_kt)SDIO_Handler,
	(uint32_kt)TIM5_Handler,
	(uint32_kt)SPI3_Handler,
	(uint32_kt)DMA2_Stream0_Handler,
	(uint32_kt)DMA2_Stream1_Handler,
	(uint32_kt)DMA2_Stream2_Handler,
	(uint32_kt)DMA2_Stream3_Handler,
	(uint32_kt)DMA2_Stream4_Handler,
	(uint32_kt)OTG_FS_Handler,
	(uint32_kt)DMA2_Stream5_Handler,
	(uint32_kt)DMA2_Stream6_Handler,
	(uint32_kt)DMA2_Stream7_Handler,
	(uint32_kt)USART6_Handler,
	(uint32_kt)I2C3_EV_Handler,
	(uint32_kt)I2C3_ER_Handler,
	(uint32_kt)FPU_Handler,
	(uint32_kt)SPI4_Handler,
};




