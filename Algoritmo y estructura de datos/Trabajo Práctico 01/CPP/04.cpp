#include<stdio.h>
#include<conio.h>

/* 4-DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL CÁLCULO (A+B)*(A-B). */

int main() {
	float num1,num2,resultado;
	

	num1 = 0;
	num2 = 0;
	resultado = 0;
	printf("Escribe el Primer numero\n");
	scanf("%f",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%f",&num2);
	resultado = (num1+num2)*(num1-num2);
	printf("El calculo de los números es %f: \n",resultado);
	return 0;
	getch();
	
}

