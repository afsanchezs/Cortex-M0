#include "SRAM.h"
uint8_t BitCount(uint8_t  registers_list[])
{
	uint8_t i,cont=0;
	for(i=0;i<=15;i++)
	{
		if(registers_list[i]!=0)
		{
			cont++;
		}		
	
	}
return cont;

}
void PUSH(uint32_t *R,uint8_t *RAM,uint8_t  registers_list[])
{
	uint8_t address,i,H;
	H=(BitCount(registers_list));
	address=R[SP]-(4*(H));
	for(i=0;i<=15;i++)
	{
		if (registers_list[i]==1)
		{
			RAM[(i*4)]=(uint8_t)(R[i]);
			RAM[(i*4)+1]=(uint8_t)(R[i]>>8);
			RAM[(i*4)+2]=(uint8_t)(R[i]>>16);
			RAM[(i*4)+3]=(uint8_t)(R[i]>>24);
		}
	}
	R[SP]=R[SP]-4*(BitCount(registers_list));
	R[PC]++;
}
void POP(uint32_t *R,uint8_t *RAM,uint8_t  registers_list[])
{
	uint8_t address;
	uint32_t i=15;
	uint8_t H;
	H=(BitCount(registers_list));
	address=R[SP]-(4*(H));
	for(i=15;i<=0;i--)
	{
		if(registers_list[i]==1)
		{
			R[i]=RAM[address];
		}
	address-=4;
	}
	R[SP]=R[SP]+4*(BitCount(registers_list));
	R[PC]++;
}

void LDR(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=(RAM[Rn+Rm])+(RAM[Rn+Rm+1]<<8)+(RAM[Rn+Rm+2]<<16)+(RAM[Rn+Rm+3]<<24);
	R[PC]++;
}

void LDRB(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=RAM[Rn+Rm];
	R[PC]++;
}

void LDRH(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=RAM[Rn+Rm]+(RAM[Rn+Rm+1]<<8);	
	R[PC]++;
}

void LDRSB(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=(uint32_t)(RAM[Rn+Rm]);
	R[PC]++;
}

void LDRSH(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=(uint32_t)(RAM[Rn+Rm])+(uint32_t)(RAM[Rn+Rm+1]<<8);
	R[PC]++;
}

void STR(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{	
	uint8_t address,offset;
	offset=(uint8_t)(Rn+Rm);
	address=offset;
	RAM[(uint8_t)(address<<2)]=RAM[(uint8_t)(*Rd)];
	RAM[(uint8_t)((address<<2)+1)]=RAM[(uint8_t)((*Rd)+1)];
	RAM[(uint8_t)((address<<2)+2)]=RAM[(uint8_t)((*Rd)+2)];
	RAM[(uint8_t)((address<<2)+3)]=RAM[(uint8_t)((*Rd)+3)];
	R[PC]++;
}

void STRB(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=Rn+Rm;	
	RAM[(uint8_t)(*Rd<<2)]=(uint8_t)(*Rd);
	R[PC]++;
}

void STRH(uint32_t *R,uint32_t *Rd,uint32_t Rn,uint32_t Rm,uint8_t *RAM)
{
	*Rd=Rn+Rm;	
	RAM[(uint8_t)(*Rd<<2)]=(uint8_t)(*Rd);
   	RAM[(uint8_t)((*Rd<<2)+1)]=(uint8_t)(*Rd>>8);
	R[PC]++;
}
