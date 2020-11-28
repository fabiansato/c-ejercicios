//como leer una cadena de caracteres

#include<stdio.h>
#include<conio.h>
int main(){
	
	char palabra[20];
	printf("Ingrese una cadena de caracteres:\n");
	gets(palabra);
	printf("La cadena ingresada es %s",palabra);
	getch();
	return 0;
}
