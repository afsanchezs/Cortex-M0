#include <stdint.h>
#include "SRAM.h"
#include <stdio.h>

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
void PUSH(uint8_t *SP,uint32_t *R,uint8_t *RAM,uint8_t  registers_list[])
{
	uint8_t address;
	uint32_t i=0;
	uint8_t H;
	H=(BitCount(registers_list));
	address=*SP+(4*(H));
	for(i=0;i<=15;i++)
	{
		if (registers_list[i]==1)
		{
			RAM[address]=R[i];
		}
	address+=4;

	}
	SP=SP-4*(BitCount(registers_list));

}
