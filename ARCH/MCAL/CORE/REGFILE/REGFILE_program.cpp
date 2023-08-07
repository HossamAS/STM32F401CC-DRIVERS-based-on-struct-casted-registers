/**************************************/
/* Description : REGFILE program File */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 18:26:31  29 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/

#include "../../../LIB/STD_TYPES/STD_TYPES.h"
#include "../REGFILE/REGFILE_config.h"
#include "../REGFILE/REGFILE_interface.h"
#include "../REGFILE/REGFILE_private.h"


void REGFILE_ct::REGFILE_vRequestSV_CallException(void)
{
    asm("SVC 0");
}

void REGFILE_ct::REGFILE_vSetPrivilegedAccessStateInThreadMode(PrivilegedAcessState_et PrivilegedAcessState)
{
    REGFILE_PrivilegedAcessState_e=PrivilegedAcessState;
    asm("SVC 0");
}
ErrorStatus_et REGFILE_ct::REGFILE_enuMaximumPriorityLevelThatCanBeAccessed(BasePriorityGroupAndSubgroup_et BasePriorityGroupAndSubgroup_e)
{
    ErrorStatus_et ErrorStatusLoc_e=EOK;
    if(((REGFILE_AIRCR.REGFILE_PRIGROUP==REGFILE__BASE_PRIORITY_GROUPING_STYLE___16_GROUP_1_SUBGROUPS)&&
            ( BasePriorityGroupAndSubgroup_e<=REGFILE__BASE_PRIORITY_16_GROUP_1_SUBGROUPS___GROUP_16_SUBGROUP_1))

            ||((REGFILE_AIRCR.REGFILE_PRIGROUP==REGFILE__BASE_PRIORITY_GROUPING_STYLE___8_GROUP_2_SUBGROUPS)&&
               ( BasePriorityGroupAndSubgroup_e<REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
                 BasePriorityGroupAndSubgroup_e>=REGFILE__BASE_PRIORITY_8_GROUP_2_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

            ||((REGFILE_AIRCR.REGFILE_PRIGROUP==REGFILE__BASE_PRIORITY_GROUPING_STYLE___4_GROUP_4_SUBGROUPS)&&
               ( BasePriorityGroupAndSubgroup_e<REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
                 BasePriorityGroupAndSubgroup_e>=REGFILE__BASE_PRIORITY_4_GROUP_4_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

            ||((REGFILE_AIRCR.REGFILE_PRIGROUP==REGFILE__BASE_PRIORITY_GROUPING_STYLE___2_GROUP_8_SUBGROUPS)&&
               ( BasePriorityGroupAndSubgroup_e<REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1  &&
                 BasePriorityGroupAndSubgroup_e>=REGFILE__BASE_PRIORITY_2_GROUP_8_SUBGROUPS___GROUP_1_SUBGROUP_1 ))

            ||((REGFILE_AIRCR.REGFILE_PRIGROUP==REGFILE__BASE_PRIORITY_GROUPING_STYLE___1_GROUP_16_SUBGROUPS)&&
               ( BasePriorityGroupAndSubgroup_e<=REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_16  &&
                 BasePriorityGroupAndSubgroup_e>=REGFILE__BASE_PRIORITY_1_GROUP_16_SUBGROUPS___GROUP_1_SUBGROUP_1 )))
    {
        if(BasePriorityGroupAndSubgroup_e%16==0)
        {
            asm("PUSH {R7}\n"
                "AND R7, #0\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==1)
        {
            asm("PUSH {R7}\n"
                "AND R7, #1\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==2)
        {
            asm("PUSH {R7}\n"
                "AND R7, #2\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==3)
        {
            asm("PUSH {R7}\n"
                "AND R7, #3\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==4)
        {
            asm("PUSH {R7}\n"
                "AND R7, #4\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==5)
        {
            asm("PUSH {R7}\n"
                "AND R7, #5\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==6)
        {
            asm("PUSH {R7}\n"
                "AND R7, #6\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==7)
        {
            asm("PUSH {R7}\n"
                "AND R7, #7\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==8)
        {
            asm("PUSH {R7}\n"
                "AND R7, #8\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==9)
        {
            asm("PUSH {R7}\n"
                "AND R7, #9\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==10)
        {
            asm("PUSH {R7}\n"
                "AND R7, #10\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==12)
        {
            asm("PUSH {R7}\n"
                "AND R7, #11\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==13)
        {
            asm("PUSH {R7}\n"
                "AND R7, #13\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else if(BasePriorityGroupAndSubgroup_e%16==14)
        {
            asm("PUSH {R7}\n"
                "AND R7, #14\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
        else
        {
            asm("PUSH {R7}\n"
                "AND R7, #15\n"
                "MSR BASEPRI,R7\n"
                "POP {R7}\n"
               );
        }
    }


    else
    {
        ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
    }
    return ErrorStatusLoc_e;

}
ErrorStatus_et REGFILE_ct::REGFILE_enuSetSV_CallExceptionCallBack(pf pfCallBack)
{

    ErrorStatus_et ErrorStatusLoc_e=EOK;
    if(pfCallBack!=NULL_PTR_TO_FUNC)
    {
        pfSV_CallExceptionCallBack=pfCallBack;
    }
    else
    {
        ErrorStatusLoc_e=PARAM_NULL_PTR_TO_FUNC;
    }
    return ErrorStatusLoc_e;

}

extern "C" {
    void SVCall_Handler(void)
    {
#if(!REMOVE_PREVILIGED_ACCESS_CONTROL_PROGRAM_FROM_SV_CALL_HANDLER)
        if(REGFILE_PrivilegedAcessState_e)
        {
            asm("MRS R0, CONTROL\n"
                "ORR R0, #1\n"
                "MSR CONTROL,R0"
               );
        }
        else
        {
            asm("MRS R0, CONTROL\n"
                "AND R0, 0XE\n"
                "MSR CONTROL,R0"
               );
        }
#endif
        if(pfSV_CallExceptionCallBack!=NULL_PTR_TO_FUNC)
        {
            pfSV_CallExceptionCallBack();
        }

    }
}
