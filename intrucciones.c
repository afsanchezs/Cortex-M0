#include <stdio.h>
#include <stdlib.h>
#include "intrucciones.h"

void ADD(long int *registro1,long int registro2,long int registro3)
{
	*registro1=registro2+registro3;
}
void AND(long int *registro1,long int registro2,long int registro3)
{
	*registro1=registro2&registro3;
}
void EOR(long int *registro1,long int registro2,long int registro3)
{
	*registro1=registro2^registro3;
}
void MOV(long int *registro1,long int registro2)
{
	*registro1=registro2;
}
void ORR(long int *registro1,long int registro2,long int registro3)
{
	*registro1=registro2|registro3;
}
void SUB(long int *registro1,long int registro2,long int registro3)
{
	*registro1=registro2-registro3;
}

