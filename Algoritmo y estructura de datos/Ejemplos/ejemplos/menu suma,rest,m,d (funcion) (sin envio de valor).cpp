/* Hacer un programa que muestre un men� con las opciones usmar, restar, multiplicar
y dividir, el programa solicitar� una opci�n y realizar� la tarea elegida,
se debe usar procedimientos
*/

#include<stdio.h>

void menu();
void sumar();
void restar();
void multiplicar();
void dividir();
int main()
{
	menu();
    return 0;
}

void menu(){
	int opc;
	do{
	   printf("\n1-Sumar");
	   printf("\n2-Restar");
	   printf("\n3-Multiplicar");
	   printf("\n4-Dividir");
	   printf("\n5-Salir\n");
	   scanf("%i",&opc);
	   
	   switch(opc){
	   	case 1: sumar();break;
        case 2: restar();break;
        case 3: multiplicar();break;
        case 4: dividir();break;
        	
	   }
	   	
	}while(opc!=5);
}
void sumar(){
	int n1, n2,suma=0;
	printf("Digite 2 numeros:");
	scanf("%i %i",&n1,&n2);
	
	suma = n1 + n2;
	printf("\nLa suma es: %i",suma);
	
}

void restar(){
	int n1, n2,resta=0;
	printf("Digite 2 numeros:");
	scanf("%i %i",&n1,&n2);
	
	resta = n1 - n2;
	printf("\nLa resta es: %i",resta);
	
}
void multiplicar(){
	int n1, n2,mult=0;
	printf("Digite 2 numeros:");
	scanf("%i %i",&n1,&n2);
	
	mult = n1 * n2;
	printf("\nLa multiplicacion es: %i",mult);
	
}
void dividir(){
	float n1, n2,div=0;
	printf("Digite 2 numeros:");
	scanf("%f %f",&n1,&n2);
	
	div = n1 / n2;
	printf("\nLa division es: %f",div);
	
}
