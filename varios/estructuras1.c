/* Escribir un algoritmo en el que se ingresen 50 numeros deberá mostrar la cantidad de positivos y negativos */

#include<stdio.h>

int main() {
	int i;
	int neg;
	int num;
	int pos;
	i = 0;
	pos = 0;
	neg = 0;
	for (i=1;i<=5;i+=1) {
		printf("Vuelta numero: %d\n",i);
		printf("Ingresar un numero\n");
		scanf("%d",&num);
		if (num>0 && num!=0) {
			pos = pos+1;
		} else {
			neg = neg+1;
		}
	}
	printf("Los numeros positivos fueron: %d\n",pos);
	printf("Los numeros negativos fueron: %d\n",neg);
	return 0;
}

