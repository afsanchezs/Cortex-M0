#include "branch.h"
#include "flags.h"
#define PC 15
#define LR 14
#define N 0
#define Z 1
#define C 2
#define V 3
void BEQ(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[Z]==1)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BNE(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[Z]==0)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BCS(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[C]==1)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BCC(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[C]==0)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BMI(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[N]==1)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BPL(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[N]==0)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BVS(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[C]==1)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BVC(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[C]==0)
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BHI(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if((B[N]==1)&&(B[Z]==0))
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BLS(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if((B[C]==0)||(B[N]==1))
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BGE(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[Z]==B[C])
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BLT(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if(B[N]!=B[C])
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BGT(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if((B[Z]==0)&&(B[N]==B[V]))
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BLE(uint32_t *B,uint32_t *R,uint32_t Posicion)
{
	if((B[Z]==0)||(B[N]!=B[V]))
	{
		R[PC]=Posicion;
	}
	else
	{
		R[PC]++;
	}
	return;
}
void BAL(uint32_t *R,uint32_t Posicion)
{
	R[PC]=Posicion;
	return;
}
void BL(uint32_t *R,uint32_t Posicion) 
{
    R[LR]=R[PC]+2; 
    R[PC]=Posicion*2;
}
void BX(uint32_t *R) 
{
	R[PC]=R[LR];
}
void SB(uint32_t *R,uint32_t Posicion) 
{
   R[PC]+= 2*Posicion; 
}
