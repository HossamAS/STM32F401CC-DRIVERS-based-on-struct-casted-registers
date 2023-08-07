/**************************************/
/* Description : SCB private h File   */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 10:55:45  25 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef SCB_PRIVATE_H
#define SCB_PRIVATE_H


typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt DISMCYCINT:1;
		uint32_kt DISDEFWBUF:1;
		uint32_kt DISFOLD:1;
		uint32_kt :5;
		uint32_kt DISFPCA:1;
		uint32_kt DISOOFP:1;

	};

}ACTLR_ut;
typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt REVISION:3;
		uint32_kt PARTNO:12;
		uint32_kt CONSTANT:4;
		uint32_kt VARIANT:4;
		uint32_kt IMPLEMENTER:8;
	};
	struct{
		uint32_kt REVISION0:1;
		uint32_kt REVISION1:1;
		uint32_kt REVISION2:1;
		uint32_kt PARTNO0:1;
		uint32_kt PARTNO1:1;
		uint32_kt PARTNO2:1;
		uint32_kt PARTNO3:1;
		uint32_kt PARTNO4:1;
		uint32_kt PARTNO5:1;
		uint32_kt PARTNO6:1;
		uint32_kt PARTNO7:1;
		uint32_kt PARTNO8:1;
		uint32_kt PARTNO9:1;
		uint32_kt PARTNO10:1;
		uint32_kt PARTNO11:1;
		uint32_kt CONSTANT0:1;
		uint32_kt CONSTANT1:1;
		uint32_kt CONSTANT2:1;
		uint32_kt CONSTANT3:1;
		uint32_kt VARIANT0:1;
		uint32_kt VARIANT1:1;
		uint32_kt VARIANT2:1;
		uint32_kt VARIANT3:1;
		uint32_kt IMPLEMENTER0:1;
		uint32_kt IMPLEMENTER1:1;
		uint32_kt IMPLEMENTER2:1;
		uint32_kt IMPLEMENTER3:1;
		uint32_kt IMPLEMENTER4:1;
		uint32_kt IMPLEMENTER5:1;
		uint32_kt IMPLEMENTER6:1;
		uint32_kt IMPLEMENTER7:1;

	};

}CPUID_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt VECTACTIVE:9;
		uint32_kt :3;
		uint32_kt VECTPENDING:7;
	};
	struct{
		uint32_kt VECTACTIVE0:1;
		uint32_kt VECTACTIVE1:1;
		uint32_kt VECTACTIVE2:1;
		uint32_kt VECTACTIVE3:1;
		uint32_kt VECTACTIVE4:1;
		uint32_kt VECTACTIVE5:1;
		uint32_kt VECTACTIVE6:1;
		uint32_kt VECTACTIVE7:1;
		uint32_kt VECTACTIVE8:1;
		uint32_kt :2;
		uint32_kt RETOBASE:1;
		uint32_kt VECTPENDING0:1;
		uint32_kt VECTPENDING1:1;
		uint32_kt VECTPENDING2:1;
		uint32_kt VECTPENDING3:1;
		uint32_kt VECTPENDING4:1;
		uint32_kt VECTPENDING5:1;
		uint32_kt VECTPENDING6:1;
		uint32_kt :3;
		uint32_kt ISRPENDING:1;
		uint32_kt :2;
		uint32_kt PENDSTCLR:1;
		uint32_kt PENDSTSET:1;
		uint32_kt PENDSVCLR:1;
		uint32_kt PENDSVSET:1;
		uint32_kt :2;
		uint32_kt NMIPENDSET:1;
	};

}ICSR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :9;
		uint32_kt TBLOFF:21;
	};
	struct{
		uint32_kt :9;
		uint32_kt TBLOFF0:1;
		uint32_kt TBLOFF1:1;
		uint32_kt TBLOFF2:1;
		uint32_kt TBLOFF3:1;
		uint32_kt TBLOFF4:1;
		uint32_kt TBLOFF5:1;
		uint32_kt TBLOFF6:1;
		uint32_kt TBLOFF7:1;
		uint32_kt TBLOFF8:1;
		uint32_kt TBLOFF9:1;
		uint32_kt TBLOFF10:1;
		uint32_kt TBLOFF11:1;
		uint32_kt TBLOFF12:1;
		uint32_kt TBLOFF13:1;
		uint32_kt TBLOFF14:1;
		uint32_kt TBLOFF15:1;
		uint32_kt TBLOFF16:1;
		uint32_kt TBLOFF17:1;
		uint32_kt TBLOFF18:1;
		uint32_kt TBLOFF19:1;
		uint32_kt TBLOFF20:1;
		uint32_kt TBLOFF21_TBLBASE:1;

	};

}VTOR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :8;
		uint32_kt PRIGROUP:3;
		uint32_kt :5;
		uint32_kt VECTKEY:16;
	};
	struct{
		uint32_kt VECTRESET:1;
		uint32_kt VECTCLRACTIVE:1;
		uint32_kt SYSRESETREQ:1;
		uint32_kt :5;
		uint32_kt PRIGROUP0:1;
		uint32_kt PRIGROUP1:1;
		uint32_kt PRIGROUP2:1;
		uint32_kt :4;
		uint32_kt ENDIANESS:1;
		uint32_kt VECTKEY0:1;
		uint32_kt VECTKEY1:1;
		uint32_kt VECTKEY2:1;
		uint32_kt VECTKEY3:1;
		uint32_kt VECTKEY4:1;
		uint32_kt VECTKEY5:1;
		uint32_kt VECTKEY6:1;
		uint32_kt VECTKEY7:1;
		uint32_kt VECTKEY8:1;
		uint32_kt VECTKEY9:1;
		uint32_kt VECTKEY10:1;
		uint32_kt VECTKEY11:1;
		uint32_kt VECTKEY12:1;
		uint32_kt VECTKEY13:1;
		uint32_kt VECTKEY14:1;
		uint32_kt VECTKEY15:1;
	};

}AIRCR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt :1;
		uint32_kt SLEEPONEXIT:1;
		uint32_kt SLEEPDEEP:1;
		uint32_kt :1;
		uint32_kt SEVEONPEND:1;
	};

}SCR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt NONBASETHRDENA:1;
		uint32_kt USERSETMPEND:1;
		uint32_kt :1;
		uint32_kt UNALIGN_TRP:1;
		uint32_kt DIV_0_TRP:1;
		uint32_kt :3;
		uint32_kt BFHFNMIGN:1;
		uint32_kt STKALIGN:1;
	};


}CCR_ut;

