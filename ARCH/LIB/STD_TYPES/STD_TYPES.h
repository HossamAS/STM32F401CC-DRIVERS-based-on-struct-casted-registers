/**************************************/
/* Description : STD_Types header File*/
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 02:39:51  02 Jan 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/




#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned      char             uint8_kt;
typedef   signed 	  char              int8_kt;
typedef unsigned     short int        uint16_kt;
typedef   signed     short int         int16_kt;
typedef unsigned      long int        uint32_kt;
typedef   signed      long int         int32_kt;
typedef unsigned long long int        uint64_kt;
typedef   signed long long int         int64_kt;
typedef    float                     float32_kt;
typedef   double                     float64_kt;
typedef   long double               float128_kt;

typedef enum{
EOK,
ENOK,
PARAM_OUT_OF_RANGE,
PARAM_NULL_PTR,
PARAM_NULL_PTR_TO_FUNC,
MULTI_OCCUR,
NOT_VALID
}ErrorStatus_et;

typedef void (*pf)(void);
#define NULL_PTR (void*)0 
#define NULL_PTR_TO_FUNC ((pf)0)
typedef union{
uint8_kt DATA;
struct{
	uint8_kt Bit0:1;
	uint8_kt Bit1:1;
	uint8_kt Bit2:1;
	uint8_kt Bit3:1;
	uint8_kt Bit4:1;
	uint8_kt Bit5:1;
	uint8_kt Bit6:1;
	uint8_kt Bit7:1;
};
}uint8_ut;

typedef union{
uint16_kt DATA;
struct{
	uint16_kt Bit0:1;
	uint16_kt Bit1:1;
	uint16_kt Bit2:1;
	uint16_kt Bit3:1;
	uint16_kt Bit4:1;
	uint16_kt Bit5:1;
	uint16_kt Bit6:1;
	uint16_kt Bit7:1;
	uint16_kt Bit8:1;
	uint16_kt Bit9:1;
	uint16_kt Bit10:1;
	uint16_kt Bit11:1;
	uint16_kt Bit12:1;
	uint16_kt Bit13:1;
	uint16_kt Bit14:1;
	uint16_kt Bit15:1;

};
}uint16_ut;

typedef union{
uint32_kt DATA;
struct{
	uint32_kt Bit0:1;
	uint32_kt Bit1:1;
	uint32_kt Bit2:1;
	uint32_kt Bit3:1;
	uint32_kt Bit4:1;
	uint32_kt Bit5:1;
	uint32_kt Bit6:1;
	uint32_kt Bit7:1;
	uint32_kt Bit8:1;
	uint32_kt Bit9:1;
	uint32_kt Bit10:1;
	uint32_kt Bit11:1;
	uint32_kt Bit12:1;
	uint32_kt Bit13:1;
	uint32_kt Bit14:1;
	uint32_kt Bit15:1;
	uint32_kt Bit16:1;
	uint32_kt Bit17:1;
	uint32_kt Bit18:1;
	uint32_kt Bit19:1;
	uint32_kt Bit20:1;
	uint32_kt Bit21:1;
	uint32_kt Bit22:1;
	uint32_kt Bit23:1;
	uint32_kt Bit24:1;
	uint32_kt Bit25:1;
	uint32_kt Bit26:1;
	uint32_kt Bit27:1;
	uint32_kt Bit28:1;
	uint32_kt Bit29:1;
	uint32_kt Bit30:1;
	uint32_kt Bit31:1;
};
}uint32_ut;


