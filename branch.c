#include "branch.h"
#define PC 15
#define N 0
#define Z 1
#define C 2
#define V 3
void BEQ(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[Z]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BNE(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[Z]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BCS(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[C]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BCC(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[C]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BMI(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[N]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BPL(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[N]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BVS(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[C]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BVC(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[C]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BHI(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if((Banderas[N]==1)&&(Banderas[Z]==0))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLS(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if((Banderas[C]==0)||(Banderas[N]==1))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BGE(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[Z]==Banderas[C])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLT(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if(Banderas[N]!=Banderas[C])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BGT(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if((Banderas[Z]==0)&&(Banderas[N]==Banderas[V]))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return;
}
void BLE(uint32_t *Banderas,uint32_t *PC,uint32_t Posicion)
{
	if((Banderas[Z]==0)||(Banderas[N]!=Banderas[V]))
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
