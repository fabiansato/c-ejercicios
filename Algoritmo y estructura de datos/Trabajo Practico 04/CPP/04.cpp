#include <stdio.h>
#include <locale.h>
#include <conio.h>


/* 4)	Escribir un programa que pida 10 n�meros enteros por teclado,
los cargue en un vector  y que imprima por pantalla: 

i. Cu�ntos de esos n�meros son pares. 
ii. Cu�l es el valor del n�mero m�ximo. 
iii. Cu�l es el valor del n�mero m�nimo. 

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es espa�ol
	
	int i=0,array[10],pares=0;

	int primeraVez = 1;//Esta es la bandera
	int menorValor = 0, mayorvalor = 0;
	
	for (i=1;i<=10;i++)		{
		array[i]=i;
		printf("Ingrese un n�mero entero:\n");
		scanf("%d",&array[i]);
		if (array[i]%2==0){
			pares++;}
			if (primeraVez == 1){
			menorValor = array[i];
			primeraVez = 0;
			} else if (array[i] < menorValor){
			menorValor = array[i];
			}
			if (primeraVez == 1){
			mayorvalor = array[i];
			primeraVez = 0;
			} else if (array[i] > mayorvalor){
			mayorvalor = array[i];
				}		
		}

printf("\nMenor valor = %d\n\n",menorValor);
printf("\nMayor valor = %d\n\n",mayorvalor);
printf("\nLa cantidad de numeros pares es = %d\n\n",pares);
getch();
	return 0;

	}
		
		


