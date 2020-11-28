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
	
	int i=0,array[20],suma=0,prom=0; 
	long int sub=1;

	
	for (i=1;i<=20;i++)		{
		array[i]=i;
		printf("Ingrese un número entero:\n");
		scanf("%d",&array[i]);
		sub=sub*array[i];
		suma=suma+array[i];
			}

	prom=suma/20;
	
	printf("El promedio de los arrays es %d\n",prom);
	printf("El producto total de los arrays es %d\n",sub);
	getch();
	return 0;

	}
		
		