typedef union{
uint64_kt DATA;
struct{
	uint64_kt Bit0:1;
	uint64_kt Bit1:1;
	uint64_kt Bit2:1;
	uint64_kt Bit3:1;
	uint64_kt Bit4:1;
	uint64_kt Bit5:1;
	uint64_kt Bit6:1;
	uint64_kt Bit7:1;
	uint64_kt Bit8:1;
	uint64_kt Bit9:1;
	uint64_kt Bit10:1;
	uint64_kt Bit11:1;
	uint64_kt Bit12:1;
	uint64_kt Bit13:1;
	uint64_kt Bit14:1;
	uint64_kt Bit15:1;
	uint64_kt Bit16:1;
	uint64_kt Bit17:1;
	uint64_kt Bit18:1;
	uint64_kt Bit19:1;
	uint64_kt Bit20:1;
	uint64_kt Bit21:1;
	uint64_kt Bit22:1;
	uint64_kt Bit23:1;
	uint64_kt Bit24:1;
	uint64_kt Bit25:1;
	uint64_kt Bit26:1;
	uint64_kt Bit27:1;
	uint64_kt Bit28:1;
	uint64_kt Bit29:1;
	uint64_kt Bit30:1;
	uint64_kt Bit31:1;
	uint64_kt Bit32:1;
	uint64_kt Bit33:1;
	uint64_kt Bit34:1;
	uint64_kt Bit35:1;
	uint64_kt Bit36:1;
	uint64_kt Bit37:1;
	uint64_kt Bit38:1;
	uint64_kt Bit39:1;
	uint64_kt Bit40:1;
	uint64_kt Bit41:1;
	uint64_kt Bit42:1;
	uint64_kt Bit43:1;
	uint64_kt Bit44:1;
	uint64_kt Bit45:1;
	uint64_kt Bit46:1;
	uint64_kt Bit47:1;
	uint64_kt Bit48:1;
	uint64_kt Bit49:1;
	uint64_kt Bit50:1;
	uint64_kt Bit51:1;
	uint64_kt Bit52:1;
	uint64_kt Bit53:1;
	uint64_kt Bit54:1;
	uint64_kt Bit55:1;
	uint64_kt Bit56:1;
	uint64_kt Bit57:1;
	uint64_kt Bit58:1;
	uint64_kt Bit59:1;
	uint64_kt Bit60:1;
	uint64_kt Bit61:1;
	uint64_kt Bit62:1;
	uint64_kt Bit63:1;
};
}uint64_ut;





typedef union{
int8_kt DATA;
struct{
	uint8_kt Bit0:1;
	uint8_kt Bit1:1;
	uint8_kt Bit2:1;
	uint8_kt Bit3:1;
	uint8_kt Bit4:1;
	uint8_kt Bit5:1;
	uint8_kt Bit6:1;
	uint8_kt Bit7:1;
};
}int8_ut;

typedef union{
int16_kt DATA;
struct{
	uint16_kt Bit0:1;
	uint16_kt Bit1:1;
	uint16_kt Bit2:1;
	uint16_kt Bit3:1;
	uint16_kt Bit4:1;
	uint16_kt Bit5:1;
	uint16_kt Bit6:1;
	uint16_kt Bit7:1;
	uint16_kt Bit8:1;
	uint16_kt Bit9:1;
	uint16_kt Bit10:1;
	uint16_kt Bit11:1;
	uint16_kt Bit12:1;
	uint16_kt Bit13:1;
	uint16_kt Bit14:1;
	uint16_kt Bit15:1;

};
}int16_ut;

typedef union{
int32_kt DATA;
struct{
	uint32_kt Bit0:1;
	uint32_kt Bit1:1;
	uint32_kt Bit2:1;
	uint32_kt Bit3:1;
	uint32_kt Bit4:1;
	uint32_kt Bit5:1;
	uint32_kt Bit6:1;
	uint32_kt Bit7:1;
	uint32_kt Bit8:1;
	uint32_kt Bit9:1;
	uint32_kt Bit10:1;
	uint32_kt Bit11:1;
	uint32_kt Bit12:1;
	uint32_kt Bit13:1;
	uint32_kt Bit14:1;
	uint32_kt Bit15:1;
	uint32_kt Bit16:1;
	uint32_kt Bit17:1;
	uint32_kt Bit18:1;
	uint32_kt Bit19:1;
	uint32_kt Bit20:1;
	uint32_kt Bit21:1;
	uint32_kt Bit22:1;
	uint32_kt Bit23:1;
	uint32_kt Bit24:1;
	uint32_kt Bit25:1;
	uint32_kt Bit26:1;
	uint32_kt Bit27:1;
	uint32_kt Bit28:1;
	uint32_kt Bit29:1;
	uint32_kt Bit30:1;
	uint32_kt Bit31:1;
};
}int32_ut;


