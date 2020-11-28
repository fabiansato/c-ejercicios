#include<stdio.h>
#include<conio.h>

/* 
1- Dada la nota y el legajo de un alumno. Informar el legajo y si la nota es superior a  6.

 */

int main() {
	int nota,legajo;
	printf("Ingrese la nota del alumno: \n");
	scanf("%d",&nota);
	printf("Ingrese el legajo del alumno: \n");
	scanf("%d",&legajo);
	
	printf("El numero de legajo es: %i \n",legajo);
	if (nota>6) {
	printf("La nota es mayor a 6.");
	}
		else {
		printf("La nota es menor o igual a 6.");
			}
			return 0;
	
}


