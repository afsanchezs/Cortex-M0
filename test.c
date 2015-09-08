#include <stdio.h>
#include "visualizacion.h"
#include "instrucciones.h"
int main()
{
	unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11}, i, j, k, num, c;
	printf("OPERACIONES DISPONIBLES: \n 1.ADD \n 2.ADDS\n 3.ORR \n 4.EOR\n 5.MOV\n 6.AND\n 7.SUB");
	scanf("%lu",&i);
	switch (i)
	{
		case 1:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero con el que desea operar");
			scanf("%lu",&num);
        	ADD(&registro[j],registro[k],num); 
        		                            
		break;
		case 2:
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&c);
        		ADDS(&registro[j],registro[k],registro[c]);                             
		break;
		case 3:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&c);
        		ORR(&registro[j],registro[k],registro[c]); 
                           
		break;
		case 4: 
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&c);
        		EOR(&registro[j],registro[k],registro[c]);                             
		break;
		case 5:
        		printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
        	MOV(&registro[j],registro[k]);                              
		break;
		case 6:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&c);
			AND(&registro[j],registro[k],registro[c]);  
			                            
        	break;
		case 7:
			printf("ingrese el numero del registro en el que desea guardar");
			scanf("%lu",&j);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&k);
			printf("ingrese el numero del registro con el que desea operar");
			scanf("%lu",&c);
			SUB(&registro[j],registro[k],registro[c]); 
        	break;
	}
	return 0;
}