typedef union{
int64_kt DATA;
struct{
	uint64_kt Bit0:1;
	uint64_kt Bit1:1;
	uint64_kt Bit2:1;
	uint64_kt Bit3:1;
	uint64_kt Bit4:1;
	uint64_kt Bit5:1;
	uint64_kt Bit6:1;
	uint64_kt Bit7:1;
	uint64_kt Bit8:1;
	uint64_kt Bit9:1;
	uint64_kt Bit10:1;
	uint64_kt Bit11:1;
	uint64_kt Bit12:1;
	uint64_kt Bit13:1;
	uint64_kt Bit14:1;
	uint64_kt Bit15:1;
	uint64_kt Bit16:1;
	uint64_kt Bit17:1;
	uint64_kt Bit18:1;
	uint64_kt Bit19:1;
	uint64_kt Bit20:1;
	uint64_kt Bit21:1;
	uint64_kt Bit22:1;
	uint64_kt Bit23:1;
	uint64_kt Bit24:1;
	uint64_kt Bit25:1;
	uint64_kt Bit26:1;
	uint64_kt Bit27:1;
	uint64_kt Bit28:1;
	uint64_kt Bit29:1;
	uint64_kt Bit30:1;
	uint64_kt Bit31:1;
	uint64_kt Bit32:1;
	uint64_kt Bit33:1;
	uint64_kt Bit34:1;
	uint64_kt Bit35:1;
	uint64_kt Bit36:1;
	uint64_kt Bit37:1;
	uint64_kt Bit38:1;
	uint64_kt Bit39:1;
	uint64_kt Bit40:1;
	uint64_kt Bit41:1;
	uint64_kt Bit42:1;
	uint64_kt Bit43:1;
	uint64_kt Bit44:1;
	uint64_kt Bit45:1;
	uint64_kt Bit46:1;
	uint64_kt Bit47:1;
	uint64_kt Bit48:1;
	uint64_kt Bit49:1;
	uint64_kt Bit50:1;
	uint64_kt Bit51:1;
	uint64_kt Bit52:1;
	uint64_kt Bit53:1;
	uint64_kt Bit54:1;
	uint64_kt Bit55:1;
	uint64_kt Bit56:1;
	uint64_kt Bit57:1;
	uint64_kt Bit58:1;
	uint64_kt Bit59:1;
	uint64_kt Bit60:1;
	uint64_kt Bit61:1;
	uint64_kt Bit62:1;
	uint64_kt Bit63:1;
};
}int64_ut;















