#include "visualizacion.h"
#include "flags.h"
void visualizacion_registro(uint32_t *R, uint32_t *B)
{
	uint32_t i;			 // i es equivalente a un contador// 	
	initscr();				/* Inicia modo curses */
	curs_set(0);				/* Cursor Invisible */
	raw();					/* Activa modo raw */
	keypad(stdscr, TRUE);			/* Obtener F1, F2, etc */
	noecho();				/* No imprimir los caracteres leidos */
	start_color();				/* Permite manejar colores */
	init_pair(1, COLOR_GREEN, COLOR_BLACK);	/* Pair 1 -> Texto verde fondo Negro */	
	attron(COLOR_PAIR(1));			/* Activa el color verde para el texto y negro para el fondo Pair 1*/
	move(2, 3);				/* Mueve el cursor a la posición y=2, x=3*/
	printw("\t\t\t\t   Registros\n\n");	/* Se coloca un Titulo para indicar donde están los registros */
	for (i=0;i<=11;i++)
		{
			if((i==2)|(i==4)|(i==6)|(i==8)|(i==10) ) /*Indica que cada 3 registros realice un salto de linea*/
			{
				printw("\n");
			}
			printw("	Registro[%d]=%d\t",i,R[i]);  	   // Linea del codigo que muestra el registro ingresado// 
		}
	printw("\n\n\t\t\t\t   Banderas\n\n");	/* Se coloca un Titulo para indicar donde están los valores de las B */
	printw("\tN=%d\t\t    Z=%d\t\t     C=%d\t\t    V=%d",B[0],B[1],B[2],B[3]);  /*Se muestran las B en la interfaz*/
//	printw("%s",*instructions);	
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();				/* Imprime en la pantalla*/
	attroff(COLOR_PAIR(1));			/* DEshabilita los colores Pair 1 */
	getch();				/* Espera entrada del usuario */
	endwin();				/* Finaliza el modo curses */		
	return;
}
