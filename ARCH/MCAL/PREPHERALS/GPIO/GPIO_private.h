/**************************************/
/* Description : GPIO private h File  */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 03:13:44  11 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt MODER0:2;
		uint32_kt MODER1:2;
		uint32_kt MODER2:2;
		uint32_kt MODER3:2;
		uint32_kt MODER4:2;
		uint32_kt MODER5:2;
		uint32_kt MODER6:2;
		uint32_kt MODER7:2;
		uint32_kt MODER8:2;
		uint32_kt MODER9:2;
		uint32_kt MODER10:2;
		uint32_kt MODER11:2;
		uint32_kt MODER12:2;
		uint32_kt MODER13:2;
		uint32_kt MODER14:2;
		uint32_kt MODER15:2;
	};
	struct{
		uint32_kt MODER0_0:1;
		uint32_kt MODER0_1:1;
		uint32_kt MODER1_0:1;
		uint32_kt MODER1_1:1;
		uint32_kt MODER2_0:1;
		uint32_kt MODER2_1:1;
		uint32_kt MODER3_0:1;
		uint32_kt MODER3_1:1;
		uint32_kt MODER4_0:1;
		uint32_kt MODER4_1:1;
		uint32_kt MODER5_0:1;
		uint32_kt MODER5_1:1;
		uint32_kt MODER6_0:1;
		uint32_kt MODER6_1:1;
		uint32_kt MODER7_0:1;
		uint32_kt MODER7_1:1;
		uint32_kt MODER8_0:1;
		uint32_kt MODER8_1:1;
		uint32_kt MODER9_0:1;
		uint32_kt MODER9_1:1;
		uint32_kt MODER10_0:1;
		uint32_kt MODER10_1:1;
		uint32_kt MODER11_0:1;
		uint32_kt MODER11_1:1;
		uint32_kt MODER12_0:1;
		uint32_kt MODER12_1:1;
		uint32_kt MODER13_0:1;
		uint32_kt MODER13_1:1;
		uint32_kt MODER14_0:1;
		uint32_kt MODER14_1:1;
		uint32_kt MODER15_0:1;
		uint32_kt MODER15_1:1;
		
	};
}GPIOx_MODER_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt OT0:1;
		uint32_kt OT1:1;
		uint32_kt OT2:1;
		uint32_kt OT3:1;
		uint32_kt OT4:1;
		uint32_kt OT5:1;
		uint32_kt OT6:1;
		uint32_kt OT7:1;
		uint32_kt OT8:1;
		uint32_kt OT9:1;
		uint32_kt OT10:1;
		uint32_kt OT11:1;
		uint32_kt OT12:1;
		uint32_kt OT13:1;
		uint32_kt OT14:1;
		uint32_kt OT15:1;
	};
}GPIOx_OTYPER_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt OSPEEDR0:2;
		uint32_kt OSPEEDR1:2;
		uint32_kt OSPEEDR2:2;
		uint32_kt OSPEEDR3:2;
		uint32_kt OSPEEDR4:2;
		uint32_kt OSPEEDR5:2;
		uint32_kt OSPEEDR6:2;
		uint32_kt OSPEEDR7:2;
		uint32_kt OSPEEDR8:2;
		uint32_kt OSPEEDR9:2;
		uint32_kt OSPEEDR10:2;
		uint32_kt OSPEEDR11:2;
		uint32_kt OSPEEDR12:2;
		uint32_kt OSPEEDR13:2;
		uint32_kt OSPEEDR14:2;
		uint32_kt OSPEEDR15:2;
	};
	struct{
		uint32_kt OSPEEDR0_0:1;
		uint32_kt OSPEEDR0_1:1;
		uint32_kt OSPEEDR1_0:1;
		uint32_kt OSPEEDR1_1:1;
		uint32_kt OSPEEDR2_0:1;
		uint32_kt OSPEEDR2_1:1;
		uint32_kt OSPEEDR3_0:1;
		uint32_kt OSPEEDR3_1:1;
		uint32_kt OSPEEDR4_0:1;
		uint32_kt OSPEEDR4_1:1;
		uint32_kt OSPEEDR5_0:1;
		uint32_kt OSPEEDR5_1:1;
		uint32_kt OSPEEDR6_0:1;
		uint32_kt OSPEEDR6_1:1;
		uint32_kt OSPEEDR7_0:1;
		uint32_kt OSPEEDR7_1:1;
		uint32_kt OSPEEDR8_0:1;
		uint32_kt OSPEEDR8_1:1;
		uint32_kt OSPEEDR9_0:1;
		uint32_kt OSPEEDR9_1:1;
		uint32_kt OSPEEDR10_0:1;
		uint32_kt OSPEEDR10_1:1;
		uint32_kt OSPEEDR11_0:1;
		uint32_kt OSPEEDR11_1:1;
		uint32_kt OSPEEDR12_0:1;
		uint32_kt OSPEEDR12_1:1;
		uint32_kt OSPEEDR13_0:1;
		uint32_kt OSPEEDR13_1:1;
		uint32_kt OSPEEDR14_0:1;
		uint32_kt OSPEEDR14_1:1;
		uint32_kt OSPEEDR15_0:1;
		uint32_kt OSPEEDR15_1:1;
	};
}GPIOx_OSPEEDR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt PUPDR0:2;
		uint32_kt PUPDR1:2;
		uint32_kt PUPDR2:2;
		uint32_kt PUPDR3:2;
		uint32_kt PUPDR4:2;
		uint32_kt PUPDR5:2;
		uint32_kt PUPDR6:2;
		uint32_kt PUPDR7:2;
		uint32_kt PUPDR8:2;
		uint32_kt PUPDR9:2;
		uint32_kt PUPDR10:2;
		uint32_kt PUPDR11:2;
		uint32_kt PUPDR12:2;
		uint32_kt PUPDR13:2;
		uint32_kt PUPDR14:2;
		uint32_kt PUPDR15:2;
	};
	struct{
		uint32_kt PUPDR0_0:1;
		uint32_kt PUPDR0_1:1;
		uint32_kt PUPDR1_0:1;
		uint32_kt PUPDR1_1:1;
		uint32_kt PUPDR2_0:1;
		uint32_kt PUPDR2_1:1;
		uint32_kt PUPDR3_0:1;
		uint32_kt PUPDR3_1:1;
		uint32_kt PUPDR4_0:1;
		uint32_kt PUPDR4_1:1;
		uint32_kt PUPDR5_0:1;
		uint32_kt PUPDR5_1:1;
		uint32_kt PUPDR6_0:1;
		uint32_kt PUPDR6_1:1;
		uint32_kt PUPDR7_0:1;
		uint32_kt PUPDR7_1:1;
		uint32_kt PUPDR8_0:1;
		uint32_kt PUPDR8_1:1;
		uint32_kt PUPDR9_0:1;
		uint32_kt PUPDR9_1:1;
		uint32_kt PUPDR10_0:1;
		uint32_kt PUPDR10_1:1;
		uint32_kt PUPDR11_0:1;
		uint32_kt PUPDR11_1:1;
		uint32_kt PUPDR12_0:1;
		uint32_kt PUPDR12_1:1;
		uint32_kt PUPDR13_0:1;
		uint32_kt PUPDR13_1:1;
		uint32_kt PUPDR14_0:1;
		uint32_kt PUPDR14_1:1;
		uint32_kt PUPDR15_0:1;
		uint32_kt PUPDR15_1:1;
	};
}GPIOx_PUPDR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt IDR0:1;
		uint32_kt IDR1:1;
		uint32_kt IDR2:1;
		uint32_kt IDR3:1;
		uint32_kt IDR4:1;
		uint32_kt IDR5:1;
		uint32_kt IDR6:1;
		uint32_kt IDR7:1;
		uint32_kt IDR8:1;
		uint32_kt IDR9:1;
		uint32_kt IDR10:1;
		uint32_kt IDR11:1;
		uint32_kt IDR12:1;
		uint32_kt IDR13:1;
		uint32_kt IDR14:1;
		uint32_kt IDR15:1;
	};
}GPIOx_IDR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt ODR0:1;
		uint32_kt ODR1:1;
		uint32_kt ODR2:1;
		uint32_kt ODR3:1;
		uint32_kt ODR4:1;
		uint32_kt ODR5:1;
		uint32_kt ODR6:1;
		uint32_kt ODR7:1;
		uint32_kt ODR8:1;
		uint32_kt ODR9:1;
		uint32_kt ODR10:1;
		uint32_kt ODR11:1;
		uint32_kt ODR12:1;
		uint32_kt ODR13:1;
		uint32_kt ODR14:1;
		uint32_kt ODR15:1;
	};
}GPIOx_ODR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt BS0:1;
		uint32_kt BS1:1;
		uint32_kt BS2:1;
		uint32_kt BS3:1;
		uint32_kt BS4:1;
		uint32_kt BS5:1;
		uint32_kt BS6:1;
		uint32_kt BS7:1;
		uint32_kt BS8:1;
		uint32_kt BS9:1;
		uint32_kt BS10:1;
		uint32_kt BS11:1;
		uint32_kt BS12:1;
		uint32_kt BS13:1;
		uint32_kt BS14:1;
		uint32_kt BS15:1;
		uint32_kt BR0:1;
		uint32_kt BR1:1;
		uint32_kt BR2:1;
		uint32_kt BR3:1;
		uint32_kt BR4:1;
		uint32_kt BR5:1;
		uint32_kt BR6:1;
		uint32_kt BR7:1;
		uint32_kt BR8:1;
		uint32_kt BR9:1;
		uint32_kt BR10:1;
		uint32_kt BR11:1;
		uint32_kt BR12:1;
		uint32_kt BR13:1;
		uint32_kt BR14:1;
		uint32_kt BR15:1;
	};
}GPIOx_BSRR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt LCK0:1;
		uint32_kt LCK1:1;
		uint32_kt LCK2:1;
		uint32_kt LCK3:1;
		uint32_kt LCK4:1;
		uint32_kt LCK5:1;
		uint32_kt LCK6:1;
		uint32_kt LCK7:1;
		uint32_kt LCK8:1;
		uint32_kt LCK9:1;
		uint32_kt LCK10:1;
		uint32_kt LCK11:1;
		uint32_kt LCK12:1;
		uint32_kt LCK13:1;
		uint32_kt LCK14:1;
		uint32_kt LCK15:1;
		uint32_kt LCKK:1;
	};
}GPIOx_LCKR_ut;