typedef union{
float32_kt DATA;
struct{
	uint32_kt Bit0:1;
	uint32_kt Bit1:1;
	uint32_kt Bit2:1;
	uint32_kt Bit3:1;
	uint32_kt Bit4:1;
	uint32_kt Bit5:1;
	uint32_kt Bit6:1;
	uint32_kt Bit7:1;
	uint32_kt Bit8:1;
	uint32_kt Bit9:1;
	uint32_kt Bit10:1;
	uint32_kt Bit11:1;
	uint32_kt Bit12:1;
	uint32_kt Bit13:1;
	uint32_kt Bit14:1;
	uint32_kt Bit15:1;
	uint32_kt Bit16:1;
	uint32_kt Bit17:1;
	uint32_kt Bit18:1;
	uint32_kt Bit19:1;
	uint32_kt Bit20:1;
	uint32_kt Bit21:1;
	uint32_kt Bit22:1;
	uint32_kt Bit23:1;
	uint32_kt Bit24:1;
	uint32_kt Bit25:1;
	uint32_kt Bit26:1;
	uint32_kt Bit27:1;
	uint32_kt Bit28:1;
	uint32_kt Bit29:1;
	uint32_kt Bit30:1;
	uint32_kt Bit31:1;
};
}float32_ut;
typedef union{
float64_kt DATA;
struct{
	uint64_kt Bit0:1;
	uint64_kt Bit1:1;
	uint64_kt Bit2:1;
	uint64_kt Bit3:1;
	uint64_kt Bit4:1;
	uint64_kt Bit5:1;
	uint64_kt Bit6:1;
	uint64_kt Bit7:1;
	uint64_kt Bit8:1;
	uint64_kt Bit9:1;
	uint64_kt Bit10:1;
	uint64_kt Bit11:1;
	uint64_kt Bit12:1;
	uint64_kt Bit13:1;
	uint64_kt Bit14:1;
	uint64_kt Bit15:1;
	uint64_kt Bit16:1;
	uint64_kt Bit17:1;
	uint64_kt Bit18:1;
	uint64_kt Bit19:1;
	uint64_kt Bit20:1;
	uint64_kt Bit21:1;
	uint64_kt Bit22:1;
	uint64_kt Bit23:1;
	uint64_kt Bit24:1;
	uint64_kt Bit25:1;
	uint64_kt Bit26:1;
	uint64_kt Bit27:1;
	uint64_kt Bit28:1;
	uint64_kt Bit29:1;
	uint64_kt Bit30:1;
	uint64_kt Bit31:1;
	uint64_kt Bit32:1;
	uint64_kt Bit33:1;
	uint64_kt Bit34:1;
	uint64_kt Bit35:1;
	uint64_kt Bit36:1;
	uint64_kt Bit37:1;
	uint64_kt Bit38:1;
	uint64_kt Bit39:1;
	uint64_kt Bit40:1;
	uint64_kt Bit41:1;
	uint64_kt Bit42:1;
	uint64_kt Bit43:1;
	uint64_kt Bit44:1;
	uint64_kt Bit45:1;
	uint64_kt Bit46:1;
	uint64_kt Bit47:1;
	uint64_kt Bit48:1;
	uint64_kt Bit49:1;
	uint64_kt Bit50:1;
	uint64_kt Bit51:1;
	uint64_kt Bit52:1;
	uint64_kt Bit53:1;
	uint64_kt Bit54:1;
	uint64_kt Bit55:1;
	uint64_kt Bit56:1;
	uint64_kt Bit57:1;
	uint64_kt Bit58:1;
	uint64_kt Bit59:1;
	uint64_kt Bit60:1;
	uint64_kt Bit61:1;
	uint64_kt Bit62:1;
	uint64_kt Bit63:1;
};
}float64_ut;



