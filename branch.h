/**
* \brief Funcion que realiza un salto si es igual
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BEQ(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que reliza un salto si es diferente
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BNE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que reliza un salto si es mayor o igual (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BCS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcin que reliza un salto si es menor (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BCC(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es negativo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BMI(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es positivo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BPL(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si hay sobreflujo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BVS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si no hay sobreflujo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BVC(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es mayor (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BHI(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es menor o igual (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLS(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que genera un salto si es mayor o igual (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BGE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es menor (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLT(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto si es mayor (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BGT(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realizaun un salto si es menor o igual (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLE(unsigned long *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto sin condicion, de cualquier forma
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BAL(unsigned long *PC,unsigned long Posicion);
/**
* \brief Funcion que realiza un salto guardando posicion instruccion siguiente en LR
* \param PC Puntero a el registro PC 
* \param Posicion Siguiente posicion
* \return void
*/ 
void BL(unsigned long *PC,unsigned long Posicion); 
/**
* \brief Funcion que realiza un salto a la posicion guardada en LR
* \param *PC Puntero a el registro PC
* \return void
*/ 
void BX(unsigned long *PC);
