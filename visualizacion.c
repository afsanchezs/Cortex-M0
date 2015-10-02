#include "visualizacion.h"
void visualizacion_registro(uint32_t *R, uint32_t *B, instruction_t instruction)
{
	uint32_t i;			 	// i es equivalente a un contador// 	
/*	char T1,T2,T3;
	int V1,V2,V3;
	OP=instruction.mnemonic;
	T1=instruction.op1_type;
	T2=instruction.op2_type;
	T3=instruction.op3_type;
	V1=instruction.op1_type;
	V2=instruction.op2_type;
	V3=instruction.op3_type;*/	
	initscr();				/* Inicia modo curses */
	curs_set(0);				/* Cursor Invisible */
	raw();					/* Activa modo raw */
	keypad(stdscr, TRUE);			/* Obtener F1, F2, etc */
	noecho();				/* No imprimir los caracteres leidos */
	start_color();				/* Permite manejar colores */	
	init_pair(1, COLOR_WHITE, COLOR_BLACK);	/* Pair 1 -> Texto verde fondo Negro */	
	attron(COLOR_PAIR(1));			/* Activa el color verde para el texto y negro para el fondo Pair 1*/
	move(1,32);				/* Mueve el cursor a la posición y=2, x=3*/
	printw("EMULADOR CORTEX M0");	
	move(3,15);
	printw("Registros");	/* Se coloca un Titulo para indicar donde están los registros */
	for (i=0;i<=11;i++)
		{
			move((5+i),3);		
			printw("R%d=%d",i,R[i]);  	   // Linea del codigo que muestra el registro ingresado// 
		}
	move(3,60);
	printw("Banderas");	/* Se coloca un Titulo para indicar donde están los valores de las B */
/*	move(5,63);
	printw("N=%d",B[0]);
	move(6,63);
	printw("Z=%d",B[1]);
	move(7,63);
	printw("C=%d",B[2]);
	move(8,63);
	printw("V=%d",B[3]);
	move(10,61);
	printw("Proceso");
	move(12,58);
	if(instruction.op3_type=='R')
	{
	printw(" %s%d,%s%d,%s%d",T1,V1,T2,V2,T3,V3);
	}*/
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();				/* Imprime en la pantalla*/
	attroff(COLOR_PAIR(1));			/* DEshabilita los colores Pair 1 */
	getch();				/* Espera entrada del usuario */
	endwin();				/* Finaliza el modo curses */		
	return;
}
