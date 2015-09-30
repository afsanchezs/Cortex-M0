#include <stdint.h>
/**
 * \Funcion para modificar la bandera de negativo (N)
 * \param Rd Variable que contiene el resultado de las operaciones
 * \param B Punntero en el cual se almacenaran las banderas.
 */ 
void BanderaN (uint32_t *Rd, uint32_t *B);
/**
 * \Funcion para modificar la bandera de cero (Z)
 * \param Rd Variable que contiene el resultado de las operaciones
 * \param B Punntero en el cual se almacenaran las banderas.
 */ 
void BanderaZ (uint32_t *Rd, uint32_t *B);
/**
 * \Funcion para modificar la bandera de carry (C)
 * \param Rd Variable que contiene el resultado de las operaciones
 * \param B Punntero en el cual se almacenaran las banderas.
 */ 
void BanderaC (uint32_t *Rd, uint32_t *B); 
/**
 * \Funcion para modificar la bandera de sobre-flujo (V)
 * \param Rd Variable que contiene el resultado de las operaciones
 * \param Rn Variable con el primer operando.
 * \param Rm Variable con el segundo operando.
 * \param B Punntero en el cual se almacenaran las banderas.
 */ 
void BanderaV (uint32_t *Rd, uint32_t Rn, uint32_t Rm, uint32_t *B);
