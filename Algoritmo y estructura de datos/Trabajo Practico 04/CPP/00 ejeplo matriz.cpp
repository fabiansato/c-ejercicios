#include<stdio.h>
#include<conio.h>

/* EJEMPLO DE MATRIZ */

int main() {

	float matriz[2][5];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("\n Ingrese un valor para [%d],[%d]:",i,j);
			scanf("%f",&matriz[i][j]);
		}
	}
	printf("\n Imprimir Matriz\n");
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("[%2.f]",matriz[i][j]);
		}
		printf("\n");
	}
	}

