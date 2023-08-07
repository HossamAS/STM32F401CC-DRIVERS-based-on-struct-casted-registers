/**************************************/
/* Description : GPIO interface File  */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 03:13:44  11 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


/***************************************options*****************************************/
/*PIN*/
typedef enum __attribute__((__packed__)){
	GPIO__PIN___A0,GPIO__PIN___A1,GPIO__PIN___A2,GPIO__PIN___A3,
	GPIO__PIN___A4,GPIO__PIN___A5,GPIO__PIN___A6,GPIO__PIN___A7,
	GPIO__PIN___A8,GPIO__PIN___A9,GPIO__PIN___A10,GPIO__PIN___A11,
	GPIO__PIN___A12,GPIO__PIN___A13,GPIO__PIN___A14,GPIO__PIN___A15,

	GPIO__PIN___B0,GPIO__PIN___B1,GPIO__PIN___B2,GPIO__PIN___B3,
	GPIO__PIN___B4,GPIO__PIN___B5,GPIO__PIN___B6,GPIO__PIN___B7,
	GPIO__PIN___B8,GPIO__PIN___B9,GPIO__PIN___B10,GPIO__PIN___B11,
	GPIO__PIN___B12,GPIO__PIN___B13,GPIO__PIN___B14,GPIO__PIN___B15,

	GPIO__PIN___C0,GPIO__PIN___C1,GPIO__PIN___C2,GPIO__PIN___C3,
	GPIO__PIN___C4,GPIO__PIN___C5,GPIO__PIN___C6,GPIO__PIN___C7,
	GPIO__PIN___C8,GPIO__PIN___C9,GPIO__PIN___C10,GPIO__PIN___C11,
	GPIO__PIN___C12,GPIO__PIN___C13,GPIO__PIN___C14,GPIO__PIN___C15,

	GPIO__PIN___D0,GPIO__PIN___D1,GPIO__PIN___D2,GPIO__PIN___D3,
	GPIO__PIN___D4,GPIO__PIN___D5,GPIO__PIN___D6,GPIO__PIN___D7,
	GPIO__PIN___D8,GPIO__PIN___D9,GPIO__PIN___D10,GPIO__PIN___D11,
	GPIO__PIN___D12,GPIO__PIN___D13,GPIO__PIN___D14,GPIO__PIN___D15,

	GPIO__PIN___E0,GPIO__PIN___E1,GPIO__PIN___E2,GPIO__PIN___E3,
	GPIO__PIN___E4,GPIO__PIN___E5,GPIO__PIN___E6,GPIO__PIN___E7,
	GPIO__PIN___E8,GPIO__PIN___E9,GPIO__PIN___E10,GPIO__PIN___E11,
	GPIO__PIN___E12,GPIO__PIN___E13,GPIO__PIN___E14,GPIO__PIN___E15,

	GPIO__PIN___H0,GPIO__PIN___H1,GPIO__PIN___H2,GPIO__PIN___H3,
	GPIO__PIN___H4,GPIO__PIN___H5,GPIO__PIN___H6,GPIO__PIN___H7,
	GPIO__PIN___H8,GPIO__PIN___H9,GPIO__PIN___H10,GPIO__PIN___H11,
	GPIO__PIN___H12,GPIO__PIN___H13,GPIO__PIN___H14,GPIO__PIN___H15,
}Pin_et;
/*PORT*/
typedef enum __attribute__((__packed__)){
	GPIO__PORT___A,
	GPIO__PORT___B,
	GPIO__PORT___C,
	GPIO__PORT___D,
	GPIO__PORT___E,
	GPIO__PORT___H=7,
}Port_et;
/*MODE*/
typedef enum __attribute__((__packed__)){
	GPIO__MODE___INPUT,
	GPIO__MODE___OUTPUT,
	GPIO__MODE___ALTERNATE_FUNCTION,
	GPIO__MODE___ANALOG
}Mode_et;
/*ATTACHMENT TYPE*/
typedef enum __attribute__((__packed__)){
	GPIO__ATTACHMENT_TYPE___FLOAT,
	GPIO__ATTACHMENT_TYPE___PULL_UP,
	GPIO__ATTACHMENT_TYPE___PULL_DOWN
}AttachmentType_et;
/*OUTPUT TYPE*/
typedef enum __attribute__((__packed__)){
	GPIO__OUTPUT_TYPE___PUSH_PULL,
	GPIO__OUTPUT_TYPE___OPEN_DRAIN,
}OutPutType_et;
/*OUTPUT SPEED*/
typedef enum __attribute__((__packed__)){
	GPIO__OUTPUT_SPEED___LOW,
	GPIO__OUTPUT_SPEED___MEDIUM,
	GPIO__OUTPUT_SPEED___HIGH,
	GPIO__OUTPUT_SPEED___VERY_HIGH
}OutPutSpeed_et;

