#in	clude<stdio.h>
#include<conio.h>

/*
Leer tres números y mostrar un mensaje si se encuentran en orden ascendente.
*/

int main() {
	int num1,num2,num3;
	
	printf("Escribe el Primer numero\n");
	scanf("%d",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%d",&num2);
	printf("Escribe el tercer numero\n");
	scanf("%d",&num3);
	if (num1<num2&&num2<num3){
		printf("Los numeros se encuentran en orden ascendente");
	}
	else {
	printf("Los numeros no se encuentran en orden ascendente");
	}
	
	
	return 0;
	getch();
	
	
}
