#include <stdio.h>
#include "visualizacion.h"
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main(void)
{
	int registro[]={0,1,2,3,4,5,6,7,8,9,10,11}, i;
	visualizacion_registro(registro[]);
	return 0;
}
