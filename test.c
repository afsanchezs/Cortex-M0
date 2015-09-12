-#include <stdio.h>
-#include "visualizacion.h"
-#include "instrucciones.h"
-int main()
{
  unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11},*Rd,*Rn,Rm,Num,Op;
  Rd=registro;
  printf("OPERACIONES DISPONIBLES: \n 1.ADD \n 2.ADDS\n 3.ORR \n 4.EOR\n 5.MOV\n 6.AND\n 7.SUB");
  scanf("%lu",&Op);
  switch (Op)
  {
  case 1:
	        	printf("ingrese el numero del registro en el que desea guardar");
	 	        scanf("%lu",&Rd);
	        	printf("ingrese el numero del registro con el que desea operar");
       		  scanf("%lu",&Rn);
            printf("ingrese el numero con el que desea operar");
		    	  scanf("%lu",&Num);
          	ADD(Rd,Rn,Num);
  break;
  case 2:
        		printf("ingrese el numero del registro en el que desea guardar");
      			scanf("%lu",&Rd);
			      printf("ingrese el numero del registro con el que desea operar");
		      	scanf("%lu",&Rn);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rm);
        		ADDS(Rd,Rn,Rm);                             
		break;
		case 3:
			      printf("ingrese el numero del registro en el que desea guardar");
			      scanf("%lu",&Rd);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rn);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rm);
        		ORR(Rd,Rn,Rm); 
                           
		break;
		case 4: 
        		printf("ingrese el numero del registro en el que desea guardar");
			      scanf("%lu",&Rd);
		      	printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rn);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rm);
        		EOR(Rd,Rn,Rm);                             
		break;
		case 5:
        		printf("ingrese el numero del registro en el que desea guardar");
			      scanf("%lu",&Rd);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rn);
        	  MOV(Rd,Rn);                              
		break;
		case 6:
			      printf("ingrese el numero del registro en el que desea guardar");
			      scanf("%lu",&Rd);
			      printf("ingrese el numero del registro con el que desea operar");
		        scanf("%lu",&Rn);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rm);
			      AND(Rd,Rn,Rm);  
			                            
    break;
		case 7:
			      printf("ingrese el numero del registro en el que desea guardar");
			      scanf("%lu",&Rd);
			      printf("ingrese el numero del registro con el que desea operar");
		        scanf("%lu",&Rn);
			      printf("ingrese el numero del registro con el que desea operar");
			      scanf("%lu",&Rm);
			      SUB(Rd,Rn,Rm); 
    break;
	}
	return 0;
}
