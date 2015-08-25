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
