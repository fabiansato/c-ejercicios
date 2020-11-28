#include<stdio.h>
#include<conio.h>

/*Ingresar 3 números e imprimir el doble, el triple y la mitad de cada uno.*/

int main() {
	
	float num1,num2,num3;
	printf("Escribe el Primer numero\n");
	scanf("%f",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%f",&num2);
	printf("Escribe el tercer numero\n");
	scanf("%f",&num3);
	
	printf("El doble del primer numero es: %f\n",num1*2);
	printf("El triple del primer numero es: %f\n",num1*3);
	printf("La mitad del primer numero es: %f\n",num1/2);
	
	printf("El doble del segundo numero es: %f\n",num2*2);
	printf("El triple del segundo numero es: %f\n",num2*3);
	printf("La mitad del segundo numero es: %f\n",num2/2);
	
	printf("El doble del tercer numero es: %f\n",num3*2);
	printf("El triple del tercer numero es: %f\n",num3*3);
	printf("La mitad del tercer numero es: %f\n",num3/2);

	getch();
}