typedef enum __attribute__((__packed__)){
	GPIO__ALTERNATE_FUNCTION___AF0,
	GPIO__ALTERNATE_FUNCTION___AF1,
	GPIO__ALTERNATE_FUNCTION___AF2,
	GPIO__ALTERNATE_FUNCTION___AF3,
	GPIO__ALTERNATE_FUNCTION___AF4,
	GPIO__ALTERNATE_FUNCTION___AF5,
	GPIO__ALTERNATE_FUNCTION___AF6,
	GPIO__ALTERNATE_FUNCTION___AF7,
	GPIO__ALTERNATE_FUNCTION___AF8,
	GPIO__ALTERNATE_FUNCTION___AF9,
	GPIO__ALTERNATE_FUNCTION___AF10,
	GPIO__ALTERNATE_FUNCTION___AF11,
	GPIO__ALTERNATE_FUNCTION___AF12,
	GPIO__ALTERNATE_FUNCTION___AF13,
	GPIO__ALTERNATE_FUNCTION___AF14,
	GPIO__ALTERNATE_FUNCTION___AF15,

}AlternateFunction_et;
/*STATE*/
typedef enum __attribute__((__packed__)){
	GPIO__LEVEL_STATE___LOW,
	GPIO__LEVEL_STATE___HIGH
}LevelState_et;
typedef enum __attribute__((__packed__)){
	GPIO__STATE___DISABLE,
	GPIO__STATE___ENABLE
}State_et;
class GPIO_ct{
	public:
/*PRE-BUILD CONFIGURATION(PRE-PROCESSING)*/
	GPIO_ct(void);
/*RUN-TIME CONFIGURATION*/


void GPIO_vSetMode(Pin_et Pin_e,Mode_et Mode_e);
ErrorStatus_et GPIO_enuSetMode(Pin_et aPin_e[],Mode_et aMode_e[],uint8_kt u8LengthCpy);

void GPIO_vSetAttachmentType(Pin_et Pin_e,AttachmentType_et AttachmentType_e);
ErrorStatus_et GPIO_enuSetAttachmentType(Pin_et aPin_e[],AttachmentType_et aAttachmentType_e[],uint8_kt u8LengthCpy);

void GPIO_vSetOutPutType(Pin_et Pin_e,OutPutType_et OutPutType_e);
ErrorStatus_et GPIO_enuSetOutPutType(Pin_et aPin_e[],OutPutType_et aOutPutType_e[],uint8_kt u8LengthCpy);

void GPIO_vSetOutPutSpeed(Pin_et Pin_e,OutPutSpeed_et OutPutSpeed_e);
ErrorStatus_et GPIO_enuSetOutPutSpeed(Pin_et aPin_e[],OutPutSpeed_et aOutPutSpeed_e[],uint8_kt u8LengthCpy);
void GPIO_vSetOutPutSpeed(Port_et Port_e,uint32_kt u32PortOutPutSpeedCpy);

void GPIO_vSetLock(Pin_et Pin_e,State_et State_e);
void GPIO_vSetLock(Port_et Port_e,uint16_kt u16PortStateCpy);
ErrorStatus_et GPIO_enuSetLock(Pin_et aPin_e[],State_et aState_e[],uint8_kt u8LengthCpy);
void GPIO_vSetMainLock(Port_et Port_e,State_et State_e);

void GPIO_vSetAlternateFunction(Pin_et Pin_e,AlternateFunction_et AlternateFunction_e);
ErrorStatus_et GPIO_enuSetAlternateFunction(Pin_et aPin_e[],AlternateFunction_et aAlternateFunction_e[],uint8_kt u8LengthCpy);


/*RUN-TIME APIs*/	
void GPIO_vWrite(Pin_et Pin_e,LevelState_et LevelState_e);
void GPIO_vWrite(Port_et Port_e,uint16_kt u16PortStateCpy);
ErrorStatus_et GPIO_enuWrite(Pin_et aPin_e[],LevelState_et aLevelState_e[],uint8_kt u8LengthCpy);
ErrorStatus_et GPIO_enuWrite(Pin_et aPin_e[],uint64_kt u64StreamLevelsCpy,uint8_kt u8LengthCpy);

void GPIO_vToggle(Pin_et Pin_e);
void GPIO_vToggle(Port_et Port_e);
ErrorStatus_et GPIO_enuToggle(Pin_et aPin_e[],uint8_kt u8LengthCpy);

LevelState_et   GPIO_enuRead(Pin_et Pin_e);
uint16_kt GPIO_u16Read(Port_et Port_e);
ErrorStatus_et GPIO_enuRead(Pin_et aPin_e[],LevelState_et aLevelState_e[],uint8_kt u8LengthCpy);
ErrorStatus_et GPIO_enuRead(Pin_et aPin_e[],uint64_kt *pu64StreamLevels,uint8_kt u8LengthCpy);
};






#endif
