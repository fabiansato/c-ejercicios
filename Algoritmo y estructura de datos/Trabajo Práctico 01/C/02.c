#include<stdio.h>
#include<conio.h>

int main() {
	int num1,num2,num3,suma;
	
	printf("Escribe el Primer numero\n");
	scanf("%d",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%d",&num2);
	printf("Escribe el tercer numero\n");
	scanf("%d",&num3);
	
	suma = num1+num2+num3;
	printf("La suma de todos los numeros es %d\n",suma);
	return 0;
	getch();
 
}

