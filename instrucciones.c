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
void Bandera (unsigned long *Rd, unsigned long *Rn, unsigned long *Rm, unsigned long *N, unsigned long *Z, unsigned long *C, unsigned long *V)
{
	if (*Rd>127)
	{
		*N=1;
	}
	if ((*Rd=128) || (*Rd=256))
	{
		*Z=1;
	}
	if (*Rd>255)
	{
		*C=1;
	}
	if (*Rd>127)
	{
		if ((*Rn<127)&&(*Rm<127))
		{
			*V=1;
		}
		else 
		{
			*V=0;
		}
	}
	else 
	{
		if ((*Rn>127)&&(*Rm>127))
		{
			*V=1;
		}
		else 
		{
			*V=0;
		}		
	}
}
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
void ROR(unsigned long *Rd,unsigned long *Rn)
{
	*Rd=*Rd>>32;
   	*Rn=*Rn<<32;
   	*Rd=*Rd||*Rn;
	return;
}
void ASRS(unsigned long *Rd,unsigned long *Rn)
{
   	*Rn=~0<<(32-*Rn);
   	*Rd=(*Rd>>1)|*Rn;
	return;
}
void REV(unsigned long *Rd,unsigned long *Rn)
{
    	*Rn=*Rd<<24;
    	*Rn=*Rn|*Rd>>24;
    	*Rd=*Rn|((((*Rd<<8)>>24)<<8)|(((*Rd<<16)>>24)<<16));
	return;
}
void REV16(unsigned long *Rd,unsigned long *Rn)
{
	*Rn=((*Rd<<24)>>16)|((*Rd<<16)>>24);
    	*Rd=*Rn|(((*Rd>>24)<<16)|((*Rd>>16)<<24));
	return;
}
void BIC(unsigned long *Rd,unsigned long *Rn)
{
	*Rd&=~*Rn;
	return;
}
void MVN(unsigned long *Rd,unsigned long *Rn)
{
	*Rd=~*Rn;
	return;
}
void RSBS(unsigned long *Rd,unsigned long *Rn)
{
	*Rd=(~*Rn)+1;
}
void NOP(void)
{
}
