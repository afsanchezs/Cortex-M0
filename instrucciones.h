
#include <stdint.h>
#include "flags.h"
/**
* \brief Funcion para realizar la suma de un registro y un valor.
* \param Rd Registro para el resultado.
* \param Rn Registro de ingreso para sumar.
* \param Num Valor  a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void
*/
void ADD (uint32_t *Rd,uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar la suma con dos registros.
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso a sumar.
* \param Rm Segundo registro de ingreso a sumar.
* \param *B Es el puntero que almacenas los resultados de las baderas
* \return void
*/
void ADDS(uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar ORR con dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para ORR.
* \param Rm Segundo registro de ingreso para ORR.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void 
*/
void ORR (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar EOR  con dos registros
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso para EOR
* \param Rm Segundo registro de ingreso para EOR.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void
*/
void EOR (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar MOV (reemplazar el valor de un registro en otro)
* \param Rd Registro para el resultado
* \param Rn Registro de ingreso para  MOV (posicion en la cual se va a mover el valor del registro)
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void
*/
void MOV (uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar AND dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para AND
* \param Rm Segundo registro de ingreso para AND
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void
*/
void AND (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/**
* \brief Funcion para realizar la resta entre un registro y un valor
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso a sumar
* \param Rm Segundo registro de ingreso a sumar
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void
*/
void SUB (uint32_t *Rd,uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion desplazamiento hacia la izquierda ingresando un numero a sumar.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void LSL(uint32_t *Rd, uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B);
/** 
* \biref Funcion desplazamiento hacia la izquierda con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void LSLS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion desplazamiento hacia la derecha con un numero a sumar.
* \param Rd Resultado de la operacion
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void 
*/
void LSR(uint32_t *Rd , uint32_t Rn , uint32_t Num, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion desplazamiento hacia la Derecha con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void LSRS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para rotar.
* \param Rdn Resultado de la operacion.
* \param Rn Numero a rotar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void 
*/
void ROR(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para desplazar aritmeticamente hacia la derecha con un registro y y un numero.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void ASR(uint32_t *Rd, uint32_t Rn, uint32_t Num, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para despalazar aritmeticamente hacia la derecha con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn numero a trasladar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/ 
void ASRS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que hace una and de 1 bit y con Rm negado.
* \param Rd Resultado de la operacion 
* \param Rn Registro a negar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/ 
void BICS(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que modifica las *B sin guardar el resultado 
* \param Rn Primer registro a operar.
* \param Rm Segundo registro a operar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void CMN(uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que modifica las *B comparando los registros.
* \param Rn Primer registro a comparar.
* \param Rm Segundo regsitro a comparar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void CMP(uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que modifica *B comparando un registro y un numero.
* \param Rn Registro a comparar.
* \param Num Numero para comparar con el registro.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void CMPS(uint32_t Rn,uint32_t Num, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion Multiplica dos registros, sin signo y almacena los 32 bits menos significativos del resultado en el regsitro de destino.
* \param Rd Registro para el resultado de la operacion.
* \param Rn Primer valor del reistro a multiplicar.
* \param Rm Segundo valor del registro a multiplicar.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void MUL(uint32_t *Rd, uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/** 
* \brief funcion para hacer el complemento a un registro.
* \param Rd Resultado de la operacion.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/ 
void MVN(uint32_t *Rd,uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que hace un retardo.
* \return void.
*/
void NOP(uint32_t *R);
/** 
* \brief Funcion para cambiar el orden de los bits
* \param Rb Registro a resultante.
* \param Rn valor a modificar.
* \param R Puntero que almacena los registros.
* \param *B Es el puntero que almacenas los resultados de las banderas
* \return void.
*/
void REV(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para modificar la posicion de grupos de 16 bits.
* \param Rd Registro resultante.
* \param Rn Registro a modificar.
* \param R Puntero que almacena los registros.
* \param *B Es el puntero que almacena los resultados de las banderas
* \return void.
*/
void REV16(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para modificar la posicion de a ocho bits
* \param Rd Numero a modificar.
* \param Rn Registro a modificar.
* \param R Puntero que almacena los registros.
* \param *B Es el puntero que almacenas los resultados de las *B
* \return void
*/ 
void REVSH(uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para obtener el complemento a dos de un numero
* \param Rb Registro al cual se le hara el complemento.
* \param *B Es el puntero que almacenas los resultados de las *B
* \return void. 
*/
void RSB(uint32_t *Rd, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion para restar con Carry
* \param Rd Registro para el resultado de la operacion.
* \param Rn Primer valor a operar
* \param Rm Segundo valor a operar
* \param *B Es el puntero que almacenas los resultados de las *B
* \return void.
*/ 
void SBC(uint32_t *Rd, uint32_t Rn, uint32_t Rm, uint32_t *R, uint32_t *B);
/** 
* \brief Funcion que hace una AND bit a bit, pero solo modifica las *B.
* \param Rn Primer valor ingresado para hacer la operacion.
* \param Rm Segundo valor ingresado para hacer la operacion.
* \param *B Es el puntero que almacenas los resultados de las *B
* \return void.
*/
void TST (uint32_t *Rd, uint32_t Rn, uint32_t *R, uint32_t *B);

void CMN(uint32_t Rn, unint32_t Rm,uint32_t *R, uint32_t *B);
void CMP(uint32_t Rn,uint32_t Rm, uint32_t *R, uint32_t *B);
void MUL(uint32_t Rn,uint32_t Rm,uint32_t *R, uint32_t *B);
