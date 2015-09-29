#include "decoder.h"
void decodeInstruction(instruction_t instruction,uint32_t *R, uint32_t Banderas)
{
	if( strcmp(instruction.mnemonic,"ADDS") == 0 ){
		if (instruction.op3_type=='R')
		{
			ADDS(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
		}
		else
		{
			ADD(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
		}		
		// instruction.op1_value --> Valor primer operando
		// instruction.op1_type  --> Tipo primer operando (R->Registro #->Numero N->Ninguno)
		// ... Igual para los otros operandos
	}
	if(strcmp(instruction.mnemonic,"ORR")==0)
	{	
		ORR(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"EOR")==0)
	{
		EOR(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"MOV")==0)
	{
		MOV(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"AND")==0)
	{
		AND(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"SUB")==0)
	{
		SUB(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"LSLS")==0)
	{
		if(instruction.op2_type=='R')
		{
			LSLS(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
		}
		else 
		{
			LSL(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
		}
	}
	if(strcmp(instruction.mnemonic,"LSRS")==0)
	{
		if(instruction.op3_type=='R')
		{
			LSRS(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
		}
		else
		{	
			LSR(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);	
		}
	}
	if(strcmp(instruction.mnemonic,"ROR")==0)
	{
		ROR(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"ASRS")==0)
	{
		if(instruction.op3_type=='R')
		{
			ASR(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
		}
		else
		{
			ASRS(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
		}
	}
	if(strcmp(instruction.mnemonic,"BICS")==0)
	{
		BICS(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"CMN")==0)
	{
		CMV(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"CMPS")==0)
	{
		if(instruction.op2_type=='R')
		{
			CMPS(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
		}
		else
		{
			CMP(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
		}
	}
	if(strcmp(instruction.mnemonic,"MUL")==0)
	{
		MUL(&R[instruction.op1_value],&R[instruction.op2_value],&R[instruction.op3_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"MVN")==0)
	{
		MVN(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"NOP")==0)
	{
		NOP(R);
	}
	if(strcmp(instruction.mnemonic,"REV")==0)
	{
		REV(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"REV16")==0)
	{
		REV16(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
	if(strcmp(instruction.mnemonic,"REVSH")==0)
	{
		REVSH(&R[instruction.op1_value],&R[instruction.op2_value],R,Banderas);
	}
}


instruction_t getInstruction(char* instStr)
{
	instruction_t instruction;
	char* split = (char*)malloc(strlen(instStr));
	int num=0;
	
	strcpy(split, instStr);
	/* Obtiene el mnemonico de la instrucción */	
	split = strtok(split, " ,");	
	strcpy(instruction.mnemonic, split);
	
	/* Separa los operandos */	
	while (split != NULL)
	{
		switch(num){
			case 1:
				instruction.op1_type  = split[0];
				instruction.op1_value = (uint32_t)strtol(split+1, NULL, 0);
				break;
			
			case 2:
				instruction.op2_type  = split[0];
				instruction.op2_value = (uint32_t)strtol(split+1, NULL, 0);
				break;
			
			case 3:
				instruction.op3_type  = split[0];
				instruction.op3_value = (uint32_t)strtol(split+1, NULL, 0);			
				break;
		}
		
		split = strtok(NULL, " ,.");
		num++;
	}	
	
	if(num==3){
		instruction.op3_type  = 'N';
		instruction.op3_value = 0;					
	}
	
	free(split);	
	
	return instruction;
}

int readFile(char* filename, ins_t* instructions)
{
	FILE* fp;	/* Puntero a un archivo  */
	int lines;	/* Cantidad de líneas del archivo */
	int line=0;	/* Línea leida */
	char buffer[50]; /* Almacena la cadena leida */
		
	fp = fopen(filename, "r");	/* Abrir el archivo como solo lectura */
	if( fp==NULL )
		return -1;	/* Error al abrir el archivo */
	
	lines = countLines(fp)-1;	/* Cantidad de líneas*/
	
	/* Asignación dinámica de memoria para cada instrucción */
	instructions->array = (char**)malloc(lines*sizeof(char*));
	while ( fgets(buffer, 50, fp) != NULL && line<lines ){
        instructions->array[line] = (char*)malloc(strlen(buffer)*sizeof(char));
		strcpy(instructions->array[line], buffer);
		line++;
 	}

	fclose(fp);	/* Cierra el archivo */

	return lines;
}	


int countLines(FILE* fp)
{
	int lines=0;
	int ch;	
	
	while(!feof(fp))
	{
	  ch = fgetc(fp);
	  if(ch == '\n')
		lines++;
	}
	rewind(fp);
	
	return lines;
}
