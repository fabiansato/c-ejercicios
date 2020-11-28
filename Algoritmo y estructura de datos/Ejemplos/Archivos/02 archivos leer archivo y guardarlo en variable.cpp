#include <stdio.h>
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

main(){
    
    FILE * flujo = fopen("./02.txt", "rb" ); 
	// File le dá la direccion de memoria de la variable flujo a esa 
	//le aplica la funcion fopen que trabaja sobre el archivo que está en la misma carpeta 
	//ademas le agrega el archivo r (de lectura) y en B de binario
	
	
	if (flujo == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	
	
	int numero;
	char cadena[10];
	
	while (feof(flujo) == 0){
	 fscanf(flujo, "%d%s",&numero, cadena);

	 printf("%d %s\n",numero ,cadena);
	}
	
	fclose(flujo);
	printf("Se ha leido el archivo correctamente...");
	
	return 0;
    } 

