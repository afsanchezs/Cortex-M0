#include "instrucciones.h"
int ADD(int Rd, int Rn, int Num)
{
	Rd=Rn+Num;
	return Rd;
}
int ADDS(int Rd,int Rn,int Rm)
{
	Rd=Rn+Rm;
	return Rd;
}
int ORR (int Rd,int Rn, int Rm)
{
	Rd=Rn | Rm;
	return Rd;
}
int EOR (int Rd,int Rn, int Rm)
{
	Rd=Rn ^ Rm;
	return R1;
}
int MOV (int Rd,int Rn)
{
	Rd=Rn;
	return Rd;
}
int AND (int Rd,int Rn, int Rm)
{
	Rd=Rn & Rm;
	return Rd;
}
int SUB (int Rd,int Rn, int Rm)
{
	Rd=Rn-Rm;
	return Rd;
}
int Bandera (int Rd, int Rn, int Rm)
{
if (Rd>127)
{
	N=1;
}
if (Rd=(128 || 256)
{
	Z=1;
}
if (Rd>255)
{
	C=1;
}
if (Rd>127)
{
	if ((Rn<127)&&(Rm<127))
	{
		V=1;
	}
	else 
	{
		V=0;
	}
}
else 
{
	if ((Rn>127)&&(Rm>127))
	{
		V=1;
	}
	else 
	{
		V=0;
	}		
}
}
