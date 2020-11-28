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
	
	int n=0,T[n],contador=0,tamano=0,i=0;
	int longitud=0,ultimo=0,sarasa=0; 
	
	while(ultimo!=1){ // agregaremos los datos de cada vector
	
		T[n]=n;
		printf("Ingrese un número entero:\n");
		scanf("%d",&T[n]);
		printf("Este es el ultimo numero?\n1-Si\n cualquier otra tecla no\n");
		scanf("%d",&ultimo);
		n++;
		contador++;
		}


printf("\nLa cantidad de vectores es %d",n); //mostramos por pantalla la cantidad de vectores
		
printf("\nMostraremos todos los vectores\n");	//mostraremos por pantalla los vectores
	
	for (n=0;n<contador;n++)		{
		printf("[%d]",T[n]);;
			}


//if (tamano%2==0){
	sarasa=n/2;
	printf("El valor de sarasa es %d\n",sarasa);
	
		for(i=0;i<sarasa/2;i++){
			int temp=T[i];
			T[i]=T[n-1-i];
			T[n-1-i]=temp;}

		
		printf("\nMostraremos todos los vectores Invertidos\n");	
	
		for (n=0;n<contador;n++)		{
		printf("[%d]",T[n]);;
			}
//				}
		

getch();	

	}
		
		