typedef union{
	uint64_kt DATA;
	struct{
		uint32_kt AFRL;
		uint32_kt AFRH;
	};
		struct{
		uint64_kt AFRL0:4;
		uint64_kt AFRL1:4;
		uint64_kt AFRL2:4;
		uint64_kt AFRL3:4;
		uint64_kt AFRL4:4;
		uint64_kt AFRL5:4;
		uint64_kt AFRL6:4;
		uint64_kt AFRL7:4;
		uint64_kt AFRH0:4;
		uint64_kt AFRH1:4;
		uint64_kt AFRH2:4;
		uint64_kt AFRH3:4;
		uint64_kt AFRH4:4;
		uint64_kt AFRH5:4;
		uint64_kt AFRH6:4;
		uint64_kt AFRH7:4;
	};
	struct{
		uint64_kt AFR0:4;
		uint64_kt AFR1:4;
		uint64_kt AFR2:4;
		uint64_kt AFR3:4;
		uint64_kt AFR4:4;
		uint64_kt AFR5:4;
		uint64_kt AFR6:4;
		uint64_kt AFR7:4;
		uint64_kt AFR8:4;
		uint64_kt AFR9:4;
		uint64_kt AFR10:4;
		uint64_kt AFR11:4;
		uint64_kt AFR12:4;
		uint64_kt AFR13:4;
		uint64_kt AFR14:4;
		uint64_kt AFR15:4;
	};
	struct{
		uint64_kt AFRL0_0:1;
		uint64_kt AFRL0_1:1;
		uint64_kt AFRL0_2:1;
		uint64_kt AFRL0_3:1;
		uint64_kt AFRL1_0:1;
		uint64_kt AFRL1_1:1;
		uint64_kt AFRL1_2:1;
		uint64_kt AFRL1_3:1;
		uint64_kt AFRL2_0:1;
		uint64_kt AFRL2_1:1;
		uint64_kt AFRL2_2:1;
		uint64_kt AFRL2_3:1;
		uint64_kt AFRL3_0:1;
		uint64_kt AFRL3_1:1;
		uint64_kt AFRL3_2:1;
		uint64_kt AFRL3_3:1;
		uint64_kt AFRL4_0:1;
		uint64_kt AFRL4_1:1;
		uint64_kt AFRL4_2:1;
		uint64_kt AFRL4_3:1;
		uint64_kt AFRL5_0:1;
		uint64_kt AFRL5_1:1;
		uint64_kt AFRL5_2:1;
		uint64_kt AFRL5_3:1;
		uint64_kt AFRL6_0:1;
		uint64_kt AFRL6_1:1;
		uint64_kt AFRL6_2:1;
		uint64_kt AFRL6_3:1;
		uint64_kt AFRL7_0:1;
		uint64_kt AFRL7_1:1;
		uint64_kt AFRL7_2:1;
		uint64_kt AFRL7_3:1;
		uint64_kt AFRH0_0:1;
		uint64_kt AFRH0_1:1;
		uint64_kt AFRH0_2:1;
		uint64_kt AFRH0_3:1;
		uint64_kt AFRH1_0:1;
		uint64_kt AFRH1_1:1;
		uint64_kt AFRH1_2:1;
		uint64_kt AFRH1_3:1;
		uint64_kt AFRH2_0:1;
		uint64_kt AFRH2_1:1;
		uint64_kt AFRH2_2:1;
		uint64_kt AFRH2_3:1;
		uint64_kt AFRH3_0:1;
		uint64_kt AFRH3_1:1;
		uint64_kt AFRH3_2:1;
		uint64_kt AFRH3_3:1;
		uint64_kt AFRH4_0:1;
		uint64_kt AFRH4_1:1;
		uint64_kt AFRH4_2:1;
		uint64_kt AFRH4_3:1;
		uint64_kt AFRH5_0:1;
		uint64_kt AFRH5_1:1;
		uint64_kt AFRH5_2:1;
		uint64_kt AFRH5_3:1;
		uint64_kt AFRH6_0:1;
		uint64_kt AFRH6_1:1;
		uint64_kt AFRH6_2:1;
		uint64_kt AFRH6_3:1;
		uint64_kt AFRH7_0:1;
		uint64_kt AFRH7_1:1;
		uint64_kt AFRH7_2:1;
		uint64_kt AFRH7_3:1;
	};
	struct{
			uint64_kt AFR0_0:1;
			uint64_kt AFR0_1:1;
			uint64_kt AFR0_2:1;
			uint64_kt AFR0_3:1;
			uint64_kt AFR1_0:1;
			uint64_kt AFR1_1:1;
			uint64_kt AFR1_2:1;
			uint64_kt AFR1_3:1;
			uint64_kt AFR2_0:1;
			uint64_kt AFR2_1:1;
			uint64_kt AFR2_2:1;
			uint64_kt AFR2_3:1;
			uint64_kt AFR3_0:1;
			uint64_kt AFR3_1:1;
			uint64_kt AFR3_2:1;
			uint64_kt AFR3_3:1;
			uint64_kt AFR4_0:1;
			uint64_kt AFR4_1:1;
			uint64_kt AFR4_2:1;
			uint64_kt AFR4_3:1;
			uint64_kt AFR5_0:1;
			uint64_kt AFR5_1:1;
			uint64_kt AFR5_2:1;
			uint64_kt AFR5_3:1;
			uint64_kt AFR6_0:1;
			uint64_kt AFR6_1:1;
			uint64_kt AFR6_2:1;
			uint64_kt AFR6_3:1;
			uint64_kt AFR7_0:1;
			uint64_kt AFR7_1:1;
			uint64_kt AFR7_2:1;
			uint64_kt AFR7_3:1;
			uint64_kt AFR8_0:1;
			uint64_kt AFR8_1:1;
			uint64_kt AFR8_2:1;
			uint64_kt AFR8_3:1;
			uint64_kt AFR9_0:1;
			uint64_kt AFR9_1:1;
			uint64_kt AFR9_2:1;
			uint64_kt AFR9_3:1;
			uint64_kt AFR10_0:1;
			uint64_kt AFR10_1:1;
			uint64_kt AFR10_2:1;
			uint64_kt AFR10_3:1;
			uint64_kt AFR11_0:1;
			uint64_kt AFR11_1:1;
			uint64_kt AFR11_2:1;
			uint64_kt AFR11_3:1;
			uint64_kt AFR12_0:1;
			uint64_kt AFR12_1:1;
			uint64_kt AFR12_2:1;
			uint64_kt AFR12_3:1;
			uint64_kt AFR13_0:1;
			uint64_kt AFR13_1:1;
			uint64_kt AFR13_2:1;
			uint64_kt AFR13_3:1;
			uint64_kt AFR14_0:1;
			uint64_kt AFR14_1:1;
			uint64_kt AFR14_2:1;
			uint64_kt AFR14_3:1;
			uint64_kt AFR15_0:1;
			uint64_kt AFR15_1:1;
			uint64_kt AFR15_2:1;
			uint64_kt AFR15_3:1;
		};
}GPIOx_AFR_ut;

