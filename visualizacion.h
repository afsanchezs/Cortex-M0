#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "flags.h"
#include "decoder.h"
#include "io.h"
/**
*\ brief Funcion para visualizar los registros
*\ param *R Puntero que señala la posicion de los registros almacenados.
*\ param  *Banderas Corresponde a las banderas Cero, Negativo, Acarreo y Sobreflujo.
*\ return void 
*/
void visualizacion_registro(uint32_t *R, uint32_t *B, instruction_t instruction);
