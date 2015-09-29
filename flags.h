#include <stdint.h>
/**
 * \Funcion para cambiar las banderas
 * \param Rd Variable que almacena el resultado de las operaciones
 * \param Rn Primer valor a operar
 * \param Rm Segundo valor a operar
 * \param Banderas Vector donde se almacenara el resultado de la modificacion de las banderas.
 */ 
void BanderaN (uint32_t *Rd, uint32_t *B);
void BanderaZ (uint32_t *Rd, uint32_t *B); 
void BanderaC (uint32_t *Rd, uint32_t *B); 
void BanderaV (uint32_t *Rd, uint32_t Rn, uint32_t Rm, uint32_t *B);
