#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
9-	REALIZAR UNA FUNCIÓN LLAMADA LETRAS, QUE TOMA UNA CADENA DE CARACTERES COMO PARÁMETRO, 
Y DEVUELVE UN NÚMERO ENTERO QUE ES EL NÚMERO DE CARACTERES QUE TIENE DICHA CADENA
*/

int letras(char cadena[]);

int main(){
	char cadena[200];
	int cantidad=0;
	printf("Ingrese un texto que desee:\n");
	scanf("%s",cadena);
	cantidad=letras(cadena);
	printf("La cantidad de letras que posee la cadena es: %d\n",cantidad);
	getch();
}
int letras(char cadena[]){
	
	int i;
	i=strlen(cadena);
	return i;
}
