#include<stdio.h>
#include<conio.h>

/*
4-	CREAR UN PROGRAMA QUE CONTENGA UNA FUNCIÓN 
LLAMADA COPIARVECTOR() QUE RECIBA DOS VECTORES
Y EL TAMAÑO DE LOS MISMOS (DEBEN SER DEL MISMO TAMAÑO)
Y QUE CONSIGA COPIAR EN EL SEGUNDO VECTOR
EL CONTENIDO DEL PRIMERO. 
*/

void copiarvector(int vec1[],int vec2[]); //prototipo

int main()
{
	int i, vec1[5]={1,2,3,4,5},vec2[5]={6,7,8,9,10}; 


	printf("Ahora mostraremos los valores de los vectores antes de realizar los cambios:\n");
	
	for (i=0;i<5;i++)
	{
		printf("Vector 1 Posicion [%d] = %d\n",i,vec1[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("Vector 2 Posicion [%d] = %d\n",i,vec2[i]);
	}

	copiarvector(vec1,vec2);	
	printf("\n-----------\nAhora mostraremos los valores de los vectores\n una vez intercambiado sus valores internos:\n-----------\n");
	
	for (i=0;i<5;i++)
	{
		printf("Vector 1 Posicion [%d] = %d\n",i,vec1[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("Vector 2 Posicion [%d] = %d\n",i,vec2[i]);
	}
 //llamada de la función

getch();

} //fin del main

void copiarvector(int vec1[], int vec2[])  // definicion de la funcion
{
	int i,aux[5];
	for (i=0;i<5;i++)
	{
		aux[i]=vec1[i];
		vec1[i]=vec2[i];
		vec2[i]=aux[i];
	}
}// fin de la funcion

