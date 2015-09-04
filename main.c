#include <stdio.h>
#include "visualizacion.h"
#include "instrucciones.h"
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main()
{
	unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11},*R;
	R=registro;
	visualizacion_registro(R);
	return 0;
}
