#include <stdint.h>
#include <stdio.h>
#include <ncurses.h>
#include "flags.h"
/**
*\ brief Funcion para visualizar los registros
*\ param *R Puntero que señala la posicion de los registros almacenados.
*\ param  *Banderas Corresponde a las banderas Cero, Negativo, Acarreo y Sobreflujo.
*\ return void 
*/
void visualizacion_registro(uint32_t *R, uint32_t *B);
