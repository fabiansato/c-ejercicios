#include <stdio.h>
#include <locale.h>
#include <conio.h>


/*	
5)	 Escribir un programa que lea 10 números por teclado
y los cargue en un vector. Luego lea un número  más e
indique si  está entre los anteriores. 

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int i=0,array[11],num=0,resultado=0,igual=0;

	int primeraVez = 1;//Esta es la bandera
	int menorValor = 0, mayorvalor = 0;
	
	for (i=1;i<=10;i++)		{
		array[i]=i;
		printf("Ingrese un número entero:\n");
		scanf("%d",&array[i]);
				}
	printf("Ingrese el numero a comparar:\n");
	scanf("%d",&num);

	for (i=1;i<=10;i++)		{
		igual=array[i];
		if (igual==num){
		printf("El numero en la posicion %d es\n igual al numero a comparar\n",i);
}
		}
			
getch();
	return 0;

		
				}

	
