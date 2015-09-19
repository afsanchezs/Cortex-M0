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
void Bandera (unsigned long *Rd, unsigned long *Rn, unsigned long *Rm, unsigned long *Banderas) 
{				// La variable Bandera es un vector que contiene el resultado de las banderas "Bandera=[N,Z,C,V]"
	if (*Rd>2147483647)	// Donde 2147483647 es el mayor numero con signo
	{
		*(Banderas+0)=1;// Indica que si el registro es mayor a 2147483647 la bandera de N se activa y se almacena un 1
	}
	else 
	{
		*(Banderas+0)=0;// Indica que si el registro no es mayor a 2147483647 la bandera N no se activa y se almacena un 0
	}
	if ((*Rd=4294967296) || (*Rd=2147483648))
	{
		*(Banderas+1)=1; // Indica que si el registro es igual a 4294967296 o a 2147483648 la bandera Z se activa almacenando un 1
	}
	else 
	{
		*(Banderas+1)=0;// Indica que si el registro es diferente a 4294967296 o a 2147483648 la bandera Z no se activa almacenando un 0
	}
	if (*Rd>4294967295)
	{
		*(Banderas+2)=1; //Indica que si el registro es mayor a 4294967295 la bandera C se activa, almacenando un 1.
	}
	else
	{
		*(Banderas+2)=0; //Indica que si el registro es menor a 4294967295 la bandera C no se activa, almacenando un 0.
	}
	if (*Rd>2147483647)
	{
		if ((*Rn<2147483647)&&(*Rm<2147483647))
		{
			*(Banderas+3)=1; //Indica que si los dos registros de operacion son menores a 2147483647 la bandera V se activa, almacenando un 1.
		}
		else 
		{
			*(Banderas+3)=0; //Indica que si los dos registros de operacion no son menores a 2147483647 la bandera V no se activa, almacenando un 0.
		}
	}
	else 
	{
		if ((*Rn>2147483647)&&(*Rm>2147483647))
		{
			*(Banderas+3)=1;
		}
		else 
		{
			*(Banderas+3)=0;
		}		
	}
}
void LSL(unsigned long *Rd, unsigned long *Rn, unsigned long Num)
{
	*Rd=*Rn<<Num; 	// La operacion representada con los caracteres "<<" implican un movimineto hacia la izquierda un Numero determinado de veces 
	return;			
}
void LSLS(unsigned long *Rd, unsigned long *Rn)
{
	*Rd=*Rd<<*Rn;   // La operacion representada con los caracteres "<<" implican un movimiento hacia la izquierda dependiendo del valor del registro de ingreso.
	return;
}
void LSR(unsigned long *Rd, unsigned long *Rn, unsigned long Num)
{
	*Rd=*Rn>>Num;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha un Numero determinado de veces. 
	return;			
}
void LSRS(unsigned long *Rd, unsigned long *Rn)
{
	*Rd=*Rd>>*Rn;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha dependiendo del valor del registro ingresado. 
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
	*Rd&=~*Rn; 	// El simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion realiza una operacion AND entre un registro y el complemento del registro de ingreso.
	return;
}
void MVN(unsigned long *Rd,unsigned long *Rn)
{
	*Rd=~*Rn;	// el simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion guarda el complemento de un registro.
	return;
}
void RSBS(unsigned long *Rd,unsigned long *Rn)
{
	*Rd=(~*Rn)+1;   // Guarda el complemento a dos de un registro ya ingresado.
}
void NOP(void)
{			// No realiza ninguna operacion durante un ciclo de reloj.
}
