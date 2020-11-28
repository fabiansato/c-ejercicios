#include<stdio.h>
#include<conio.h>

void cambio (int vec[]); //prototipo

int main()
{
	int i, vec[3];
	printf("\n Valores de llamada de la funcion cambio:\n");
	for (i=0;i<3;i++)
	{
		vec[i]=i;
		printf("\n vec[%d] = %d",i,vec[i]);
	}
	
	cambio(vec); //llamada de la función
	printf("\nlos valores despues de llamar  al funcion cambio son:\n");
	for(i=0;i<3;i++)

			printf("\nvec[%d]=%d",i,vec[i]);
			getch();


} //fom del main

void cambio(int vec[]) // definicion de la funcion
{
	int i;
	printf("\nValores desde la funcion despues de modificarlos\n");
	for(i=0;i<3;i++)
	{
		vec[i]=9;
		printf("vec[%d]=%d\n",i,vec[i]);
		getch();
	}
}// fin de la funcion
