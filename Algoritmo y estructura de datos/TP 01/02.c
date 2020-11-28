#include<stdio.h>
#include<conio.h>

int main() {
	int num1;
	int num2;
	int num3;
	int suma;
	printf("Escribe el Primer numero\n");
	scanf("%d",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%d",&num2);
	printf("Escribe el tercer numero\n");
	scanf("%d",&num3);
	suma = num1+num2+num3;
	printf("La suma de todos los numeros es %d\n",suma);
	getch();  
	return 0;
	
  
}

