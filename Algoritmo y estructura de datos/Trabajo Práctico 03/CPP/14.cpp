#include<stdio.h>
#include<conio.h>
#include<math.h>

/*
14. Crear una función que permita
 calcular el factorial de un número.
*/

int main(){
	int numero;

	printf("Escriba un numero: \n");
	scanf("%i",&numero);
	printf("\n El factorial del numero es: %li",elfactorial(numero));
	return 0;
}
long elfactorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*elfactorial(n-1));
	}
}
