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
	unsigned long registro[]={0,1,2,3,4,5,6,7,8,9,10,11},*Banderas,lines,contador=0,*R;
	FILE* fp;
	R=registro;
	//------- No modificar ------//	
		int i, num_instructions;
		ins_t read;
		char** instructions;
		instruction_t instruction;
	
		num_instructions = readFile("code.txt", &read);
		if(num_instructions==-1)
			return 0;
	
		if(read.array==NULL)
			return 0;	
	
		instructions = read.array; /* Arreglo con las instrucciones */
	//---------------------------//	
	fp = fopen("code.txt", "r");
	lines = countLines(fp)-1;
		//------- No modificar ------//	
		/* Libera la memoria reservada para las instrucciones */
		for(i=0; i<num_instructions; i++){
			free(read.array[i]);
		}	
		free(read.array);
		//---------------------------//
	while (contador>lines)
	{	
		visualizacion_registro(R,Banderas);
		contador++;
		
	}
	/* Ejemplo de uso 
		Llama la función que separa el mnemonico y los operandos
		Llama la instrucción que decodifica y ejecuta la instrucción
	*/
	// Esto debe ser ciclico para la lectura de todas las instrucciones, de acuerdo
	// al valor del PC (Program Counter)
	instruction = getInstruction(instructions[0]); // Instrucción en la posición 0
	decodeInstruction(instruction); // Debe ser modificada de acuerdo a cada código



	//------- No modificar ------//	
	/* Libera la memoria reservada para las instrucciones */
	for(i=0; i<num_instructions; i++){
		free(read.array[i]);
	}	
	free(read.array);
	//---------------------------//
	return 0;
}
