#include <stdio.h>
#include <locale.h>
#include <conio.h>


/*
10)	Dado el vector T de tamaño n. 
Si el tamaño es par invertir los elementos
de la mitad de los elementos.

Ejemplo:   v=[1][2][3][4][5][6]      
v(invertido)=[3][2][1][6][5][4]


*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int n=0,T[n],contador=0,tamano=0;
	int longitud=0,ultimo=0; 
	
	while(ultimo!=1){
	
		T[n]=n;
		printf("Ingrese un número entero:\n");
		scanf("%d",&T[n]);
		printf("Este es el ultimo numero?\n1-Si\n cualquier otra tecla no\n");
		scanf("%d",&ultimo);
		n++;
		contador++;
		}


	
	longitud=sizeof(T)/sizeof(*T);
	printf("%d",longitud);

printf("\nLa cantidad de vectores determinada con sizeof es %d\n",longitud);
		
printf("\nMostraremos todos los vectores\n");	
	
	for (n=0;n<contador;n++)		{
		printf("[%d]",T[n]);;
			}

		
	}
		
		


