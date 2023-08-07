/**************************************/
/* Description : MPU program File     */
/* Author      : hossam               */
/* Version     : 0.1V                 */
/* Date        : 22:06:41  23 Jul 2023*/
/* History     : 0.1V Initial Creation*/
/**************************************/
#include "../../../LIB/STD_TYPES/STD_TYPES.h"

#include "MPU_interface.h"
#include "MPU_config.h"
#include "MPU_private.h"
#include "math.h"

using namespace std;
 MPU_ct::MPU_ct(void)
{

	 MPU.MPU_CTRL.DATA=MPU_INITIAL_STATE|
					   USEING_MPU_IN_HANDLER_MODE_INITIAL_STATE<<1|
					   DEFAULT_MEOMRY_MAP_BACK_GROUND_REGION_INITIAL_STATE<<2;

}

 ErrorStatus_et MPU_ct::MPU_enuReadSupportRegions(MemoryConnection_et * pMemoryConnection_e,
		 	 	 	 	 	 	 	 	 	 	  uint8_kt *pu8NumberOfDataRegions,
												  uint8_kt *pu8NumberOfInstructionRegions)
{
	 ErrorStatus_et ErrorStatusLoc_e=EOK;
if((pMemoryConnection_e!=NULL_PTR)&&
   (pu8NumberOfDataRegions!=NULL_PTR)&&
   (pu8NumberOfInstructionRegions!=NULL_PTR))
{
	*pMemoryConnection_e=(MemoryConnection_et)MPU.MPU_TYPER.SEPARATE;
	*pu8NumberOfDataRegions=(uint8_kt)MPU.MPU_TYPER.DREGION;
	*pu8NumberOfInstructionRegions=(uint8_kt)MPU.MPU_TYPER.IREGION;
}
else
{
	ErrorStatusLoc_e=PARAM_NULL_PTR;
}
return ErrorStatusLoc_e;
}

void MPU_ct::MPU_vEnable(void)
{

	MPU.MPU_CTRL.ENABLE=1;

}

void MPU_ct::MPU_vDisable(void)
{

	MPU.MPU_CTRL.ENABLE=0;

}

void MPU_ct::MPU_vDefaultMeomryMapBackGroundRegionEnable(void)
{

	MPU.MPU_CTRL.PRIVDEFENA=1;

}

void MPU_ct::MPU_vDefaultMeomryMapBackGroundRegionDisable(void)
{

	MPU.MPU_CTRL.PRIVDEFENA=0;

}

void MPU_ct::MPU_vUseMPU_InHandlerModeEnable(void)
{

	MPU.MPU_CTRL.HFNMIENA=1;

}

void MPU_ct::MPU_vUseMPU_InHandlerModeDisable(void)
{

	MPU.MPU_CTRL.HFNMIENA=0;

}

ErrorStatus_et  MPU_ct::MPU_enuSetRegionConfig(uint32_kt u32BaseAddressCpy,
											   Region_et Region_e,
											   RegionSize_et RegionSize_e,
											   MPU_State_et SubRegionState_e,
											   MemoryConfig_et MemoryConfig_e,
											   AccessPermission_et AccessPermission_e,
											   MPU_State_et InstructionFetchesState_e)
{
	ErrorStatus_et ErrorStatusLoc_e=EOK;
	if(u32BaseAddressCpy>pow(2,31-((long)RegionSize_e)))
	{
		MPU.MPU_RBAR.DATA=u32BaseAddressCpy<<(RegionSize_e+1)|Region_e|0X10;

		MPU.MPU_RASR.DATA=1|RegionSize_e<<1|SubRegionState_e<<8|
						  MemoryConfig_e<<16|AccessPermission_e<<24|
						  InstructionFetchesState_e<<28;
	}
	else
	{
		ErrorStatusLoc_e=PARAM_OUT_OF_RANGE;
	}
	return ErrorStatusLoc_e;



}

