#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "visualizacion.h"
#include "instrucciones.h"
#include "decoder.h"
#include "flags.h"
#include "SRAM.h"
#include "io.h"
#define PC 15
#define SP 14
/**
*\ Arreglo registro[] Datos recibidos del microcontrolador.
*\ Variable i Contador.
*/
int main()
{
	uint32_t registro[16],Banderas[4]={0,0,0,0},contador=0,*R,*B;
	uint8_t sram[64], *RAM;
	int i,num_instructions;
	char** instructions;
	ins_t read;
	instruction_t instruction;
	R=registro;
	B=Banderas;
	RAM=sram;
	for (i=0;i<=16;i++)
	{	
		registro[i]=0;	
	}
	registro[SP]=64;
	for (i=0;i<=64;i++)
	{	
		sram[i]=i;	
	}
		num_instructions = readFile("code.txt", &read);
		if(num_instructions==-1)
			return 0;	
		if(read.array==NULL)
			return 0;	
		instructions = read.array; //Arreglo con las instrucciones
	while (contador<num_instructions)
	{
		instruction = getInstruction(instructions[R[PC]]); // Instrucción en la posición 0
		decodeInstruction(instruction,R,B,RAM); // Debe ser modificada de acuerdo a cada código
		visualizacion_registro(R,B,RAM,instruction);
		contador++;
		
	}
		for(i=0; i<num_instructions; i++){
			free(read.array[i]);
		}	
		free(read.array);
	return 0;
}
