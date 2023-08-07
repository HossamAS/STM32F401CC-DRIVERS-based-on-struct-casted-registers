/**************************************/
/* Description : SYSCFG private h File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 17:27:32  20 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef SYSCFG_PRIVATE_H
#define SYSCFG_PRIVATE_H

typedef union{
	uint32_kt DATA;
	uint32_kt MEM_MODE:2;
	struct{
		uint32_kt MEM_MODE0:2;
		uint32_kt MEM_MODE1:2;
	};
}SYSCFG_MEMRMP_ut;

typedef union{
	uint32_kt DATA;
	struct{
	uint32_kt :16;
	uint32_kt ADC1DC2:1;
	};
}SYSCFG_PMC_ut;

typedef union{
	uint32_kt DATA1;
	uint32_kt DATA2;
	uint32_kt DATA3;
	uint32_kt DATA4;
	struct{
	uint32_kt EXTI0:4;
	uint32_kt EXTI1:4;
	uint32_kt EXTI2:4;
	uint32_kt EXTI3:4;
	};
	struct{
	uint32_kt RESERVED0;
	uint32_kt EXTI4:4;
	uint32_kt EXTI5:4;
	uint32_kt EXTI6:4;
	uint32_kt EXTI7:4;
	};
	struct{
	uint32_kt RESERVED1[2];
	uint32_kt EXTI8:4;
	uint32_kt EXTI9:4;
	uint32_kt EXTI10:4;
	uint32_kt EXTI11:4;
	};	
	struct{
	uint32_kt RESERVED2[3];
	uint32_kt EXTI12:4;
	uint32_kt EXTI13:4;
	uint32_kt EXTI14:4;
	uint32_kt EXTI15:4;
	};
}SYSCFG_EXTICR_ut;



typedef union{
	uint32_kt DATA;
	struct{
	uint32_kt CMP_PD:1;
	uint32_kt :6;
	uint32_kt READY:1;
	};
}SYSCFG_CMPCR_ut;

typedef struct{
	SYSCFG_MEMRMP_ut SYSCFG_MEMRMP;
	SYSCFG_PMC_ut SYSCFG_PMC;
	SYSCFG_EXTICR_ut SYSCFG_EXTICR;
	SYSCFG_CMPCR_ut SYSCFG_CMPCR;
}SYSCFG_st;

#define SYSCFG (*(volatile SYSCFG_st*)(0x40013800))


#endif
