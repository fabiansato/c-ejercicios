#include <stdio.h>
#include <locale.h>
#include <conio.h>


/*
9)	Diseñar un programa que cargue un arreglo con veinte valores 
enteros.
Calcular e informar  el promedio de los valores y el producto 
de los mismos.

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int i=0,array[11],acu=0;
	int 
	long int producto;

	
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


getch();
	return 0;

	}
		
		


