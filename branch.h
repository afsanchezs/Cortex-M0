#include <stdint.h>
/**
* \brief Funcion que realiza un salto si es igual
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BEQ(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que reliza un salto si es diferente
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BNE(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que reliza un salto si es mayor o igual (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BCS(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcin que reliza un salto si es menor (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BCC(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es negativo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BMI(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es positivo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BPL(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si hay sobreflujo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BVS(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si no hay sobreflujo
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BVC(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es mayor (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BHI(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es menor o igual (sin signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLS(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que genera un salto si es mayor o igual (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BGE(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es menor (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLT(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto si es mayor (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BGT(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realizaun un salto si es menor o igual (con signo)
* \param Banderas Puntero para el registro de las banderas
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void
*/ 
void BLE(uint32_t *B,uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto sin condicion, de cualquier forma
* \param PC Puntero a el registro PC
* \param Posicion Siguiente posicion
* \return void.
*/ 
void BAL(uint32_t *PC,uint32_t Posicion);
/**
* \brief Funcion que realiza un salto guardando posicion instruccion siguiente en LR
* \param PC Puntero a el registro PC 
* \param Posicion Siguiente posicion
* \return void
*/ 
void BL(uint32_t *PC,uint32_t Posicion); 
/**
* \brief Funcion que realiza un salto a la posicion guardada en LR
* \param *PC Puntero a el registro PC
* \return void
*/ 
void BX(uint32_t *PC);
