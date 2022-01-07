#include<stdio.h>
#include<string.h>

/* Se tiene un conjunto de N tarjetas. Cada una contiene una información para una persona: 
a) Número de senso. 
b) Sexo 
C) Edad 
d) Estado Civil "1- Soltero 2-Casado 3-viudo 4-divorciado". 
Elaborar un algoritmo que lea los datos e indique el numero de perosnas entre 16 y 21 años mujeres solteras. */
int main() {
	int senso;
	int sexo;
	int edad;
	int final;
	int ecivil;
	int ultimatarjeta=1;
	
	while (ultimatarjeta!=2) {
		printf("Ingrese el numero de senso\n");
		scanf("%d",&senso);
		printf("Ingrese el numero sexo 1 es Femenino 2 es Masculino\n");
		scanf("%d",&sexo);
		printf("Ingrese edad\n");
		scanf("%d",&edad);
		printf("Ingrese estado civil 1=Soltero/a, 2=Casado/a, 3=Viudo/a, 4=Divorciado/a\n");
		scanf("%d",&ecivil);
		if (sexo==1) {
			if (edad>=16 && edad<=21) {
				if (ecivil=1) {
					final = final+1;
				}
			}
		}
		printf("Es la ultima tarjeta Tipee 1 para seguir o 2 para terminar el conteo de tarjetas\n");
		scanf("%d",&ultimatarjeta);
	} 
	printf("La cantidad de Mujeres de entre 16 y 21 años solteras es: %d\n",final);
	return 0;	
}

