#include<stdio.h>
#include<conio.h>

/* 1- 1)	Rellene un array con los números pares
 comprendidos entre 1 y 100
  y muéstrelos en pantalla en orden ascendente. */
int main() {

	int i=0,array[100];
	for (i=2;i<=100;i=i+2)
		{
		array[i]=i;
		printf("%d\n",array[i]);
		
		}
		getch();
}
