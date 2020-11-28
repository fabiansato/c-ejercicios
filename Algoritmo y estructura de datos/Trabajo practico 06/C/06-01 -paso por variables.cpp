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
	
	char nombre[50], direccion[100];
	float entero;
	
	
	if (flujo == NULL){
				perror("Error en la apertura del archivo");
				return 1;
					}
					
        	while (!feof(flujo)){
            fscanf(flujo,"%s\t%s\t%f\n",nombre,direccion,&entero);
            printf("%s\t%s\t%.2f\n",nombre,direccion,entero);
       		 }    
        	fclose(flujo);
        	
	printf("\nSe ha leido el archivo correctamente...");
	
	return 0;
    } 

