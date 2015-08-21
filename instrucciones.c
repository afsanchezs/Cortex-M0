#include "instrucciones.c"
int ADD(int registro[a], int registro [b], int Num)
{
	registro[a]=registro[b]+Num;
	return registro[a];
}
int ADDS(int registro[a],int registro[b], int registro[c])
{
	registro [a]=registro[b]+registro[c];
	return registro[a];
}
int ORR (int registro[a],int registro[b], int registro[c])
{
	registro [a]=registro[b] | registro[c];
	return registro[a];
}
int EOR (int registro[a],int registro[b], int registro[c])
{
	registro [a]=registro[b] ^ registro[c];
	return registro[a];
}
int MOV (int registro[a],int registro[b])
{
	registro [a]=registro[b];
	return registro[a];
}
int AND (int registro[a],int registro[b], int registro[c])
{
	registro [a]=registro[b] & registro[c];
	return registro[a];
}
