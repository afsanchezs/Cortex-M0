#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "visualizacion.h"
#include "instrucciones.h"
#include "decoder.h"
#include "flags.h"
#define PC 15
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main()
{
	uint32_t registro[16]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},Banderas[4]={0,0,0,0},contador=0,*R,*B;
	int i,num_instructions;
	char** instructions;
	ins_t read;
	instruction_t instruction;
	R=registro;
	B=Banderas;
		num_instructions = readFile("code.txt", &read);
		if(num_instructions==-1)
			return 0;	
		if(read.array==NULL)
			return 0;	
		instructions = read.array; //Arreglo con las instrucciones
	while (contador<10)
	{
		instruction = getInstruction(instructions[PC]); // Instrucción en la posición 0
		decodeInstruction(instruction, registro, B); // Debe ser modificada de acuerdo a cada código
		visualizacion_registro(R,B,instruction);
		contador++;
		
	}
		for(i=0; i<num_instructions; i++){
			free(read.array[i]);
		}	
		free(read.array);
	return 0;
}
