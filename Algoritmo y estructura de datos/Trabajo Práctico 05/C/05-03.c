#include<stdio.h>
#include<conio.h>

/*
3-	ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA 
DE UN VECTOR DESDE LA FUNCIÓN CARGA(), Y LUEGO MUESTRE 
LOS VALORES IMPRIMIÉNDOLOS DESDE EL CUERPO PRINCIPAL. 
*/

void carga(int vec[]); //prototipo

int main()
{
	int i, vec[5];

	carga(vec);	
	for (i=0;i<5;i++)
	{
		printf("\nEl valor dado en la posicion [%d] es %d",i,vec[i]);
	
	}
	
 //llamada de la función

getch();

} //fin del main

void carga(int vec[])  // definicion de la funcion
{
	int i;
	printf("\n Valores de llamada de la funcion cambio:\n");
	for (i=0;i<5;i++)
	{
		vec[i]=i;
		printf("\nEscribe los datos del vector en posicion %d : ",i);
		scanf("%d",&vec[i]);
	}
}// fin de la funcion

