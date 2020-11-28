#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define CLUBES (2)
#define CATEGORIAS (5)

//Prototipos
void mostrarMatriz(int matriz[CATEGORIAS][CLUBES]);
void mostrarMatrizFloat(float matriz[CATEGORIAS][CLUBES]);

//Globales
	//Clubes
	char club[][10] = {"Ateneo", "Ferro"};
	
	//Categorias
	char categoria[][10] = {"Menores", "Cadetes", "Juveniles", "Juniors", "Mayores"};

main (){
	setlocale (LC_CTYPE,"spanish");
	
	// Matriz de cantidad de socios
	int Msocios[CATEGORIAS][CLUBES] = {7,4,
                                       9,5,
                                       3,8,
                                       7,4,
                                       6,7};
	
	// Matriz de suma de edades
    float MsumaEdades[CATEGORIAS][CLUBES] = {42,43,
                                           99,98,
                                           76,35,
                                           49,37,
                                           36,19};
	
	// Matriz de promedio de edades
    float MpromedioEdades[CATEGORIAS][CLUBES] = {};
	
	
	int i, j;
	
	for (i=0; i<CATEGORIAS; i++){
	   for (j=0; j<CLUBES; j++){
	       MpromedioEdades[i][j] = MsumaEdades[i][j] / Msocios[i][j];
	   }
	}
	
	
	
	
	//printf("")
	mostrarMatriz(Msocios);
	
	mostrarMatrizFloat(MpromedioEdades);
	
	
	
}




//mostrar matriz
void mostrarMatriz(int matriz[CATEGORIAS][CLUBES]){
	int i, j;
	
	//Imprimir cabecera de la tabla
	printf("         ");
	for (i=0; i<CLUBES; i++){
		printf("%9s",club[i]);
	}
	printf("\n\n");
	
	//Imprimir contenido
	for( i=0; i<CATEGORIAS; i++){
			
		//Imprimir nombre de la categoria al principio de la fila
		printf("%-9s", categoria[i]);
		
		//Imprimir la fila
		for( j=0; j<CLUBES; j++){
			printf("%9d", matriz[i][j]);
		}
		
		printf("\n\n");
	}
}

//mostrar matriz float
void mostrarMatrizFloat(float matriz[CATEGORIAS][CLUBES]){
	int i, j;
	
	//Imprimir cabecera de la tabla
	printf("         ");
	for (i=0; i<CLUBES; i++){
		printf("%9s",club[i]);
	}
	printf("\n\n");
	
	//Imprimir contenido
	for( i=0; i<CATEGORIAS; i++){
			
		//Imprimir nombre de la categoria al principio de la fila
		printf("%-9s", categoria[i]);
		
		//Imprimir la fila
		for( j=0; j<CLUBES; j++){
			printf("%9.2f", matriz[i][j]);
		}
		
		printf("\n\n");
	}
}
