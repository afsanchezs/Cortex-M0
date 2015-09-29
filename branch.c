#include "branch.h"
#include "flags.h"
#define PC 15
#define N 0
#define Z 1
#define C 2
#define V 3
void BEQ(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[Z]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BNE(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[Z]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BCS(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[C]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BCC(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[C]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BMI(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[N]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BPL(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[N]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BVS(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[C]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BVC(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[C]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BHI(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if((B[N]==1)&&(B[Z]==0))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLS(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if((B[C]==0)||(B[N]==1))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BGE(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[Z]==B[C])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLT(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if(B[N]!=B[C])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BGT(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if((B[Z]==0)&&(B[N]==B[V]))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLE(uint32_t *B,uint32_t *PC,uint32_t Posicion)
{
	if((B[Z]==0)||(B[N]!=B[V]))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BAL(uint32_t *PC,uint32_t Posicion)
{
	*PC=Posicion;
	return;
}
