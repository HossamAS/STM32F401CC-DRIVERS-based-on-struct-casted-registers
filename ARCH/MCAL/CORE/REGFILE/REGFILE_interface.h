/***************************************/
/* Description : REGFILE interface File*/
/* Author      : hossam                */
/* Version     : 0.1V                  */
/* Date        : 18:26:31  29 Jul 2023 */
/* History     : 0.1V Initial Creation */
/***************************************/




#ifndef REGFILE_INTERFACE_H
#define REGFILE_INTERFACE_H
typedef enum __attribute__((__packed__)){
	REGFILE__PRIVILEGED_ACCESS_STATE___UNPRIVILEGED,
	REGFILE__PRIVILEGED_ACCESS_STATE___PRIVILEGED
}PrivilegedAcessState_et;
typedef enum __attribute__((__packed__)){
	REGFILE__STACK_POINTER_REGISTER___MAIN_STACK_POINTER,
	REGFILE__STACK_POINTER_REGISTER___PROGRAM_STACK_POINTER
}StackPointerRegister_et;
typedef enum  __attribute__((__packed__)){
	REGFILE__ADDRESS_VALIDITY_STATUS___NOT_VALID,
	REGFILE__ADDRESS_VALIDITY_STATUS___VALID,
}AddressValidityState_et;
typedef enum  __attribute__((__packed__)){
	REGFILE__BASE_PRIORITY___NOT_VALID,
	REGFILE__BASE_PRIORITY___VALID,
}BasePriorityState_et;
typedef enum  __attribute__((__packed__)){
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_1_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_2_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_3_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_4_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_5_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_6_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_7_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_8_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_9_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_10_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_11_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_12_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_13_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_14_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_15_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_16_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_2_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_2_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_3_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_3_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_4_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_4_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_5_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_5_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_6_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_6_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_7_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_7_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_8_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_8_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_2_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_3_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_4_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_5,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_6,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_7,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_8,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_5,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_6,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_7,
	REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_2_SUBGROUP_8,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_2,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_3,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_4,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_5,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_6,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_7,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_8,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_9,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_10,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_11,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_12,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_13,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_14,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_15,
	REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_16,
}BasePriorityGroupAndSubgroup_et;
typedef enum  __attribute__((__packed__)){
	REGFILE__BASE_PRIORITY_GROUPING_STYLE___16_GROUP_1_SUBGROUPS,
	REGFILE__BASE_PRIORITY_GROUPING_STYLE___8_GROUP_2_SUBGROUPS=4,
	REGFILE__BASE_PRIORITY_GROUPING_STYLE___4_GROUP_4_SUBGROUPS,
	REGFILE__BASE_PRIORITY_GROUPING_STYLE___2_GROUP_8_SUBGROUPS,
	REGFILE__BASE_PRIORITY_GROUPING_STYLE___1_GROUP_16_SUBGROUPS,
}BasePriorityGroupingStyle_et;

typedef enum  __attribute__((__packed__)){
	REGFILE__STATE___DISABLE,
	REGFILE__STATE___ENABLE
}REGFILE_State_et;

class REGFILE_ct{
	public:
	void REGFILE_vRequestSV_CallException(void);
#if(!REMOVE_PREVILIGED_ACCESS_CONTROL_PROGRAM_FROM_SV_CALL_HANDLER)
	void REGFILE_vSetPrivilegedAccessStateInThreadMode(PrivilegedAcessState_et PrivilegedAcessState_e);
#endif
	void REGFILE_vSetStackPointerRegisterUsedInThreadMode(StackPointerRegister_et StackPointerRegister_e);
	AddressValidityState_et REGFILE_enuReadFloatingPointContextActivationState( void);
	ErrorStatus_et REGFILE_enuMaximumPriorityLevelThatCanBeAccessed(BasePriorityGroupAndSubgroup_et BasePriorityGroupAndSubgroup_e);
    void REGFILE_vSetGlobalExceptionsState(REGFILE_State_et REGFILE_State_e);
    void REGFILE_vSetGlobalInterruptsState(REGFILE_State_et REGFILE_State_e);
    ErrorStatus_et REGFILE_enuSetSV_CallExceptionCallBack(pf pfCallBack);
};







#endif