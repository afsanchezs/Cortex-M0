#include <stdio.h>
#include "visualizacion.h"
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main(void)
{
	int registro[]={0,1,2,3,4,5,6,7,8,9,10,11},R, i, N, Z, C, V, *Bn, *Bz, *Bc, *Bv;
	Bn=&N; Bz=&Z; Bc=&C; Bv=&V; R=&registro[];
	visualizacion_registro(registro[]);
	printf("OPERACIONES DISPONIBLES: \n 1.ADD \n 2.ADDS\n 3.ORR \n 4.EOR\n 5.MOV\n 6.AND\n 7.SUB");
	scanf("%d",&i);
	switch (i)
	{
		case 1:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
			printf("ingrese el numero con el que desea operar");
			scanf("%d",&num);
        		c=ADD(registro[j],registro[k],num);   /*"llame la fución"*/
        		registro[j]=c;                            
		break;
		case 2:
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
        		c=ADDS(registro[j],registro[k]);  /* "llame la fución"*/
        		registro[j]=c;                            
		break;
		case 3:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
        		c=ORR(registro[j],registro[k]);   /*"llame la fución"*/
        		registro[j]=c;                            
		break;
		case 4: 
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
        		c=EOR(registro[j],registro[k]);   /*"llame la fución"*/
        		registro[j]=c;                            
		break;
		case 5:
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
        		c=MOV(registro[j],registro[k]);   /*"llame la fución"*/
        		registro[j]=c;                            
		break;
		case 6:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
			c=AND(registro[j],registro[k]);   /* "llame la fución"*/
			 registro[j]=c;                            
        	break;
		case 7:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%d",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%d",&k);
			c=SUB(registro[j],registro[k]);   "llame la fución"
        		registro[j]=c;                            
			printf("el resultado es:"%d",c");
        	break;
	}
	return 0;
}
