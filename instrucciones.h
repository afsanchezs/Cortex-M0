/**
* \brief Funcion para realizar la suma de un registro y un valor.
* \param Rd Registro para el resultado.
* \param Rn Registro de ingreso para sumar.
* \param Num Valor  a sumar.
* \return Retorna como resultado  un entero
*/
int ADD (int Rd,int Rn, int Num);
/**
* \brief Funcion para realizar la suma con dos registros.
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso a sumar.
* \param Rm Segundo registro de ingreso a sumar.
* \return Retorna como resultado un entero 
*/
int ADDS(int Rd,int Rn, int Rm);
/**
* \brief Funcion para realizar ORR con dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para ORR.
* \param Rm Segundo registro de ingreso para ORR.
* \return retorna como resultado un entero
*/
int ORR (int Rd,int Rn, int Rm;
/**
* \brief Funcion para realizar EOR  con dos registros
* \param Rd Registro para el resultado.
* \param Rn Primer registro de ingreso para EOR
* \param Rm Segundo registro de ingreso para EOR.
* \return Retorna como resultado  un entero
*/
int EOR (int Rd,int Rm, int Rn);
/**
* \brief Funcion para realizar MOV (reemplazar el valor de un registro en otro)
* \param Rd Registro para el resultado
* \param Rn Registro de ingreso para  MOV (posicion en la cual se va a mover el valor del registro)
* \return Retorna como resultado un entero en la posicion deseada
*/
int MOV (int Rd,int Rn);
/**
* \brief Funcion para realizar AND dos registros
* \param Rd Registro para el resultado
* \param Rn Primer registro de ingreso para AND
* \param Rm Segundo registro de ingreso para AND
* \return Retorna como resultado un entero
*/
int AND (int Rd,int Rn, int Rm);
/**
 * \brief Funcion para realizar la resta entre un registro y un valor
 * \param Rd Registro para el resultado
 * \param Rn Primer registro de ingreso a sumar
 * \param Rm Segundo registro de ingreso a sumar
 * \return Retorna como resultdo un entero
 */
int SUB (int Rd,int Rn, int Rm);
/** brief Funcion generadoras de banderas.
* \ param Rd Resultado de la operacion.
* \ param Rn Primer valor de operacion.
* \ param Rm Segundo valor de operacion.
* \ return N Bandera de negativo.
* \ return Z Bandera de cero.
* \ return C Bandera de acarreo.
* \ return V Bandera de sobre flujo. 
*/
int Bandera (int Rd, int Rn, int Rm);
/** brief Funcion desplazamiento hacia la izquierda ingresando un numero a sumar.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void.
*/
void LSL(unsigned long Rd, unsigned long Rn, int Num);
/** biref Funcion desplazamiento hacia la izquierda con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ return void.
*/
void LSLS(unsigned long Rd, unsigned long Rn);
/** brief Funcion desplazamiento hacia la derecha con un numero a sumar.
* \ param Rd Resultado de la operacion
* \ param Rn Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void 
*/ 
void LSR(unsigned long Rd , unsigned long Rn , int Num);
/** biref Funcion desplazamiento hacia la Derecha con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rn Valor del registro a sumar.
* \ return void.
*/
void LSDS(unsigned long Rd, unsigned long Rn);
/** brief Funcion para rotar.
* \ param Rdn Resultado de la operacion.
* \ param Rm Numero a rotar.
* \ return void 
*/
void ROR(unsigned long Rdn, unsigned long Rm);
/** brief Funcion para desplazar aritmeticamente hacia la derecha con un registro y y un numero.
* \ param Rd Resultado de la operacion.
* \ param Rm Valor del registro a sumar.
* \ param Num Valor a sumar.
* \ return void.
*/
void ASR(unsigned long Rd, unsigned long Rm, int Num);
/** brief Funcion para despalazar aritmeticamente hacia la derecha con dos registros.
* \ param Rd Resultado de la operacion.
* \ param Rm numero a trasladar.
* \ return void.
*/ 
void ASRS(unsigned long Rd, unsigned long Rm);
/** brief Funcion que hace una and de 1 bit y con Rm negado.
* \ param Rd Resultado de la operacion 
* \ param Rm Registro a negar.
* \ return void.
*/ 
void BICS(unsigned lon Rd, unsigned long Rm);

