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
	return;
}
void ORR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn | *Rm;  //El caracter "|", es el encargado de realizar la operacion 
		      //de la compuerta lógica OR, la operación es realizada entre dos registros.
	return;
}
void EOR (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn ^ *Rm;	// El caracter "^" es el encargado de realizar la operación
	return;		// de la compuerta lógica de XOR, la operacion es realizada entre dos registros.
}
void MOV (uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	Rd=Rn;	// Esta operación realiza una copia de un registro sin alterar el registro de ingreso.
	return;
}
void AND (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn & *Rm;	// El caracter "&" es el encargado de realizar la operacion
	return;		// de la compuerta lógica de AND, la operación es realizada entre dos registros.
}
void SUB (uint32_t *Rd,uint32_t *Rn, uint32_t *Rm, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn-*Rm;	// Esta operación es para realizar la resta entre dos regitros 
	return;
}

void LSL(uint32_t *Rd, uint32_t *Rn, uint32_t Num, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn<<Num; 	// La operacion representada con los caracteres "<<" implican un movimineto hacia la izquierda un Numero determinado de veces 
	return;			
}
void LSLS(uint32_t *Rd, uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rd<<*Rn;   // La operacion representada con los caracteres "<<" implican un movimiento hacia la izquierda dependiendo del valor del registro de ingreso.
	return;
}
void LSR(uint32_t *Rd, uint32_t *Rn, uint32_t Num, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rn>>Num;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha un Numero determinado de veces. 
	return;			
}
void LSRS(uint32_t *Rd, uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=*Rd>>*Rn;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha dependiendo del valor del registro ingresado. 
	return;
}
void ROR(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	/**Rd=*Rd>>32;
   	*Rn=*Rn<<32;
   	*Rd=*Rd||*Rn;
	return;*/
}
void ASRS(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
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
void BIC(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd&=~*Rn; 	// El simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion realiza una operacion AND entre un registro y el complemento del registro de ingreso.
	return;
}
void MVN(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=~*Rn;	// el simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion guarda el complemento de un registro.
	return;
}
void RSBS(uint32_t *Rd,uint32_t *Rn, uint32_t *R, uint32_t *Banderas)
{
	*Rd=(~*Rn)+1;   // Guarda el complemento a dos de un registro ya ingresado.
}
void NOP(uint32_t *R)
{			// No realiza ninguna operacion durante un ciclo de reloj.
}
