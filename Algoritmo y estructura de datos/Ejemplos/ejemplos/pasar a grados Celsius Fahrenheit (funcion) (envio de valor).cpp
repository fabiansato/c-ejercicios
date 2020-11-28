#include<stdio.h>


float fahrenheit(float C);
float kelvin(float C);
int main(){
	int opc;
	float C,F=0,K=0;
	
	printf("Digite el valor de los grados Celsius:\n");
	scanf("%f",&C);
	
	do{
		printf("\n1. Convertir en grados Fahrenheit");
		printf("\n2. Convertir en grados Kelvin");
		printf("\n3. Salir");
		printf("\n3. Opcion\n");
	   scanf("%i",&opc);
	   switch(opc){
	   	case 1: 
	   	F = fahrenheit(C);
	   	printf("El equivalente en grados Fahrenheit es %f",F);
	   	
		break;   
		case 2: 
	   	K = kelvin(C);
	   	printf("El equivalente en grados Kelvin es %f",K);
	    break;
	   }
	}while(opc!=3);
	
	
	
	return 0;
}
float fahrenheit(float C){
	float F;
	F = (9*C)/5+32;
	return F;
}

float kelvin(float C){
	float K;
	K=C+274.14;
	return K;
}
