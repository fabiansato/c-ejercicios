#include<stdio.h>
#include<conio.h>
#include<math.h>

/* 
1-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO 
EL NÚMERO BASE Y EL EXPONENTE.
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE 
Y EL EXPONENTE Y DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.
 */


int main() {

		int base, exponente, total, i;
	
		printf("Ingrese numero base:\n");	
		scanf("%i",&base);
		printf("Ingrese numero exponente:\n");	
		scanf("%i",&exponente);
		total=base;
		for (i=0;i<=exponente;i++)	
		{
		total=total*base;
		i++;
		}
		printf("La potencia de %i elevado a la %i es %i",base,exponente,total);
		return 0;
	
}


