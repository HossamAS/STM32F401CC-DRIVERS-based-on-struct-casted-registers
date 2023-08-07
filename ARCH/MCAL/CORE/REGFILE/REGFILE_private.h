/***************************************/
/* Description : REGFILE private h File*/
/* Author      : hossam                */
/* Version     : 0.1V                  */
/* Date        : 18:26:31  29 Jul 2023 */
/* History     : 0.1V Initial Creation */
/***************************************/




#ifndef REGFILE_PRIVATE_H
#define REGFILE_PRIVATE_H


typedef union{
	struct{
		uint32_kt :8;
		uint32_kt REGFILE_PRIGROUP:3;
	};
	struct{
		uint32_kt :8;
		uint32_kt REGFILE_PRIGROUP0:1;
		uint32_kt REGFILE_PRIGROUP1:1;
		uint32_kt REGFILE_PRIGROUP2:1;

	};
}REGFILE_AIRCR_ut;


#define REGFILE_AIRCR (*(volatile REGFILE_AIRCR_ut*)(0xE000ED0C))


extern PrivilegedAcessState_et REGFILE_PrivilegedAcessState_e;
extern pf pfSV_CallExceptionCallBack;



#endif