typedef struct{
	GPIOx_MODER_ut GPIOx_MODER;
	GPIOx_OTYPER_ut GPIOx_OTYPER;
	GPIOx_OSPEEDR_ut GPIOx_OSPEEDR;
	GPIOx_PUPDR_ut GPIOx_PUPDR;
	GPIOx_IDR_ut GPIOx_IDR;
	GPIOx_ODR_ut GPIOx_ODR;
	GPIOx_BSRR_ut GPIOx_BSRR;
	GPIOx_LCKR_ut GPIOx_LCKR;
	GPIOx_AFR_ut GPIOx_AFR;
}GPIOx_st;

typedef struct{
	GPIOx_st GPIOA;
	uint32_kt RESERVED0[246];
	GPIOx_st GPIOB;
	uint32_kt RESERVED1[246];
	GPIOx_st GPIOC;
	uint32_kt RESERVED2[246];
	GPIOx_st GPIOD;
	uint32_kt RESERVED3[246];
	GPIOx_st GPIOE;
	uint32_kt RESERVED4[768];
	GPIOx_st GPIOH;
}GPIO_st;

#define GPIO (*(volatile GPIO_st*)(0x40020000))

ErrorStatus_et DetectMultipleOccurance(uint8_kt au8Arr[],uint8_kt u8LengthCpy);

/*bit banding*/

/*REGISTERS*/
 enum{
	GPIO__REG___MODER       ,
	GPIO__REG___OTYPER      ,
	GPIO__REG___OSPEEDR     ,
	GPIO__REG___PUPDR       ,
	GPIO__REG___IDR         ,
	GPIO__REG___ODR         ,
	GPIO__REG___BSRR        ,
	GPIO__REG___LCKR        ,
	GPIO__REG___AFRL        ,
	GPIO__REG___AFRH
};

#define GPIO_BIT_BAND_ALIAS(PORT,REG,BIT) (*(volatile uint8_kt*)(0x42000000+(0x20000+0x400*(PORT)+4*(REG))*32+4*(BIT)))
/*REG banding*/
#define GPIO_REG_BAND_ALIAS(PORT,REG) (*(volatile uint32_kt*)(0x40020000+(0x400*(PORT))+4*(REG)))
#endif
