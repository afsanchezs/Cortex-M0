#include "instrucciones.h"
int i; //Contador
void ADD(unsigned long *Rd, unsigned long *Rn, unsigned long Num)
{
	*Rd=*Rn+Num;  // Esta operación es la suma entre un registro y
		     // un numero.
	return;
}
void ADDS(unsigned long *Rd, unsigned long *Rn,unsigned long *Rm)
{
	*Rd=*Rn+*Rm;	// Esta operación representa la suma entre dos registros.
	return;
}
void ORR (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm)
{
	*Rd=*Rn | *Rm;  //El caracter "|", es el encargado de realizar la operacion 
		      //de la compuerta lógica OR, la operación es realizada entre dos registros.
	return;
}
void EOR (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm)
{
	*Rd=*Rn ^ *Rm;	// El caracter "^" es el encargado de realizar la operación
	return;		// de la compuerta lógica de XOR, la operacion es realizada entre dos registros.
}
void MOV (unsigned long *Rd,unsigned long *Rn)
{
	Rd=Rn;	// Esta operación realiza una copia de un registro sin alterar el registro de ingreso.
	return;
}
void AND (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm)
{
	*Rd=*Rn & *Rm;	// El caracter "&" es el encargado de realizar la operacion
	return;		// de la compuerta lógica de AND, la operación es realizada entre dos registros.
}
void SUB (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm)
{
	*Rd=*Rn-*Rm;	// Esta operación es para realizar la resta entre dos regitros 
	return;
}
/*void Bandera (unsigned long Rd, unsigned long Rn, unsigned long Rm)
unsigned long = *N, *Z, *C, *V;
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
}*/
void LSL(unsigned long *Rd, unsigned long *Rn, unsigned long Num)
{
	*Rd=*Rn<<Num; 		 
	return;			
}
void LSLS(unsigned long *Rd, unsigned long *Rn)
{
	*Rd=*Rd<<*Rn;
	return;
}
void LSR(unsigned long *Rd, unsigned long *Rn, unsigned long Num)
{
	*Rd=*Rn>>Num;		
	return;			
}
void LSRS(unsigned long *Rd, unsigned long *Rn)
{
	*Rd=*Rd>>*Rn;
	return;
}
void ROR(unsigned long *Rm,unsigned long *Rn)
{
	*Rm=*Rm>>32;
   	*Rn=*Rn<<32;
   	*Rm=*Rm||*Rn;
	return;
}
void ASRS(unsigned long *Rm,unsigned long *Rn)
{
   	*Rn=~0<<(32-*Rn);
   	*Rm=(*Rm>>1)|*Rn;
	return;
}
void REV(unsigned long *Rm,unsigned long *Rn)
{
    	*Rn=*Rm<<24;
    	*Rn=*Rn|*Rm>>24;
    	*Rm=*Rn|((((*Rm<<8)>>24)<<8)|(((*Rm<<16)>>24)<<16));
	return;
}
void REV16(unsigned long *Rm,unsigned long *Rn)
{
	*Rn=((*Rm<<24)>>16)|((*Rm<<16)>>24);
    	*Rm=*Rn|(((*Rm>>24)<<16)|((*Rm>>16)<<24));
	return;
}
void BIC(unsigned long *Rm,unsigned long *Rn)
{
	*Rm&=~*Rn;
	return;
}
void MVN(unsigned long *Rm,unsigned long *Rn)
{
	*Rm=~*Rn;
	return;
}
void RSBS(unsigned long *Rm,unsigned long *Rn)
{
	*Rm=(~*Rn)+1;
}
void NOP(void)
{
}
