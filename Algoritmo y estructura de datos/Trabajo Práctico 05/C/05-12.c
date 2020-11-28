#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
12-	 REALIZAR UNA FUNCIÓN QUE TOME COMO PARÁMETRO UN NOMBRE
 Y DEVUELVA "HOLA <NOMBRE>". 
*/

void hola(char nombre[]);

int main(){
	char nombre[200];
	int num;
	printf("Ingrese un su nombre:\n");
	scanf("%s",nombre);
	
	hola(nombre);
	getch();
}
void hola(char nombre[]){
	

	printf("Hola %s!",nombre);
	getch();
	return 0;
	
}
