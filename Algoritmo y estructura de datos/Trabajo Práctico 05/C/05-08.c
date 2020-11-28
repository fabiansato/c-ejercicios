#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
8-	REALIZAR UNA FUNCIÓN LLAMADA ULTIMALETRA, QUE TOMA UNA CADENA DE HASTA 10
 CARACTERES COMO PARÁMETRO, Y DEVUELVE EL ÚLTIMO CARÁCTER. 
*/

void ultimaletra(char cadena[]);

int main(){
	char cadena[10];
	printf("Ingrese un texto de no mas de 10 caracteres:\n");
	scanf("%s",cadena);
	ultimaletra(cadena);
	getch();
}
void ultimaletra (char cadena[]){
	int i;
	i=strlen(cadena);
	printf("\nLa cantidad de datos ingresadas dentro del vector es %d\n",i);
	
	printf("El ultimo caracter es %c",cadena[i-1]);
	return 0;
}
