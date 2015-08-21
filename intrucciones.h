/**
* \brief Funcion para realizar ADD (Sumar)
* \param registro1 Registro para el resultado
* \param registro2 Registro de ingreso para sumar
* \param registro3 Registro de ingreso para sumar
*/
void ADD(long int *registro1,long int registro2,long int registro3);

/**
* \brief Funcion para realizar la AND 
* \param registro1 Registro para el resultado
* \param registro2 Registro de ingreso para el AND
* \param registro3 Registro de ingreso para el AND
*/
void AND(long int *registro1,long int registro2,long int registro3);

/**
* \brief Funcion para realizar el EOR
* \param registro1 Registro para el resultado
* \param registro2 Registro de ingreso para el EOR
* \param registro3 Registro de ingreso para EOR
*/
void EOR(long int *registro1,long int registro2,long int registro3);


/**
* \brief Funcion para cambiar un registro a otro
* \param registro1 Registro de destino
* \param registro2 Registro de origen
*/
void MOV(long int *registro1,long int registro2);

/**
* \brief Funcion para realizar el ORR
* \param registro1 Registro para el resultado
* \param registro2 Registro de ingreso para el ORR
* \param registro3 Registro de ingreso para el ORR
*/
void ORR(long int *registro1,long int registro2,long int registro3);

/**
* \brief Funcion para realizar SUB (Resta)
* \param registro1 Registro para el resultado
* \param registro2 Registro de ingreso para SUB
* \param registro3 Registro de ingreso para SUB
*/
void SUB(long int *registro1,long int registro2,long int registro3);