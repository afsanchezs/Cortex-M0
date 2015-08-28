/**
* \brief Funcion para realizar la suma de un registro y un valor.
* \param Rd Registro para el resultado.
* \param Rn Registro de ingreso para sumar.
* \param Num Valor  a sumar.
* \return void
*/
void ADD (unsigned long *Rd,unsigned long Rn, unsigned long Num);
/**
* \brief Funcion para realizar la suma con dos registros.
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso a sumar.
* \param Rm Segundo registro de ingreso a sumar.
* \return void
*/
void ADDS(unsigned long *Rd,unsigned long Rn, unsigned long Rm);
/**
* \brief Funcion para realizar ORR con dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para ORR.
* \param Rm Segundo registro de ingreso para ORR.
* \return void 
*/
void ORR (unsigned long *Rd,unsigned long Rn, unsigned long Rm;
/**
* \brief Funcion para realizar EOR  con dos registros
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso para EOR
* \param Rm Segundo registro de ingreso para EOR.
* \return void
*/
void EOR (unsigned long *Rd,unsigned long Rn, unsigned long Rm);
/**
* \brief Funcion para realizar MOV (reemplazar el valor de un registro en otro)
* \param Rd Registro para el resultado
* \param Rn Registro de ingreso para  MOV (posicion en la cual se va a mover el valor del registro)
* \return void
*/
void MOV (unsigned long *Rd,unsigned long Rn);
/**
* \brief Funcion para realizar AND dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para AND
* \param Rm Segundo registro de ingreso para AND
* \return void
*/
void AND (unsigned long *Rd,unsigned long Rn, unsigned long Rm);
/**
 * \brief Funcion para realizar la resta entre un registro y un valor
 * \param Rd Registro para el resultado
 * \param Rn Primer registro de ingreso a sumar
 * \param Rm Segundo registro de ingreso a sumar
 * \return void
 */
void SUB (unsigned long *Rd,unsigned long Rn, unsigned long Rm);
/** brief Funcion generadoras de banderas.
* \ param Rd Resultado de la operacion.
* \ param Rn Primer valor de operacion.
* \ param Rm Segundo valor de operacion.
*/
void Bandera (unsigned long *Rd,unsigned long Rn, unsigned long Rm);
/** brief Funcion desplazamiento hacia la izquierda ingresando un numero a sumar.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void.
*/
void LSL(unsigned long *Rd, unsigned long Rn, unsigned long Num);
/** biref Funcion desplazamiento hacia la izquierda con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ return void.
*/
void LSLS(unsigned long *Rd, unsigned long Rn);
/** brief Funcion desplazamiento hacia la derecha con un numero a sumar.
* \ param Rd Resultado de la operacion
* \ param Rn Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void 
*/ 
void LSR(unsigned long *Rd , unsigned long Rn ,unsigned long Num);
/** biref Funcion desplazamiento hacia la Derecha con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ return void.
*/
void LSDS(unsigned long *Rd, unsigned long Rn);
/** brief Funcion para rotar.
* \ param Rdn Resultado de la operacion.
* \ param Rn Numero a rotar.
* \ return void 
*/
void ROR(unsigned long *Rd, unsigned long Rn);
/** brief Funcion para desplazar aritmeticamente hacia la derecha con un registro y y un numero.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void.
*/
void ASR(unsigned long *Rd, unsigned long Rn, unsigned long Num);
/** brief Funcion para despalazar aritmeticamente hacia la derecha con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rn numero a trasladar.
* \ return void.
*/ 
void ASRS(unsigned long *Rd, unsigned long Rn);
/** brief Funcion que hace una and de 1 bit y con Rm negado.
* \ param Rd Resultado de la operacion 
* \ param Rn Registro a negar.
* \ return void.
*/ 
void BICS(unsigned long *Rd, unsigned long Rn);

