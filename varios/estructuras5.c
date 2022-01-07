	/* Se Ingresan 50.000 tarjetas de senso, con los siguientes datos:
 a) Genero F o M 
 b) Edad
 d)Estado Civil "1- Soltero 2-Casado 3-viudo 4-divorciado".
 e)dni 
Elaborar un algoritmo que lea los datos e indique el numero de perosonas femeninas entre 20 y 25 años mujeres solteras. */
	
#include<stdio.h>
#include<string.h>


int main() {
	int dni;
	int ecivil;
	int edad;
	int final;
	char genero='M';
	int i;

	for (i=1;i<=50000;i+=1) {
		printf("Este es el senso numero: %d\n",i);
		printf("Ingrese el numero genero F es Femenino y M es Masculino\n");
		scanf(" %c",&genero);
		printf("Ingrese edad\n");
		scanf("%d",&edad);
		printf("Ingrese estado civil 1=Soltero/a, 2=Casado/a, 3=Viudo/a, 4=Divorciado/a\n");
		scanf("%d",&ecivil);
		printf("Ingrese DNI\n");
		scanf("%d",&dni);
		if (genero == 'F' ) {
			if (edad>=20 && edad<=25) {
				if (ecivil==1) {
					final = final+1;
				}
			}
		}
	}
	printf("La cantidad de personas Femeninas, solteras de entre 20 y 25 anos solteras es: %d\n",final);
	return 0;
}

