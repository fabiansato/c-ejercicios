#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>


/*
2) Crear un programa para gestionar una agenda de clientes, para una empresa, 
con los campos: "nombre (50 caracteres)", "dirección (100 caracteres)", 
"teléfono (entero)", "estado_pagos (float)". El estado de pagos será un número
 negativo indicando la cantidad de dinero que debe el cliente. 
El programa debe presentar al usuario un menú con las siguientes opciones: 
1) Agregar cliente. 2) Ver datos de todos los clientes. El programa trabajará 
con un archivo (clientes.mio por ejemplo) que debe crear la primera vez 
que se ejecute el programa. 

*/



int main(){
    
 	setlocale(LC_ALL,"spanish");
	char nombre[50], direccion[100];
	int telefono, respuesta;
	float estado_pagos;
	
	FILE *flujo; 

	printf("\nElige la opcion del respuesta:\n1- Agregar cliente\n2-Ver datos:\n");
	scanf("%d",&respuesta);
	
	while (respuesta==1||respuesta==2){

	
	switch (respuesta){
		case 1:
			flujo = fopen ("06-02.txt","a+");
			if (flujo == NULL){
			perror("Error en la apertura del archivo\n");
			return 1;
 			}
			printf("Ingrese nombre del cliente:\n");
			scanf("%s",nombre);
			printf("Ingrese direccion del cliente:\n");
			fflush(stdin);
			gets(direccion);
		
			printf("Ingrese el monto que quiere retirar el usuario:\n");
			scanf("%f",&estado_pagos);
			fprintf(flujo,"%s\t%s\t%f\n",nombre,direccion,estado_pagos);
			fclose(flujo);
			break;
			
			
			case 2:
	
		    FILE *pArchivo;
    		pArchivo = fopen ("06-02.txt","r");
		    if (pArchivo != NULL){
        	while (!feof(pArchivo)){
            fscanf(pArchivo,"%s\t%s\t%f\n",nombre,direccion,&estado_pagos);
            printf("%s\t%s\t%f\n",nombre,direccion,estado_pagos);
       		 }
                
      		  fclose(pArchivo);
        			 }
			break;
   			 
		default:
		exit(0);
		break;
			
		
		}

	printf("\nElige la opcion del respuesta:\n1- Agregar cliente\n2-Ver datos\n");
	scanf("%d",&respuesta);
	    } 
}


