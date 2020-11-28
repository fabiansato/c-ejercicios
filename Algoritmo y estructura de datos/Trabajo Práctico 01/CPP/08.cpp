#include<stdio.h>
#include<conio.h>

/*       
Escribir un algoritmo que pida una cantidad en pesos argentinos y la convierta en dólares estadounidenses (1 dólar estadounidense = 15.40  pesos argentinos).
*/

int main() {
	
	float pesos,dolar,total;
	dolar=15.40;
	
	printf("Ingrese pesos argentinos:");
	scanf("%f",&pesos);
	total=pesos*dolar;
	
	printf("El total en dolar de los pesos ingresados seria %f",total);
	
	getch();
	
}
