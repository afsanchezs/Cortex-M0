/**
* \brief Funcion para realizar la suma de un registro y un valor.
* \param Rd Registro para el resultado.
* \param Rn Registro de ingreso para sumar.
* \param Num Valor  a sumar.
* \return void
*/
void ADD (unsigned long *Rd,unsigned long *Rn, unsigned long Num);
/**
* \brief Funcion para realizar la suma con dos registros.
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso a sumar.
* \param Rm Segundo registro de ingreso a sumar.
* \return void
*/
void ADDS(unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/**
* \brief Funcion para realizar ORR con dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para ORR.
* \param Rm Segundo registro de ingreso para ORR.
* \return void 
*/
void ORR (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/**
* \brief Funcion para realizar EOR  con dos registros
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso para EOR
* \param Rm Segundo registro de ingreso para EOR.
* \return void
*/
void EOR (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/**
* \brief Funcion para realizar MOV (reemplazar el valor de un registro en otro)
* \param Rd Registro para el resultado
* \param Rn Registro de ingreso para  MOV (posicion en la cual se va a mover el valor del registro)
* \return void
*/
void MOV (unsigned long *Rd,unsigned long *Rn);
/**
* \brief Funcion para realizar AND dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para AND
* \param Rm Segundo registro de ingreso para AND
* \return void
*/
void AND (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/**
* \brief Funcion para realizar la resta entre un registro y un valor
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso a sumar
* \param Rm Segundo registro de ingreso a sumar
* \return void
*/
void SUB (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/** 
* \brief Funcion generadoras de banderas.
* \param Rd Resultado de la operacion.
* \param Rn Primer valor de operacion.
* \param Rm Segundo valor de operacion.
* \return void
*/
void Bandera (unsigned long *Rd,unsigned long *Rn, unsigned long *Rm);
/** 
* \brief Funcion desplazamiento hacia la izquierda ingresando un numero a sumar.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \return void.
*/
void LSL(unsigned long *Rd, unsigned long *Rn, unsigned long Num);
/** 
* \biref Funcion desplazamiento hacia la izquierda con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \return void.
*/
void LSLS(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion desplazamiento hacia la derecha con un numero a sumar.
* \param Rd Resultado de la operacion
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \return void 
*/
void LSR(unsigned long *Rd , unsigned long *Rn ,unsigned long Num);
/** 
* \brief Funcion desplazamiento hacia la Derecha con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \return void.
*/
void LSRS(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para rotar.
* \param Rdn Resultado de la operacion.
* \param Rn Numero a rotar.
* \return void 
*/
void ROR(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para desplazar aritmeticamente hacia la derecha con un registro y y un numero.
* \param Rd Resultado de la operacion.
* \param Rn Valor del registro a sumar.
* \param Num Valor a sumar.
* \return void.
*/
void ASR(unsigned long *Rd, unsigned long *Rn, unsigned long Num);
/** 
* \brief Funcion para despalazar aritmeticamente hacia la derecha con dos registros.
* \param Rd Resultado de la operacion.
* \param Rn numero a trasladar.
* \return void.
*/ 
void ASRS(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion que hace una and de 1 bit y con Rm negado.
* \param Rd Resultado de la operacion 
* \param Rn Registro a negar.
* \return void.
*/ 
void BICS(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion que modifica las banderas sin guardar el resultado 
* \param Rn Primer registro a operar.
* \param Rm Segundo registro a operar.
* \return void.
*/
void CMN(unsigned long *Rn, unsigned long *Rm);
/** 
* \brief Funcion que modifica las banderas comparando los registros.
* \param Rn Primer registro a comparar.
* \param Rm Segundo regsitro a comparar.
* \return void.
*/
void CMP(unsigned long *Rn, unsigned long *Rm);
/** 
* \brief Funcion que modifica banderas comparando un registro y un numero.
* \param Rn Registro a comparar.
* \param Num Numero para comparar con el registro.
* \return void.
*/
void CMPS(unsigned long *Rn,unsigned long Num);
/** 
* \brief Funcion Multiplica dos registros, sin signo y almacena los 32 bits menos significativos del resultado en el regsitro de destino.
* \param Rd Registro para el resultado de la operacion.
* \param Rn Primer valor del reistro a multiplicar.
* \param Rm Segundo valor del registro a multiplicar.
* \return void.
*/
void MUL(unsigned long *Rd, unsigned long Rn, unsigned long Rm);
/** 
* \brief funcion para hacer el complemento a un registro.
* \param Rd Resultado de la operacion.
* \retrn void.
*/ 
void MVN(unsigned long *Rd);
/** 
* \brief Funcion que hace un retardo.
* \return void.
*/
void NOP(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para cambiar el orden de los bits
* \param Rb Registro a modificar.
* \return void.
*/
void REV(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para modificar la posicion de grupos de 16 bits.
* \param Rd Registro resultante.
* \param Rn Registro a modificar.
* \return void.
*/
void REV16(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para modificar la posicion de a ocho bits
* \param Rd Numero a modificar.
* \return void
*/ 
void REVSH(unsigned long *Rd, unsigned long *Rn);
/** 
* \brief Funcion para obtener el complemento a dos de un numero
* \param Rb Registro al cual se le hara el complemento.
* \return void. 
*/
void RSB(unsigned long *Rd);
/** 
* \brief Funcion para restar con Carry
* \param Rd Registro para el resultado de la operacion.
* \param Rn Primer valor a operar
* \param Rm Segundo valor a operar
* \return void.
*/ 
void SBC(unsigned long *Rd, unsigned long *Rn, unsigned long *Rm);
/** 
* \brief Funcion que hace una AND bit a bit, pero solo modifica las banderas.
* \parm Rn Primer valor ingresado para hacer la operacion.
* \pram Rm Segundo valor ingresado para hacer la operacion.
* \return void.
*/
void TST (unsigned long *Rd, unsigned long *Rn);
