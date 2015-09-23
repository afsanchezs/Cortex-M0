#include "instrucciones.h"
int i; //Contador
void ADD(uint32_t *Rd, uint32_t *Rn, uint32_t Num)
{
	*Rd=*Rn+Num;  // Esta operación es la suma entre un registro y
		     // un numero.
	return;
}
void ADDS(uint32_t *Rd, uint32_t *Rn,uint32_t *Rm)
{
	*Rd=*Rn+*Rm;	// Esta operación representa la suma entre dos registros.
	return;
}
void ORR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm)
{
	*Rd=*Rn | *Rm;  //El caracter "|", es el encargado de realizar la operacion 
		      //de la compuerta lógica OR, la operación es realizada entre dos registros.
	return;
}
void EOR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm)
{
	*Rd=*Rn ^ *Rm;	// El caracter "^" es el encargado de realizar la operación
	return;		// de la compuerta lógica de XOR, la operacion es realizada entre dos registros.
}
void MOV (uint32_t *Rd,uint32_t *Rn)
{
	Rd=Rn;	// Esta operación realiza una copia de un registro sin alterar el registro de ingreso.
	return;
}
void AND (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm)
{
	*Rd=*Rn & *Rm;	// El caracter "&" es el encargado de realizar la operacion
	return;		// de la compuerta lógica de AND, la operación es realizada entre dos registros.
}
void SUB (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm)
{
	*Rd=*Rn-*Rm;	// Esta operación es para realizar la resta entre dos regitros 
	return;
}
void Bandera (uint32_t *Rd, uint32_t *Rn, uint32_t *Rm, uint32_t *Banderas) 
{				// La variable Bandera es un vector que contiene el resultado de las banderas "Bandera=[N,Z,C,V]"
	if (*Rd>2147483647)	// Donde 2147483647 es el mayor numero con signo
	{
		*(Banderas+0)=1;// Indica que si el registro es mayor a 2147483647 la bandera de N se activa y se almacena un 1
	}
	else 
	{
		*(Banderas+0)=0;// Indica que si el registro no es mayor a 2147483647 la bandera N no se activa y se almacena un 0
	}
	if (*Rd==0)
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
void LSL(uint32_t *Rd, uint32_t *Rn, uint32_t Num)
{
	*Rd=*Rn<<Num; 	// La operacion representada con los caracteres "<<" implican un movimineto hacia la izquierda un Numero determinado de veces 
	return;			
}
void LSLS(uint32_t *Rd, uint32_t *Rn)
{
	*Rd=*Rd<<*Rn;   // La operacion representada con los caracteres "<<" implican un movimiento hacia la izquierda dependiendo del valor del registro de ingreso.
	return;
}
void LSR(uint32_t *Rd, uint32_t *Rn, uint32_t Num)
{
	*Rd=*Rn>>Num;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha un Numero determinado de veces. 
	return;			
}
void LSRS(uint32_t *Rd, uint32_t *Rn)
{
	*Rd=*Rd>>*Rn;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha dependiendo del valor del registro ingresado. 
	return;
}
void ROR(uint32_t *Rd,uint32_t *Rn)
{
	/**Rd=*Rd>>32;
   	*Rn=*Rn<<32;
   	*Rd=*Rd||*Rn;
	return;*/
}
void ASRS(uint32_t *Rd,uint32_t *Rn)
{
   	*Rn=~0<<(32-*Rn);
   	*Rd=(*Rd>>1)|*Rn;
	return;
}
void REV(uint32_t *Rd,uint32_t *Rn)
{
    	*Rn=*Rd<<24;
    	*Rn=*Rn|*Rd>>24;
    	*Rd=*Rn|((((*Rd<<8)>>24)<<8)|(((*Rd<<16)>>24)<<16));
	return;
}
void REV16(uint32_t *Rd,uint32_t *Rn)
{
	*Rn=((*Rd<<24)>>16)|((*Rd<<16)>>24);
    	*Rd=*Rn|(((*Rd>>24)<<16)|((*Rd>>16)<<24));
	return;
}
void BIC(uint32_t *Rd,uint32_t *Rn)
{
	*Rd&=~*Rn; 	// El simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion realiza una operacion AND entre un registro y el complemento del registro de ingreso.
	return;
}
void MVN(uint32_t *Rd,uint32_t *Rn)
{
	*Rd=~*Rn;	// el simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion guarda el complemento de un registro.
	return;
}
void RSBS(uint32_t *Rd,uint32_t *Rn)
{
	*Rd=(~*Rn)+1;   // Guarda el complemento a dos de un registro ya ingresado.
}
void NOP(void)
{			// No realiza ninguna operacion durante un ciclo de reloj.
}
