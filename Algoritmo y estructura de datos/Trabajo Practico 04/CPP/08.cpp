#include <stdio.h>
#include <locale.h>
#include <conio.h>


/* 4)	Escribir un programa que pida 10 números enteros por teclado,
los cargue en un vector  y que imprima por pantalla: 

i. Cuántos de esos números son pares. 
ii. Cuál es el valor del número máximo. 
iii. Cuál es el valor del número mínimo. 

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int i=0,array[11],pares=0, posmayor=0,posmenor=0;

	int primeraVez = 1;//Esta es la bandera
	int menorValor = 0, mayorvalor = 0;
	
	for (i=1;i<=10;i++)		{
		array[i]=i;
		printf("Ingrese un número entero:\n");
		scanf("%d",&array[i]);
	
			if (primeraVez == 1){
			menorValor = array[i];
			primeraVez = 0;
			} else if (array[i] < menorValor){
			menorValor = array[i];
			posmenor=i;
			}
			if (primeraVez == 1){
			mayorvalor = array[i];
			primeraVez = 0;
			} else if (array[i] > mayorvalor){
			mayorvalor = array[i];
			posmayor=i;
				}		
		}

printf("\nMenor valor = %d\n\n",menorValor);
printf("\nMayor valor = %d\n\n",mayorvalor);
printf("\nMenor valor se encuentra en la posicion = %d del vector.\n\n",posmenor);
printf("\nMayor valor se encuentra en la posicion = %d del vector.\n\n",posmayor);

getch();
	return 0;

	}
		
		


