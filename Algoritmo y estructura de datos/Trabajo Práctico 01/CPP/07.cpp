#include<stdio.h>
#include<conio.h>

/*       
Ingresar un importe en pesos y mostrar el 80%, 20% y 15 % de dicho valor
*/

int main() {
	
	float num1,por80, por20,por15;
	
	printf("Escribe el numero\n");
	scanf("%f",&num1);
	
	por80=num1*80/100;
	por20=num1*20/100;
	por15=num1*15/100;
	
	printf("El 80 porciento del numero es: %f\n",por80);
	printf("El 20 porciento del numero es: %f\n",por20);
	printf("El 15 porciento del numero es: %f\n",por15);
	
	getch();
}
