#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
6-	ESCRIBIR UN PROGRAMA QUE CARGUE 100 NÚMEROS ALEATORIAMENTE EN UN VECTOR. 
UTILIZANDO LA FUNCIÓN CONTAR(), INDICAR CUANTOS NÚMEROS PARES HAY EN EL VECTOR
Y CUANTOS IMPARES
*/

void contar(int vec[]); //prototipo

int main()
{
	int i, vec[100];
	
	for (i=0;i<100;i++)
	{
		vec[i]=rand();
		printf("[%d]=%d\n",i,vec[i]);
	}

	contar(vec); //llamada de la función carga

getch();

} //fin del main


void contar(int vec[])  // definicion de la funcion
{
	int i, pares=0,impares=0;
	
for (i=0;i<100;i++)
	{
	if (vec[i]!=0){
	if (vec[i]%2==0){
		pares++;
	}
	else {
		impares++;
	}
	}
	}
printf("\n La cantidad de numeros pares es %d",pares);
printf("\n La cantidad de numeros impares es %d",impares);
getch();
}// fin de la funcion

