#include "instrucciones.c"
int ADD(long int registro[a], long int registro [b], int Num)
{
	registro[a]=registro[b]+Num;
	return registro[a];
}
int ADDS(long int registro[a],long int registro[b], int registro[c])
{
	registro [a]=registro[b]+registro[c];
	return registro[a];
}
int ORR (long int registro[a],long int registro[b], int registro[c])
{
	registro [a]=registro[b] | registro[c];
	return registro[a];
}
int EOR (long int registro[a],long int registro[b], int registro[c])
{
	registro [a]=registro[b] ^ registro[c];
	return registro[a];
}
int MOV (long int registro[a],long int registro[b])
{
	registro [a]=registro[b];
	return registro[a];
}
int AND (long int registro[a],long int registro[b], int registro[c])
{
	registro [a]=registro[b] & registro[c];
	return registro[a];
}
