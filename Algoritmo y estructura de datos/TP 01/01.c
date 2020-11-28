#include<stdio.h>
#include<conio.h>

int main() {
	char apellido[20];
	char nombre[20];
	int edad;
	int telefono;
	
	printf("Escribe tu Nombre\n");
	scanf("%s",nombre);
	printf("Escribe tu Apellido\n");
	scanf("%s",apellido);
	printf("Escribe tu Edad\n");
	scanf("%d",&edad);
	printf("Escribe tu Telefono\n");
	scanf("%d",&telefono);
	
	printf("Tu nombre es %s\n",nombre);
	printf("Tu apellido es %s\n",apellido);
	printf("Tu edad es %d\n",edad);
	printf("Tu telefono es %d\n",telefono);
	
getch();    

}

