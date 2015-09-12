/**
* \brief BEQ Salto si es igual
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BEQ(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BNE Salto si es diferente
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BNE(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BCS Salto si es mayor o igual (sin signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BCS(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BCC Salto si es menor (sin signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BCC(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BMI Salto si es negativo
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BMI(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BPL Salto si es positivo
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BPL(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BVS Salto si hay sobreflujo
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BVS(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BVC Salto si no hay sobreflujo
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BVC(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BHI Salto si es mayor (sin signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indicativo si se cumple el salto o no
*/ 
char BHI(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BLS Salto si es menor o igual (sin signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BLS(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BGE Salto si es mayor o igual (con signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BGE(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BLT Salto si es menor (con signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BLT(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BGT Salto si es mayor (con signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BGT(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BLE Salto si es menor o igual (con signo)
* \param *Banderas Puntero para el registro de las banderas
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BLE(char *Banderas,unsigned long *PC,unsigned long Posicion);
/**
* \brief BAL Salto sin condicion, de cualquier forma
* \param *PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return Indica sí hay salto
*/ 
char BAL(unsigned long *PC,unsigned long Posicion);
/**
* \brief BL Salto guardando posicion instruccion siguiente en LR
* \param *PC Puntero a el registro PC 
* \param Posicion Siguiente posicion
* \return void
*/ 
void BL(unsigned long *PC,unsigned long Posicion); 
/**
* \brief BX Salta a la posicion guardada en LR
* \param *PC Puntero a el registro PC
* \return void
*/ 
void BX(unsigned long *PC);
