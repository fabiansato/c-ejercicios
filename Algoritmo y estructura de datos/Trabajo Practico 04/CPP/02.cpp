#include<stdio.h>
#include<conio.h>

/* 2)	Escribir un programa que lea un vector 
de 10 elementos. Deberá imprimir el mismo vector
 por pantalla pero invertido. Ejemplo: 
 dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería 
 imprimir 10 9 8 7 6 5 4 3 2 1.
 */

int main() {

	int i=0,array[10];
	for (i=1;i<=10;i++)
		{
		array[i]=i;
		printf("%d\n",array[i]);
				}
				
	printf("\n");			
	for (i=10;i>=1;i--)
		{
		array[i]=i;
		printf("%d\n",array[i]);
				}
		getch();
}

