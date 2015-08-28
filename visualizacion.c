#include "visualizacion.h"
void visualizacion_registro(unsigned long *R) 
{
	int i;
	for (i=0;i<=11;i++)
		{
			printf("Registro[%d]=%d\t",i,R[i]);
		}
	return;
}
