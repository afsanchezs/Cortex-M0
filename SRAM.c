#include <stdint.h>
#include "SRAM.h"
#include <stdio.h>

uint8_t BitCount(uint8_t  registers_list)
{
	uint32_t i,cont=0;
	for(i=0;i<=15;i++)
	{
		if(registers_list[i]!=0)
		{
			cont++;
		}		
	
	}
return cont;

}
void PUSH(uint32_t *SP,uint32_t *R,uint32_t *RAM)
{
	uint32_t address;
	uint32_t i=0;
	for(i=0;i<=15;i++)
	{
		if (registers[i]==1)
		{
			RAM[address][4]=R[i];
		}
	address-=4;

	}
	SP=SP+4*(bitCount);

}*/
