#include <stdio.h>
#include "visualizacion.h"
#include "instrucciones.h"
#include "decoder.h"
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main()
{
	unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11},Banderas[4]={0},contador=0,*R,i,num_instructions;
	char** instructions;
	ins_t read;
	instruction_t instruction;
	/*FILE* fp;*/
	R=registro;
	//------- No modificar ------//	
		num_instructions = readFile("code.txt", &read);
/*		if(num_instructions==-1)
			return 0;
	
		if(read.array==NULL)
			return 0;	*/
	
		instructions = read.array;/* Arreglo con las instrucciones */
	//---------------------------//		
	while (contador<num_instructions)
	{
		R[contador]=10;
		instruction = getInstruction(instructions[contador]); // Instrucción en la posición 0
		decodeInstruction(instruction); // Debe ser modificada de acuerdo a cada código
		visualizacion_registro(R,Banderas);
		contador++;
		
	}
/*	fp = fopen("code.txt", "r");
	lines = countLines(fp)-1;*/
		//------- No modificar ------//	
		/* Libera la memoria reservada para las instrucciones */
		for(i=0; i<num_instructions; i++){
			free(read.array[i]);
		}	
		free(read.array);
		//---------------------------//	
	/*instruction = getInstruction(instructions[contador]); // Instrucción en la posición 0
	decodeInstruction(instruction)*/; // Debe ser modificada de acuerdo a cada código
	return 0;
}