typedef union{
float128_kt DATA;
struct{
	uint64_kt Bit0:1;
	uint64_kt Bit1:1;
	uint64_kt Bit2:1;
	uint64_kt Bit3:1;
	uint64_kt Bit4:1;
	uint64_kt Bit5:1;
	uint64_kt Bit6:1;
	uint64_kt Bit7:1;
	uint64_kt Bit8:1;
	uint64_kt Bit9:1;
	uint64_kt Bit10:1;
	uint64_kt Bit11:1;
	uint64_kt Bit12:1;
	uint64_kt Bit13:1;
	uint64_kt Bit14:1;
	uint64_kt Bit15:1;
	uint64_kt Bit16:1;
	uint64_kt Bit17:1;
	uint64_kt Bit18:1;
	uint64_kt Bit19:1;
	uint64_kt Bit20:1;
	uint64_kt Bit21:1;
	uint64_kt Bit22:1;
	uint64_kt Bit23:1;
	uint64_kt Bit24:1;
	uint64_kt Bit25:1;
	uint64_kt Bit26:1;
	uint64_kt Bit27:1;
	uint64_kt Bit28:1;
	uint64_kt Bit29:1;
	uint64_kt Bit30:1;
	uint64_kt Bit31:1;
	uint64_kt Bit32:1;
	uint64_kt Bit33:1;
	uint64_kt Bit34:1;
	uint64_kt Bit35:1;
	uint64_kt Bit36:1;
	uint64_kt Bit37:1;
	uint64_kt Bit38:1;
	uint64_kt Bit39:1;
	uint64_kt Bit40:1;
	uint64_kt Bit41:1;
	uint64_kt Bit42:1;
	uint64_kt Bit43:1;
	uint64_kt Bit44:1;
	uint64_kt Bit45:1;
	uint64_kt Bit46:1;
	uint64_kt Bit47:1;
	uint64_kt Bit48:1;
	uint64_kt Bit49:1;
	uint64_kt Bit50:1;
	uint64_kt Bit51:1;
	uint64_kt Bit52:1;
	uint64_kt Bit53:1;
	uint64_kt Bit54:1;
	uint64_kt Bit55:1;
	uint64_kt Bit56:1;
	uint64_kt Bit57:1;
	uint64_kt Bit58:1;
	uint64_kt Bit59:1;
	uint64_kt Bit60:1;
	uint64_kt Bit61:1;
	uint64_kt Bit62:1;
	uint64_kt Bit63:1;
	uint64_kt Bit64:1;
	uint64_kt Bit65:1;
	uint64_kt Bit66:1;
	uint64_kt Bit67:1;
	uint64_kt Bit68:1;
	uint64_kt Bit69:1;
	uint64_kt Bit70:1;
	uint64_kt Bit71:1;
	uint64_kt Bit72:1;
	uint64_kt Bit73:1;
	uint64_kt Bit74:1;
	uint64_kt Bit75:1;
	uint64_kt Bit76:1;
	uint64_kt Bit77:1;
	uint64_kt Bit78:1;
	uint64_kt Bit79:1;
	uint64_kt Bit80:1;
	uint64_kt Bit81:1;
	uint64_kt Bit82:1;
	uint64_kt Bit83:1;
	uint64_kt Bit84:1;
	uint64_kt Bit85:1;
	uint64_kt Bit86:1;
	uint64_kt Bit87:1;
	uint64_kt Bit88:1;
	uint64_kt Bit89:1;
	uint64_kt Bit90:1;
	uint64_kt Bit91:1;
	uint64_kt Bit92:1;
	uint64_kt Bit93:1;
	uint64_kt Bit94:1;
	uint64_kt Bit95:1;
	uint64_kt Bit96:1;
	uint64_kt Bit97:1;
	uint64_kt Bit98:1;
	uint64_kt Bit99:1;
	uint64_kt Bit100:1;
	uint64_kt Bit101:1;
	uint64_kt Bit102:1;
	uint64_kt Bit103:1;
	uint64_kt Bit104:1;
	uint64_kt Bit105:1;
	uint64_kt Bit106:1;
	uint64_kt Bit107:1;
	uint64_kt Bit108:1;
	uint64_kt Bit109:1;
	uint64_kt Bit110:1;
	uint64_kt Bit111:1;
	uint64_kt Bit112:1;
	uint64_kt Bit113:1;
	uint64_kt Bit114:1;
	uint64_kt Bit115:1;
	uint64_kt Bit116:1;
	uint64_kt Bit117:1;
	uint64_kt Bit118:1;
	uint64_kt Bit119:1;
	uint64_kt Bit120:1;
	uint64_kt Bit121:1;
	uint64_kt Bit122:1;
	uint64_kt Bit123:1;
	uint64_kt Bit124:1;
	uint64_kt Bit125:1;
	uint64_kt Bit126:1;
	uint64_kt Bit127:1;
};
}float128_ut;


#endif
