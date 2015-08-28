#include "visualizacion.h"
void visualizacion_registro(unsigned long *R) 
{
	int i;  // i es equivalente a un contador// 
	for (i=0;i<=11;i++)
		{
			printf("Registro[%d]=%d\t",i,R[i]);  // Linea del codigo que muestra el registro ingresado// 
		}
	return;
}
