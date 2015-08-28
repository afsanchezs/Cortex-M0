#include "instrucciones.h"
void ADD(unsigned long *Rd, unsigned long Rn, unsigned long Num)
{
	Rd=Rn+Num;
	return;
}
void ADDS(unsigned long *Rd, unsigned long Rn,unsigned long Rm)
{
	Rd=Rn+Rm;
	return;
}
void ORR (unsigned long *Rd,unsigned long Rn, unsigned long Rm)
{
	Rd=Rn | Rm;
	return;
}
void EOR (unsigned long *Rd,unsigned long Rn, unsigned long Rm)
{
	Rd=Rn ^ Rm;
	return;
}
void MOV (unsigned long *Rd,unsigned long Rn)
{
	Rd=Rn;
	return;
}
void AND (unsigned long *Rd,unsigned long Rn, unsigned long Rm)
{
	Rd=Rn & Rm;
	return;
}
void SUB (unsigned long *Rd,unsigned long Rn, unsigned long Rm)
{
	Rd=Rn-Rm;
	return;
}
void Bandera (unsigned long Rd, unsigned long Rn, unsigned long Rm)
unsigned long *N, *Z, *C, *V;
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
return;
}
