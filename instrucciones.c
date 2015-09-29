#include "instrucciones.h"
#define PC 15
void ADD(uint32_t *Rd, uint32_t *Rn, uint32_t Num, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn+Num;  // Esta operación es la suma entre un registro y
		     // un numero.
	Bandera(*Rd, *Rn, Num, *Banderas);
	R[PC]++;
	return;
}
void ADDS(uint32_t *Rd, uint32_t *Rn,uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn+*Rm;	// Esta operación representa la suma entre dos registros.
	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;
}
void ORR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn | *Rm;  //El caracter "|", es el encargado de realizar la operacion de la compuerta lógica OR, la operación es realizada entre dos registros.
	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;
}
void EOR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn ^ *Rm;	// El caracter "^" es el encargado de realizar la operación  de la compuerta lógica de XOR, la operacion es realizada entre dos registros.
	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;		
}
void MOV (uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	Rd=Rn;	// Esta operación realiza una copia de un registro sin alterar el registro de ingreso.
	Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;
}
void AND (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn & *Rm;	// El caracter "&" es el encargado de realizar la operacion de la compuerta lógica de AND, la operación es realizada entre dos registros.
	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;		
}
void SUB (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn-*Rm;	// Esta operación es para realizar la resta entre dos regitros 
	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;
}

void LSL(uint32_t *Rd, uint32_t *Rn, uint32_t Num, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn<<Num; 	// La operacion representada con los caracteres "<<" implican un movimineto hacia la izquierda un Numero determinado de veces 
	Bandera(*Rd, *Rn, Num, *Banderas);
	R[PC]++;
	return;			
}
void LSLS(uint32_t *Rd, uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rd<<*Rn;   // La operacion representada con los caracteres "<<" implican un movimiento hacia la izquierda dependiendo del valor del registro de ingreso.
	Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;
}
void LSR(uint32_t *Rd, uint32_t *Rn, uint32_t Num, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn>>Num;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha un Numero determinado de veces. 
	Bandera(*Rd, *Rn, Num, *Banderas);
	R[PC]++;
	return;			
}
void LSRS(uint32_t *Rd, uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rd>>*Rn;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha dependiendo del valor del registro ingresado. 
	Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;
}
void ROR(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	/**Rd=*Rd>>32;
   	*Rn=*Rn<<32;
   	*Rd=*Rd||*Rn;
   	*Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;*/
}
void ASRS(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
   	*Rn=~0<<(32-*Rn);
   	*Rd=(*Rd>>1)|*Rn;
   	Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;
}
void REV(uint32_t *Rd,uint32_t *Rn, unit32_t *Banderas)
{
    	*Rn=*Rd<<24;
    	*Rn=*Rn|*Rd>>24;
    	*Rd=*Rn|((((*Rd<<8)>>24)<<8)|(((*Rd<<16)>>24)<<16));
    	Bandera(*Rd, *Rn, *Rm, *Banderas);
	R[PC]++;
	return;
}
void REV16(uint32_t *Rd,uint32_t *Rn, unit32_t *Banderas)
{
	*Rn=((*Rd<<24)>>16)|((*Rd<<16)>>24);
    	*Rd=*Rn|(((*Rd>>24)<<16)|((*Rd>>16)<<24));
    	Bandera(*Rd, *Rn,*Banderas);
	R[PC]++;
	return;
}
void BIC(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd&=~*Rn; 	// El simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion realiza una operacion AND entre un registro y el complemento del registro de ingreso.
	Bandera(*Rd, *Rn, *Banderas);
	R[PC]++;
	return;
}
void MVN(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=~*Rn;	// el simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion guarda el complemento de un registro.
	Bandera(*Rd, *Rn, *Banderas);
	R[PC]++;
	return;
}
void RSBS(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=(~*Rn)+1;   // Guarda el complemento a dos de un registro ya ingresado.
	Bandera(*Rd, *Rn, *Banderas);
	R[PC]++;
	return:
	
}
void NOP(uint32_t *R)
{			// No realiza ninguna operacion durante un ciclo de reloj.
}
