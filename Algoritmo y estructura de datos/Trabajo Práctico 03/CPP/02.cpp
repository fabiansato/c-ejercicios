#include<conio.h>
#include<stdio.h>

/* 
2- REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA 
PARA MOSTRAR POR PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.
 */


void intercambio(int, int);
main()
{
	
	
	int num1, num2;
	
		printf("Ingrese primer numero\n");	
		scanf("%i",&num1);
		printf("Ingrese segundo numero:\n");	
		scanf("%i",&num2);
			
	intercambio(num1,num2);
	getch();
	return 0;
}

void intercambio(int num1, int num2)
{
int aux;
aux=num2;
num2=num1;
num1=aux;
printf("Num1 ahora vale %i y Num2 ahora vale %i",num1,num2);
}

