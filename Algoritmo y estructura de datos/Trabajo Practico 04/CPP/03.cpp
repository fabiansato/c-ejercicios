#include <stdio.h>
#include <locale.h>
#include <conio.h>

/* 3)	Lea 10 n�meros por teclado,
almac�nelos en un array y muestre la suma,
 resta, multiplicaci�n y divisi�n de todos. 
*/

int main() {
		setlocale (LC_CTYPE,"spanish");

	int i=0,array[10],suma=0,resta=0,multi=1,division=0;
	for (i=1;i<=10;i++)
		{
		array[i]=i;
		printf("Ingrese un n�mero entero:\n");
		scanf("%d",&array[i]);
		suma=suma+array[i];
		resta=resta-array[i];
		multi=multi*array[i];
		division=division/array[i];
				}
		printf("La suma total es %d, la resta total es %d, la multiplicacion es %d, la division es %d",suma,resta,multi,division);		
		getch();
	}

