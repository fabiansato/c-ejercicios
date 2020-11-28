#include<stdio.h>
#include<conio.h>

/* 1- ESCRIBIR UN ALGORITMO  QUE PIDA, NOMBRE, APELLIDO, TELÉFONO 
Y EDAD DE UNA PERSONA Y LUEGO LO MUESTRE POR PANTALLA. */

int main() {
	char apellido[36],nombre[36];
	int edad, telefono;
	
	printf("Escribe tu Nombre\n");
	scanf("%s",nombre);
	printf("Escribe tu Apellido\n");
	scanf("%s",apellido);
	printf("Escribe tu Edad\n");
	scanf("%i",&edad);
	printf("Escribe tu Telefono\n");
	scanf("%i",&telefono);
	
	printf("Tu nombre es %s\n",nombre);
	printf("Tu apellido es %s\n",apellido);
	printf("Tu edad es %i\n",edad);
	printf("Tu telefono es %i\n",telefono);
	return 0;
	getch();
}

