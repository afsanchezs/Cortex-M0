#include "decoder.h"
#include "SRAM.h"
#include "flags.h"
#include "branch.h" 
void decodeInstruction(instruction_t instruction,uint32_t *R, uint32_t *B,uint8_t *RAM)
{
	if( strcmp(instruction.mnemonic,"ADDS") == 0 )
	{
		if (instruction.op3_type=='R')
		{
			ADDS(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
		}
		else
		{
			ADD(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
		}		
	}
	if(strcmp(instruction.mnemonic,"ORR")==0)
	{	
		ORR(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"EOR")==0)
	{
		EOR(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"MOVS")==0)
	{
		MOVS(&R[instruction.op1_value],instruction.op2_value,R,B);
	}
	if(strcmp(instruction.mnemonic,"AND")==0)
	{
		AND(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"SUB")==0)
	{
		SUB(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"LSLS")==0)
	{
		if(instruction.op2_type=='R')
		{
			LSLS(&R[instruction.op1_value],R[instruction.op2_value],R,B);
		}
		else 
		{
			LSL(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
		}
	}
	if(strcmp(instruction.mnemonic,"LSRS")==0)
	{
		if(instruction.op3_type=='R')
		{
			LSRS(&R[instruction.op1_value],R[instruction.op2_value],R,B);
		}
		else
		{	
			LSR(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);	
		}
	}
	if(strcmp(instruction.mnemonic,"ROR")==0)
	{
		ROR(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"ASRS")==0)
	{
	/*	if(instruction.op3_type=='R')
		{
			ASR(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
		}
		else
		{ */
			ASRS(&R[instruction.op1_value],R[instruction.op2_value],R,B);
		//}
	}
	if(strcmp(instruction.mnemonic,"BICS")==0)
	{
		BICS(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"CMN")==0)
	{
		CMN(R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"CMP")==0)
	{
		CMP(R[instruction.op1_value],R[instruction.op2_value],R,B);
	}		
	if(strcmp(instruction.mnemonic,"MUL")==0)
	{
		MUL(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}		
	if(strcmp(instruction.mnemonic,"MVN")==0)
	{
		MVN(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"NOP")==0)
	{
		NOP(R);
	}
	if(strcmp(instruction.mnemonic,"REV")==0)
	{
		REV(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"REV16")==0)
	{
		REV16(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"REVSH")==0)
	{
		REVSH(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if (strcmp(instruction.mnemonic,"BEQ")==0)
	{
		BEQ(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BNE")==0)
	{
		BNE(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BCS")==0)
	{
		BCS(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BCC")==0)
	{
		BCC(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BMI")==0)
	{
		BMI(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BPL")==0)
	{
		BPL(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BVS")==0)
	{
		BVS(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BVC")==0)
	{
		BVC(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BHI")==0)
	{
		BHI(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BLS")==0)
	{
		BLS(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BGE")==0)
	{
		BGE(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BLT")==0)
	{
		BLT(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BGT")==0)
	{
		BGT(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BLE")==0)
	{
		BLE(B,R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BAL")==0)
	{
		BAL(R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BL")==0)
	{
		BL(R,instruction.op1_value);
	}
	if (strcmp(instruction.mnemonic,"BX")==0)
	{
		BX(R);
	}
	if (strcmp(instruction.mnemonic,"B")==0)
	{
		SB(R,instruction.op1_value);
	}
	if(strcmp(instruction.mnemonic,"ADCS")==0)
	{
		ADCS(&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"ROR")==0)
	{
		ROR(&R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"TST")==0)
	{
		TST(R[instruction.op1_value],R[instruction.op2_value],R,B);
	}
	if(strcmp(instruction.mnemonic,"LDR")==0)
	{
		LDR(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"LDRB")==0)
	{
		LDRB(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"LDRH")==0)
	{
		LDRH(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"LDRSB")==0)
	{
		LDRSB(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"LDRSH")==0)
	{
		LDRSH(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"STR")==0)
	{
		STR(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"STRB")==0)
	{
		STRB(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"STRH")==0)
	{
		STRH(R,&R[instruction.op1_value],R[instruction.op2_value],R[instruction.op3_value],RAM);
	}
	if(strcmp(instruction.mnemonic,"PUSH")==0)
	{
		PUSH(R,RAM,instruction.registers_list);
	}
	if(strcmp(instruction.mnemonic,"POP")==0)
	{
		POP(R,RAM,instruction.registers_list);
	}	
}
instruction_t getInstruction(char* instStr)
{
	instruction_t instruction=
	{
		.registers_list = {0},
		.op3_type  = 'N',
		.op3_value = 0
		
	};
	char* split = (char*)malloc(strlen(instStr)+1);
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
				if(split[0] == '{'){
					instruction.op1_type  = split[0];
					split++;
					do{
						if(split[0]=='L')
							instruction.registers_list[14] = 1;
						else if(split[0]=='P')
							instruction.registers_list[15] = 1;
						else
							instruction.registers_list[(uint8_t)strtoll(split+1, NULL, 0)] = 1;
							
						split = strtok(NULL, ",");
					}while(split != NULL);
				}else{
					instruction.op1_type  = split[0];
					instruction.op1_value = (uint32_t)strtoll(split+1, NULL, 0);
				}					
				break;
			
			case 2:
				instruction.op2_type  = split[0];
				instruction.op2_value = (uint32_t)strtoll(split+1, NULL, 0);
				break;
			
			case 3:
				instruction.op3_type  = split[0];
				instruction.op3_value = (uint32_t)strtoll(split+1, NULL, 0);			
				break;

		}
		if(split != NULL){
			split = strtok(NULL, " ,.");
			num++;
		}	
	}	
	
	if(instruction.op1_type == 'L'){
		instruction.op1_value = 14;
		instruction.op1_type = 'R';
	}
	
	if(instruction.op1_type == '{'){
		instruction.op1_type = 'P';
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
	
	lines = countLines(fp);	/* Cantidad de líneas*/
	
	/* Asignación dinámica de memoria para cada instrucción */
	instructions->array = (char**)malloc(lines*sizeof(char*));
	while ( fgets(buffer, 50, fp) != NULL && line<lines ){
        instructions->array[line] = (char*)malloc((strlen(buffer)+1)*sizeof(char));
		strcpy(instructions->array[line], buffer);
		line++;
 	}
	
	fclose(fp);	/* Cierra el archivo */

	return lines;
}	


int countLines(FILE* fp)
{
	int lines=0;
	char buffer[50];
	
	while( fgets(buffer, 50, fp) != NULL )
		lines++;
	
	rewind(fp);
	
	return lines;
}
