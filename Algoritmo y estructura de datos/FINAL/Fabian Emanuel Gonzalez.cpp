#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // para toupper


int main(){
	
	int codigo, turno;
	char movil, pago;
	
	do{	// Se realiza el do while para poder verificar si el usuario ingrese correctamente 'c' o 'm'
	printf("Ingrese el tipo de movil de usuario %i. \n(m)Moto/n(c)Camion\n",i+1);
	fflush(stdin);
	scanf("%c",&movil);
	movil = toupper(movil); //Pasamos a mayuscula para acortar 'c' o 'm'
	printf("movil:%c\n",movil);
	
}while(movil!='M'&&movil!='C');	
			
	printf("Ingrese el turno usuario %i\n(1)Pico\n(2)Normal:\n",i+1);
	scanf("%i",&turno);
	printf("turno:%i\n",turno);

		do{
	printf("Ingrese el tipo de pago del usuario %i\n (s) Sube\n (e) efectivo)\n ",i+1);
	fflush(stdin);
	scanf("%c",&pago);
	pago = toupper(pago); //Pasamos a mayuscula para acortar 'S' o 'E'
	printf("movil:%c\n",pago);
	}while(pago!='S'&&pago!='E');

	
	printf("Ingrese el codigo del usuario %i:\n",i+1);
	scanf("%i",&codigo);
	codigo = toupper(codigo);
	printf("codigo%i\n",codigo);

	
	
	
	return 0;
	
}
