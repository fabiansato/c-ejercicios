#include <stdio.h>
#include <conio.h>

/*
1-	ESCRIBIR UN PROGRAMA EN C QUE RECIBA DOS N�MEROS
DEL USUARIO REALICE LA SUMA Y LA MUESTRE POR PANTALLA. 
LA SUMA DEBER� HACERSE EN LA FUNCI�N SUMA(), 
QUE RECIBIR� COMO PAR�METROS POR REFERENCIA LOS NUM1 Y NUM2. 
EL RESULTADO DEBE IMPRIMIRSE DESDE LA FUNCI�N
*/

// Este trabajo se realiza mediante el envio de variables por referencia

void suma(int *puntero1, int *puntero2);

int main(){
	
	int num1=0,num2=0;

	printf("Ingrese el numero 1:\n");
	scanf("%d",&num1);
	printf("Ingrese el numero 2:\n");
	scanf("%d",&num2);
	
	suma(&num1,&num2);
	
	
	}  //fin main

void suma(int *num1,int *num2){
		
	printf("El valor de suma por punteros es: %d",*num1+*num2);
	getch();
}



