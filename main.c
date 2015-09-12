#include <stdio.h>
#include "visualizacion.h"
#include "instrucciones.h"
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main()
{
	unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11},*R,*N,*Z,*C,*V;
	N=0;Z=0;C=0;V=0;	// Se inicializan las banderas es estos valores para corroborar el funcionamiento de la interfaz
	R=registro;
	visualizacion_registro(R,N,Z,C,V);
	return 0;
}
