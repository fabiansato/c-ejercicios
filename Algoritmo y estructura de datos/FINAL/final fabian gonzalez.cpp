#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // para toupper


int main(){
	
	int i=0,codigo, turno;
	char movil, pago;
	
	do{	
	printf("Ingrese el tipo de movil de usuario %i. \n(m)Moto/n(c)Camion\n",i+1);
	fflush(stdin);
	scanf("%c",&movil);
	movil = toupper(movil);
	printf("movil:%c\n",movil);
}while(movil!='M');	
			
	printf("Ingrese el turno usuario %i\n(1)Pico\n(2)Normal:\n",i+1);
	scanf("%i",&turno);
	printf("turno:%i\n",turno);

	printf("Ingrese el tipo de pago del usuario %i\n (s) Sube\n (e) efectivo)\n ",i+1);
	fflush( stdin );
	scanf("%c",&pago);
	toupper(pago);
	printf("movil:%c\n",pago);
	
	
	printf("Ingrese el codigo del usuario %i:\n",i+1);
	scanf("%i",&codigo);
		codigo = toupper(codigo);
	printf("codigo%i\n",codigo);
	
	
	
	
	return 0;
	
}
