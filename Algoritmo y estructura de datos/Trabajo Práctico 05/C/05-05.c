#include<stdio.h>
#include<conio.h>

/*
5-	ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA
DE UN VECTOR DESDE LA FUNCIÓN CARGA(), Y LUEGO MOSTRAR CUAL
ES EL MAYOR NUMERO DEL VECTOR, UTILIZANDO PARA ENCONTRARLO
LA FUNCIÓN ENCONTRARMAX(), QUE NO DEBERÁ DEVOLVER NINGÚN VALOR.
EL VALOR MAXIMO DEBERA SER INFORMADO EN EL CUERPO PRINCIPAL
*/

void carga(int vec[]); //prototipo
int encontrarmax(int vec[]); //prototipo

int main()
{
	int i, vec[5],mayor=0;

	carga(vec); //llamada de la función carga
	mayor = encontrarmax(vec);
 	printf("El mayor valor del vector es %d",mayor);

getch();

} //fin del main

void carga(int vec[])  // definicion de la funcion carga apra cargar datos del vector
{

int i;
	for (i=0;i<5;i++)
	{
		vec[i]=i;
		printf("\nEscribe los datos del vector en posicion %d : ",i);
		scanf("%d",&vec[i]);
	}

}// fin de la funcion

int encontrarmax(int vec[])  // definicion de la funcion para encontrar el valor maximo en un vector
{
	
	int i, mayorvalor=0, primeraVez=1;
	for (i=0;i<5;i++){
	if (primeraVez == 1){
	mayorvalor = vec[i];
	primeraVez = 0;
		} else if (vec[i] > mayorvalor){
			mayorvalor = vec[i];
		}
}	

return mayorvalor;			
		
	
}// fin de la funcion

