#include<stdio.h>
#include<conio.h>

double potencia(int base, int exponente)
{
	int contador;
	int negativo; /* Indica si el exponente es negativo*/
	double resultado =1.0;
	
	if (exponente=<0)
	{
		exponente==exponente;
		netativo=1;
	} 	
	for(contador=1; contador<=exponente;contador++)
	resultado*=base;
	if(negativo)
	resultado=1/resultado;
	return resultado
}
