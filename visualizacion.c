#include "visualizacion.h"
#define PC 15
void visualizacion_registro(uint32_t *R, uint32_t *B, instruction_t instruction)
{
	char op;
	uint8_t data;	
	uint32_t i;			 	// i es equivalente a un contador// 		
	initscr();				/* Inicia modo curses */
	curs_set(0);				/* Cursor Invisible */
	raw();					/* Activa modo raw */
	keypad(stdscr, TRUE);			/* Obtener F1, F2, etc */
	noecho();				/* No imprimir los caracteres leidos */
	start_color();				/* Permite manejar colores */	
	init_pair(1, COLOR_BLACK, COLOR_WHITE);	/* Pair 1 -> Texto verde fondo Negro */	
	bkgd(COLOR_PAIR(1));
	attron(COLOR_PAIR(1));			/* Activa el color verde para el texto y negro para el fondo Pair 1*/	
	move(1,32);				/* Mueve el cursor a la posición y=2, x=3*/	
	printw("EMULADOR CORTEX M0");	
	move(3,15);
	printw("Registros");	/* Se coloca un Titulo para indicar donde están los registros */
	for (i=0;i<=11;i++)
		{
			move((5+i),3);		
			printw("R%d=%x",i,R[i]);  	   // Linea del codigo que muestra el registro ingresado// 
		}
	move(3,60);
	printw("Banderas");	/* Se coloca un Titulo para indicar donde están los valores de las B */
	move(5,63);
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
	if (instruction.op2_type=='N')
	{
	printw("%s %c%d         ",instruction.mnemonic,instruction.op1_type,instruction.op1_value,instruction.op2_type,instruction.op2_value);
	}
	if (instruction.op3_type=='N')
	{
	printw("%s %c%d,%c%d     ",instruction.mnemonic,instruction.op1_type,instruction.op1_value,instruction.op2_type,instruction.op2_value);
	}
	else
	{
	printw("%s %c%d,%c%d,%c%d",instruction.mnemonic,instruction.op1_type,instruction.op1_value,instruction.op2_type,instruction.op2_value,instruction.op3_type,instruction.op3_value);
	}	
	move(14,58);
	printw("PC:%d",R[PC]);
	move(19,2);	
	printw("R:SRAM");
	move(19,15);	
	printw("P:PUERTOS");
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();				/* Imprime en la pantalla*/
	attroff(COLOR_PAIR(1));			/* DEshabilita los colores Pair 1 */	
	timeout(3000);	
	op=getch();				/* Espera entrada del usuario */
	if((op=='r')||(op=='R'))
	{
	clear();
	move(1,32);				/* Mueve el cursor a la posición y=2, x=3*/	
	printw("EMULADOR CORTEX M0");
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();				/* Imprime en la pantalla*/
	getch();
	}
	if((op=='p')||(op=='P'))
	{
	clear();
	move(1,32);				/* Mueve el cursor a la posición y=2, x=3*/	
	printw("EMULADOR CORTEX M0");
	border( ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE,ACS_ULCORNER, ACS_URCORNER,ACS_LLCORNER, ACS_LRCORNER);
	refresh();				/* Imprime en la pantalla*/
	initIO();	// Inicializa los puertos de E/S
	
	data = 1;
	IOAccess(13, &data, Write);	// Escribe en el registro de interrupciones
								// Habilita la interrupción 0 del puerto B
	data = 0xAA;
	IOAccess(10, &data, Write);	// Escribe 0xAA al DDRB

	data=0xFF;
	IOAccess(11, &data, Write);	// Escribe 0xFF al PORTB

	IOAccess(12, &data, Read);	// Lee el PINB
	
	IOAccess(1, &data, Write);	// Escribe el valor del PINB al PORTA

	changePinPortB(0,HIGH);		// Cambia el valor del Pin a Alto

	showPorts();				// Muestra en pantalla el estado del puerto
	
	getch();
	clear();
	}
	else
	{	
	timeout(3000);
	}	
	endwin();				/* Finaliza el modo curses */		
	return;
}
