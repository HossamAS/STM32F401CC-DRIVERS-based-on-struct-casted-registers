

#include "../LIB/STD_TYPES/STD_TYPES.h"
#include "../MCAL/SYSTEM/RCC/RCC_interface.h"
#include "../MCAL/SYSTEM/PWR/PWR_interface.h"
#include "../MCAL/PREPHERALS/GPIO/GPIO_interface.h"
//#include "../MCAL/CORE/FPU/FPU_interface.h"
//#include "../MCAL/CORE/MPU/MPU_interface.h"
int main(void)
{
    PWR_ct s;
    RCC_ct f;
    GPIO_ct a;
    uint32_kt sa;
   // MPU_ct SET;
    //FPU_ct sasasas;
    //float64_kt xsx=0.0f;
	while(1)
	{
		/*SET.MPU_enuSetRegionConfig((uint32_kt)0X10202222,
									MPU__REGION___0,
									MPU__REGION_SIZE___64B,
									MPU__STATE___DISABLE,
									MPU__ACCESS_PERMISSION___NORMAL__SHAREABLE__OUTER_WRITE_BACK__WRITE_AND_READ_ALLOCATE_AND_INNER_NONCACHEABLE,
									MPU__ACCESS_PERMISSION___FULL_ACCESS_IN_ANY_MODE,
									MPU__STATE___DISABLE);
		 *///  xsx=xsx+2.2f;
			a.GPIO_vWrite(GPIO__PIN___B2,(LevelState_et) 3);
			a.GPIO_vWrite(GPIO__PIN___B2,GPIO__LEVEL_STATE___HIGH);
			sa=1000000;
			while(sa--);
			a.GPIO_vWrite(GPIO__PIN___B2, GPIO__LEVEL_STATE___LOW);
			sa=1000000;
			while(sa--);
	}
	return 0;
}
