#include<stdio.h>
#include<conio.h>
/*
Dados 2 números si el primero es mayor que el segundo restarlos sino multiplicarlos. INFORMAR EL RESULTADO.
*/
int main() {
	int num1,num2,suma,multiplicacion;
	
	printf("Escribe el Primer numero\n");
	scanf("%d",&num1);
	printf("Escribe el segundo numero\n");
	scanf("%d",&num2);
	
	suma=num1+num2;
	multiplicacion=num1*num2;
	
	if (num1>num2){
	printf("La suma de todos los numeros es: %d\n",suma);	
	}
	else {
		printf("La multiplicacion de todos los numeros es: %d\n",multiplicacion);
	}
	
	return 0;
	getch();
 
}

