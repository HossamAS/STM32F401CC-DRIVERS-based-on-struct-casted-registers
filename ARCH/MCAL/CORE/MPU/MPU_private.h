/**************************************/
/* Description : MPU private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 22:06:41  23 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef MPU_PRIVATE_H
#define MPU_PRIVATE_H

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :9;
		uint32_kt DREGION:8;
		uint32_kt IREGION:8;
	};
	struct{
		uint32_kt SEPARATE:1;
		uint32_kt :8;
		uint32_kt DREGION0:1;
		uint32_kt DREGION1:1;
		uint32_kt DREGION2:1;
		uint32_kt DREGION3:1;
		uint32_kt DREGION4:1;
		uint32_kt DREGION5:1;
		uint32_kt DREGION6:1;
		uint32_kt DREGION7:1;
		uint32_kt IREGION0:1;
		uint32_kt IREGION1:1;
		uint32_kt IREGION2:1;
		uint32_kt IREGION3:1;
		uint32_kt IREGION4:1;
		uint32_kt IREGION5:1;
		uint32_kt IREGION6:1;
		uint32_kt IREGION7:1;
	};
}MPU_TYPER_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt ENABLE:1;
		uint32_kt HFNMIENA:1;
		uint32_kt PRIVDEFENA:1;
	};

}MPU_CTRL_ut;
typedef union{
	uint32_kt DATA;
	uint32_kt REGION:8;
	struct{
		uint32_kt REGION0:1;
		uint32_kt REGION1:1;
		uint32_kt REGION2:1;
		uint32_kt REGION3:1;
		uint32_kt REGION4:1;
		uint32_kt REGION5:1;
		uint32_kt REGION6:1;
		uint32_kt REGION7:1;
	};
}MPU_RNR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt REGION:3;
		uint32_kt :1;
		uint32_kt ADDR:27;
	};
	struct{
		uint32_kt REGION0:1;
		uint32_kt REGION1:1;
		uint32_kt REGION2:1;
		uint32_kt VALID:1;
		uint32_kt ADDR0:1;
		uint32_kt ADDR1:1;
		uint32_kt ADDR2:1;
		uint32_kt ADDR3:1;
		uint32_kt ADDR4:1;
		uint32_kt ADDR5:1;
		uint32_kt ADDR6:1;
		uint32_kt ADDR7:1;
		uint32_kt ADDR8:1;
		uint32_kt ADDR9:1;
		uint32_kt ADDR10:1;
		uint32_kt ADDR11:1;
		uint32_kt ADDR12:1;
		uint32_kt ADDR13:1;
		uint32_kt ADDR14:1;
		uint32_kt ADDR15:1;
		uint32_kt ADDR16:1;
		uint32_kt ADDR17:1;
		uint32_kt ADDR18:1;
		uint32_kt ADDR19:1;
		uint32_kt ADDR20:1;
		uint32_kt ADDR21:1;
		uint32_kt ADDR22:1;
		uint32_kt ADDR23:1;
		uint32_kt ADDR24:1;
		uint32_kt ADDR25:1;
		uint32_kt ADDR26:1;

	};

}MPU_RBAR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :1;
		uint32_kt SIZE:5;
		uint32_kt :2;
		uint32_kt SRD:8;
		uint32_kt :3;
		uint32_kt TEX:3;
		uint32_kt :2;
		uint32_kt AP:3;
	};
	struct{
		uint32_kt ENABLE:1;
		uint32_kt SIZE0:1;
		uint32_kt SIZE1:1;
		uint32_kt SIZE2:1;
		uint32_kt SIZE3:1;
		uint32_kt SIZE4:1;
		uint32_kt :2;
		uint32_kt SRD0:1;
		uint32_kt SRD1:1;
		uint32_kt SRD2:1;
		uint32_kt SRD3:1;
		uint32_kt SRD4:1;
		uint32_kt SRD5:1;
		uint32_kt SRD6:1;
		uint32_kt SRD7:1;
		uint32_kt B:1;
		uint32_kt C:1;
		uint32_kt S:1;
		uint32_kt TEX0:1;
		uint32_kt TEX1:1;
		uint32_kt TEX2:1;
		uint32_kt :2;
		uint32_kt AP0:1;
		uint32_kt AP1:1;
		uint32_kt AP2:1;
		uint32_kt :1;
		uint32_kt XN:1;
	};
}MPU_RASR_ut;

typedef struct
{
	MPU_TYPER_ut MPU_TYPER;
	MPU_CTRL_ut MPU_CTRL;
	MPU_RNR_ut MPU_RNR;
	MPU_RBAR_ut MPU_RBAR;
	MPU_RASR_ut MPU_RASR;
}MPU_st;

#define MPU   (*(volatile MPU_st*)(0xE000ED90))

#endif
