#include "instrucciones.h"
int ADD(int Rdm, int Rn, int Num)
{
	Rdm=Rn+Num;
	return Rdm;
}
int ADDS(int Rdm,int Rn,int Rm)
{
	Rdm=Rn+Rm;
	return Rdm;
}
int ORR (int Rdm,int Rn, int Rm)
{
	Rdm=Rn | Rm;
	return Rdm;
}
int EOR (int Rdm,int Rn, int Rm)
{
	Rdm=Rn ^ Rm;
	return R1;
}
int MOV (int Rdm,int Rn)
{
	Rdm=Rn;
	return Rdm;
}
int AND (int Rdm,int Rn, int Rm)
{
	Rdm=Rn & Rm;
	return Rdm;
}
int SUB (int Rdm,int Rn, int Rm)
{
	Rdm=Rn-Rm;
	return Rdm;
}
