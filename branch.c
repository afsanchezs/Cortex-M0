#include "branch.h"
void BEQ(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[1]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BNE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[1]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BCS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[2]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
char BCC(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[2]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
char BMI(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[0]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BPL(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[0]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BVS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[3]==1)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BVC(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[3]==0)
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BHI(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if((Banderas[2]==1)&&(Banderas[1]==0))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BLS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if((Banderas[2]==0)||(Banderas[1]==1))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BGE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[0]==Banderas[3])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BLT(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if(Banderas[0]!=Banderas[3])
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BGT(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if((Banderas[1]==0)&&(Banderas[0]==Banderas[3]))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BLE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion)
{
	if((Banderas[1]==0)||(Banderas[0]!=Banderas[3]))
	{
		*PC=Posicion;
	}
	else
	{
		*PC+=1;
	}
	return 0;
}
void BAL(unsigned long *PC,unsigned long Posicion)
{
	*PC=Posicion;
	return 0;
}
