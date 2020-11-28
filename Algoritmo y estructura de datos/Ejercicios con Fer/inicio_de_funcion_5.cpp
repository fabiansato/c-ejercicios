#include<conio.h>
#include<stdio.h>

int cubo(int base);
main()
{
	int numero;
	for(numero=1;numero<=5;numero++)
		{
		printf("\n El cubo del numero es %d es %d",numero,cubo(numero));
		getch();
		}				
		return 0;
}

int cubo(int base)
{
	int potencia;
	potencia=base*base*base;
	return(potencia);
	getch();
}

