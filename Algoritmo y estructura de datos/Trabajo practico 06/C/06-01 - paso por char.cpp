#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



/*
1) Crear un programa que abra un archivo llamado "prueba.txt" 
(previamente creado con el block de notas y guardado en la misma carpeta donde este el programa)
y que muestre el contenido del mismo por pantalla carácter a carácter. 
*/
// Forma 1 con caracteres.

main(){

 
    FILE * flujo = fopen("./prueba.txt", "rb" ); 
	
	
	if (flujo == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	
	
	char caracter;
	
	while (feof(flujo) == 0){
		caracter=fgetc(flujo);
		printf("%c", caracter);
	}
	
	fclose(flujo);
	printf("Se ha leido el archivo correctamente...");
	
	return 0;
    } 

