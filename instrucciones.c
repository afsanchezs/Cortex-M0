#include "instrucciones.h"
#include "flags.h"
#define PC 15
#define N 0
#define Z 1
#define C 2
#define V 3
void ADD(uint32_t *Rd, uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B)
{
	*Rd=Rn+Num;  // Esta operación es la suma entre un registro y un número
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Num,B);
	R[PC]++;
	return;
}
void ADDS(uint32_t *Rd, uint32_t Rn,uint32_t Rm, uint32_t *R, uint32_t *B)
{
	*Rd=Rn+Rm;	// Esta operación representa la suma entre dos registros.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
	R[PC]++;
	return;
}
void ORR (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B)
{
	*Rd=Rn | Rm;  //El caracter "|", es el encargado de realizar la operacion de la compuerta lógica OR, la operación es realizada entre dos registros.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
	R[PC]++;
	return;
}
void EOR (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B)
{
	*Rd=Rn ^ Rm;	// El caracter "^" es el encargado de realizar la operación  de la compuerta lógica de XOR, la operacion es realizada entre dos registros.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
	R[PC]++;
	return;		
}
void MOVS (uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd=56;	// Esta operación realiza una copia de un registro sin alterar el registro de ingreso.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	B[C]=0;
	B[V]=0;
	R[PC]++;
	return;
}
void AND (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B)
{
	*Rd=Rn & Rm;	// El caracter "&" es el encargado de realizar la operacion de la compuerta lógica de AND, la operación es realizada entre dos registros.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
	R[PC]++;
	return;		
}
void SUB (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B)
{
	*Rd=Rn-Rm;	// Esta operación es para realizar la resta entre dos regitros 
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
	R[PC]++;
	return;
}

void LSL(uint32_t *Rd, uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B)
{
	*Rd=Rn<<Num; 	// La operacion representada con los caracteres "<<" implican un movimineto hacia la izquierda un Numero determinado de veces 
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Num,B);
	R[PC]++;
	return;			
}
void LSLS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd=*Rd<<Rn;   // La operacion representada con los caracteres "<<" implican un movimiento hacia la izquierda dependiendo del valor del registro de ingreso.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void LSR(uint32_t *Rd, uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B)
{
	*Rd=Rn>>Num;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha un Numero determinado de veces. 
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Num,B);
	R[PC]++;
	return;			
}
void LSRS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd=*Rd>>Rn;	// La operacion representada con los caracteres ">>" implican un movimineto hacia la derecha dependiendo del valor del registro ingresado. 
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void ROR(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
	/**Rd=*Rd>>32;
   	Rn=Rn<<32;
   	*Rd=*Rd||Rn;
   	BanderaN(*Rd,*B);
	BanderaZ(*Rd,*B);
	BanderaC(*Rd,*B);
	Banderas[V]=0;
	R[PC]++;
	return;*/
}
void ASRS(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
   	Rn=~0<<(32-Rn);
   	*Rd=(*Rd>>1)|Rn;
   	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void REV(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
    	Rn=*Rd<<24;
    	Rn=Rn|*Rd>>24;
    	*Rd=Rn|((((*Rd<<8)>>24)<<8)|(((*Rd<<16)>>24)<<16));
      	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void REV16(uint32_t *Rd,uint32_t Rn,uint32_t *R, uint32_t *B)
{
	Rn=((*Rd<<24)>>16)|((*Rd<<16)>>24);
    	*Rd=Rn|(((*Rd>>24)<<16)|((*Rd>>16)<<24));
    	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void BICS(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd&=~Rn; 	// El simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion realiza una operacion AND entre un registro y el complemento del registro de ingreso.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void MVN(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd=~Rn;	// el simbolo "~" realiza el complemento de un registro, por lo tanto esta funcion guarda el complemento de un registro.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
}
void RSBS(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B)
{
	*Rd=(~Rn)+1;   // Guarda el complemento a dos de un registro ya ingresado.
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	B[V]=0;
	R[PC]++;
	return;
	
}
void NOP(uint32_t *R)
{
	R[PC]++;
	return;			
}
void CMN(uint32_t Rn, uint32_t Rm,uint32_t *R, uint32_t *B)
{
    	uint32_t Rd,*Rx;    	
	Rd=Rn+Rm;
	Rx=&Rd;
    	BanderaN(Rx,B);
    	BanderaZ(Rx,B);
    	BanderaC(Rx,B);
    	BanderaV(Rx,Rn,Rm,B);
    	R[PC]++;
    	return;
}

void MUL(uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint32_t *R, uint32_t *B)//Funcion que multiplica dos registros
{
    	*Rd=Rn*Rm;
	BanderaN(Rd,B);
	BanderaZ(Rd,B);
	BanderaC(Rd,B);
	BanderaV(Rd,Rn,Rm,B);
    	R[PC]++;
    	return;
}
