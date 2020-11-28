#include<conio.h>
#include<stdio.h>

/* 
1-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO 
EL NÚMERO BASE Y EL EXPONENTE.
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE 
Y EL EXPONENTE Y DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.
 */


void potencia(int, int);
main()
{
	
	
	int base, exponente;
	
		printf("Ingrese numero base:\n");	
		scanf("%i",&base);
		printf("Ingrese numero exponente:\n");	
		scanf("%i",&exponente);
			
	potencia(base,exponente);
	getch();
	
	return 0;
}

void potencia(int base, int exponente)
{
		int total, i;
		total=base;
		for (i=0;i<=exponente;i++)	
		{
		total=total*base;
		i++;
		}
		printf("La potencia de %i elevado a la %i es %i",base,exponente,total);
}