typedef union{
	struct{
		uint32_kt DATA0;
		uint32_kt DATA1;
		uint32_kt DATA2;
	};
	struct{
		uint8_kt PRI_4;
		uint8_kt PRI_5;
		uint8_kt PRI_6;
	};
	struct{
		uint8_kt RESERVED0[7];
		uint8_kt PRI_11;
		uint8_kt RESERVED1[2];
		uint8_kt PRI_14;
		uint8_kt PRI_15;
	};
	struct{
		uint32_kt PRI_4_0:1;
		uint32_kt PRI_4_1:1;
		uint32_kt PRI_4_2:1;
		uint32_kt PRI_4_3:1;
		uint32_kt PRI_4_4:1;
		uint32_kt PRI_4_5:1;
		uint32_kt PRI_4_6:1;
		uint32_kt PRI_4_7:1;
		uint32_kt PRI_5_0:1;
		uint32_kt PRI_5_1:1;
		uint32_kt PRI_5_2:1;
		uint32_kt PRI_5_3:1;
		uint32_kt PRI_5_4:1;
		uint32_kt PRI_5_5:1;
		uint32_kt PRI_5_6:1;
		uint32_kt PRI_5_7:1;
		uint32_kt PRI_6_0:1;
		uint32_kt PRI_6_1:1;
		uint32_kt PRI_6_2:1;
		uint32_kt PRI_6_3:1;
		uint32_kt PRI_6_4:1;
		uint32_kt PRI_6_5:1;
		uint32_kt PRI_6_6:1;
		uint32_kt PRI_6_7:1;
	};
struct{
		uint8_kt RESERVED2[7];
		struct{
		uint32_kt PRI_11_0:1;
		uint32_kt PRI_11_1:1;
		uint32_kt PRI_11_2:1;
		uint32_kt PRI_11_3:1;
		uint32_kt PRI_11_4:1;
		uint32_kt PRI_11_5:1;
		uint32_kt PRI_11_6:1;
		uint32_kt PRI_11_7:1;
		};
		uint8_kt RESERVED3[2];
		struct{
		uint32_kt PRI_14_0:1;
		uint32_kt PRI_14_1:1;
		uint32_kt PRI_14_2:1;
		uint32_kt PRI_14_3:1;
		uint32_kt PRI_14_4:1;
		uint32_kt PRI_14_5:1;
		uint32_kt PRI_14_6:1;
		uint32_kt PRI_14_7:1;
		uint32_kt PRI_15_0:1;
		uint32_kt PRI_15_1:1;
		uint32_kt PRI_15_2:1;
		uint32_kt PRI_15_3:1;
		uint32_kt PRI_15_4:1;
		uint32_kt PRI_15_5:1;
		uint32_kt PRI_15_6:1;
		uint32_kt PRI_15_7:1;
		};
	};

}SHPR_ut;

