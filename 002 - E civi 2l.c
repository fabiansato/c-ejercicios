#include<stdio.h>
#include <stdlib.h>

/* Se tiene un conjunto de N tarjetas. Cada una contiene una información para una persona: 
a) Número de senso. 
b) Sexo 
C) Edad 
d) Estado Civil "1- Soltero 2-Casado 3-viudo 4-divorciado". 
Elaborar un algoritmo que lea los datos e indique el numero de perosnas entre 16 y 21 años mujeres solteras. */
int main() {
	int senso;
	char genero;
	int edad;
	int ecivil;
	int ultimatarjeta;
	
	while (ultimatarjeta=!0) {
		printf("Ingrese el numero de senso\n");
		scanf("%d",&senso);
		printf("Ingrese el genero M Masculino F Femenino\n");
		scanf(" %c",&genero);		
		printf("Ingrese edad\n");
		scanf("%d",&edad);
		printf("Ingrese estado civil 1=Soltero/a 2=Casado/a 3=Viudo/a 4=Divorciado/a\n");
		scanf("%d",&ecivil);
		
		if (genero=="F") {
			if (edad>=16 && edad<=21) {
				if (ecivil=="1") {
					final = final+1;
				}
			}
		}
		
		printf("¿Es la ultima tarjeta? Toque 1 para terminar");
		scanf("%d",&ultimatarjeta);
				
		
	} 
	return 0;
}

