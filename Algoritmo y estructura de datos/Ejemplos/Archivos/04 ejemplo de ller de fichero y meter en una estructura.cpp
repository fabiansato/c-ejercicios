#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Archivos

/* 
Manejos de archivos en lenguaje c
lectura de archivos
flujo de datos FILE

*/

/*
Programa -> Canal (flujo de datos)  -> Disco Duro -- Escritura
Programa <- canal (flujo de datos) <- Dusco duro --- lectura

*/

typedef struct{
		char *nombre;
		int edad;
}trabajadores;
 
int main(){
    
    FILE * flujo = fopen("./04.txt", "rb" ); 
	// File le dá la direccion de memoria de la variable flujo a esa 
	//le aplica la funcion fopen que trabaja sobre el archivo que está en la misma carpeta 
	//ademas le agrega el archivo r (de lectura) y en B de binario
	
	
	if (flujo == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	
	fseek(flujo, 0, SEEK_END);
	int num_elementos = ftell(flujo);
	rewind(flujo);
	
	char * cadena = (char *) calloc(sizeof(char), num_elementos);
		if (cadena == NULL){
			perror("Error en la reserva de la memoria\n");
			return 2;
		}
	
	int num_elementos_leidos = fread(cadena, sizeof(char), num_elementos, flujo);
	if (num_elementos_leidos != num_elementos){
		perror("Error leyendo el archivo");
		return 3;
	}
	
	printf("%s",cadena);
	free(cadena);
	fclose(flujo);
	printf("\nSe ha leido el archivo correctamente...");
	
	return 0;
    } 

