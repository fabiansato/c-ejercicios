#include <stdio.h>
#include <locale.h>
#include <conio.h>


/*	
6)	 Dado un vector con 5 notas de alumnos.  
Determinar cuántas notas son mayores a 6.

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int i=0,array[6],mayores=0;

	for (i=1;i<=5;i++)		{
		array[i]=i;
		printf("Ingrese un nota del alumno:\n");
		scanf("%d",&array[i]);
		if (array[i]>6){
			mayores++;}
					
		}

printf("\nLa cantidad de notas mayores a 6 es = %d\n\n",mayores);
getch();
	return 0;

	}