typedef union{
	uint32_kt DATA;
	struct{
		uint32_kt MEMFAULTACT:1;
		uint32_kt BUSFAULTACT:1;
		uint32_kt :1;
		uint32_kt USGFAULTACT:1;
		uint32_kt :3;
		uint32_kt SVCALLACT:1;
		uint32_kt MONITORACT:1;
		uint32_kt :1;
		uint32_kt PENDSVACT:1;
		uint32_kt SYSTICKACT:1;
		uint32_kt USGFAULTPENDED:1;
		uint32_kt MEMFAULTPENDED:1;
		uint32_kt BUSFAULTPENDED:1;
		uint32_kt SVCALLPENDED:1;
		uint32_kt MEMFAULTENA:1;
		uint32_kt BUSFAULTENA:1;
		uint32_kt USGFAULTENA:1;
	};


}SHCSR_ut;

typedef union{
	uint64_kt DATA;
	struct{
		uint64_kt IACCVIOL:1;
		uint64_kt DACCVIOL:1;
		uint64_kt :1;
		uint64_kt MUNSTKERR:1;
		uint64_kt MSTKERR:1;
		uint64_kt MLSPERR:1;
		uint64_kt :1;
		uint64_kt MMARVALID:1;
		uint64_kt IBUSERR:1;
		uint64_kt PRECISERR:1;
		uint64_kt IMPRECISERR:1;
		uint64_kt UNSTKERR:1;
		uint64_kt STKERR:1;
		uint64_kt LSPERR:1;
		uint64_kt :1;
		uint64_kt BFARVALID:1;
		uint64_kt UNDEFINSTR:1;
		uint64_kt INVSTATE:1;
		uint64_kt INVPC:1;
		uint64_kt NOCP:1;
		uint64_kt :4;
		uint64_kt UNALIGNED:1;
		uint64_kt DIVBYZERO:1;
		uint64_kt :1;
		uint64_kt VECTTBL:1;
		uint64_kt :28;
		uint64_kt FORCED:1;
		uint64_kt DEBUG_VT:1;

	};


}CFSR_ut;

typedef struct{
	ACTLR_ut ACTLR;
	uint8_kt RESERVED[3320];
	CPUID_ut CPUID;
	ICSR_ut ICSR;
	VTOR_ut VTOR;
	AIRCR_ut AIRCR;
	SCR_ut SCR;
	CCR_ut CCR;
	SHPR_ut SHPR;
	SHCSR_ut SHCSR;
	CFSR_ut CFSR;
	uint32_ut MMAR;
	uint32_ut  BFAR;
	uint32_ut  AFSR;
}SCB_st;


#define SCB (*(volatile SCB_st*)(0xE000E008))

extern pf pfMemoryManagementFaultExceptionCallBack;
extern pf pfBusFaultExceptionCallBack;
extern pf pfUsageFaultExceptionCallBack;
extern pf pfDebugMonitorExceptionCallBack;
extern pf pfPendSV_ExceptionCallBack;
extern pf pfNMI_ExceptionCallBack;
extern pf pfHardFaultExceptionCallBack;

#endif
