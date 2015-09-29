#include "flags.h"
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
