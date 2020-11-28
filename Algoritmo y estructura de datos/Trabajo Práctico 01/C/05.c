#include<stdio.h>
#include<conio.h>
/* 5-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL NÚMERO BASE Y EL EXPONENTE. */

int main() {
	float base,exponente,total;
	
	
	printf("Escribe el numero de Base \n");
	scanf("%f",&base);
	printf("Escribe el numero de exponente \n");
	scanf("%d",&exponente);
	total = pow(base,exponente);
	printf("El exponente de la base es %f\n",total);
	return 0;
	getch();
}

