#include "instrucciones.h"
int ADD(int R1, int R2, int Num)
{
	R1=R2+Num;
	return R1;
}
int ADDS(int R1,int R2, R3)
{
	R1=R2+R3;
	return R1;
}
int ORR (int R1,int R2, int R3)
{
	R1=R2 | R3;
	return R1;
}
int EOR (int R1,int R2, int R3)
{
	R1=R2 ^ R3;
	return R1;
}
int MOV (int R1,int R2)
{
	R1=R2;
	return R1;
}
int AND (int R1,int R2, int R3)
{
	R1=R2 & R3;
	return R1;
}
int SUB (int R1,int R2, int R3)
{
	R1=R2-R3;
	return R1;
}
