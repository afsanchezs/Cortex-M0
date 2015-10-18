#include <stdint.h>
#define Mema 64
/**
* \ brief Funcion que almacena los registros en la SRAM
* \ param SP Puntero de pila
* \ param R puntero con los registros 
* \ param RAM Memoria 
* \ param registers_list Registros que se requieren ingresar.
* \ return void
*/
void PUSH(uint8_t *SP,uint32_t *R,uint8_t *RAM,uint8_t  registers_list[]);
/**
* \ brief Funcion que cuenta cuantos bits estan en 1
* \ param  registers_list Registros a los que se les va a realizar la operacion
* \ return cont Numero de bits en 1
*/ 
uint8_t BitCount(uint8_t  registers_list[]);
/**
* \ brief Funcion que saca los registros de la SRAM
* \ param SP Puntero de pila
* \ param R puntero que almacena los resgitros
* \ param RAM Memoria
* \ param registers_list Registros que se van a sacar.
* \ return void
*/ 
void POP(uint8_t *SP,uint32_t *R,uint8_t *RAM,uint8_t  registers_list[]);
void LDR(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void LDRB(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void LDRH(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void LDRSB(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void LDRSH(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void STR(uint8_t *RAM,uint32_t *Registro,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void STRB(uint8_t *RAM,uint32_t *Registro,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
void STRH(uint8_t *RAM,uint32_t *Registro,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM);
