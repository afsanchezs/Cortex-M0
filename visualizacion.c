#include <stdio.h>
#include <ncurses.h>
#include "visualizacion.h"
void visualizacion_registro(unsigned long *R) 
{
	unsigned long i;  // i es equivalente a un contador// 	
	initscr();		/* Inicia modo curses */
	curs_set(0);	/* Cursor Invisible */
	raw();			/* Activa modo raw */
	keypad(stdscr, TRUE);	/* Obtener F1, F2, etc */
	noecho();		/* No imprimir los caracteres leidos */
	start_color();	/* Permite manejar colores */
	init_pair(1, COLOR_GREEN, COLOR_BLACK);	/* Pair 1 -> Texto verde fondo Negro */	
	attron(COLOR_PAIR(1));	/* Activa el color verde para el texto y negro para el fondo Pair 1*/
	move(2, 3);	/* Mueve el cursor a la posición y=2, x=34*/
	for (i=0;i<=11;i++)
		{
			if((i==4)|(i==8))
			{
				printw("\n");
			}
			printw("	Registro[%lu]=%lu\t",i,R[i]);  // Linea del codigo que muestra el registro ingresado// 
		}
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();	/* Imprime en la pantalla*/
	attroff(COLOR_PAIR(1));	/* DEshabilita los colores Pair 1 */
	getch();	/* Espera entrada del usuario */
	endwin();	/* Finaliza el modo curses */		
	return;
}
