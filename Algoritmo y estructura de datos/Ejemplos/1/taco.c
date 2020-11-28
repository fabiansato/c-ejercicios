#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



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



main(){
    
 	
	char nombre[50], direccion[100];
	int telefono, menu;
	float estado_pagos;
	
	FILE *flujo = fopen ("06-02.txt","w");

	printf("\nElige la opcion del menu:\n1- Agregar cliente\n2-Ver datos\n");
	scanf("%d",&menu);	
	
	while (menu==1||menu==2){

	
	switch (menu){
		case 1:
			
				if (flujo == NULL){
					perror("Error en la apertura del archivo");
					return 1;
					}
			printf("Ingrese nombre del cliente:\n");
			scanf("%s",nombre);
			printf("Ingrese direccion del cliente (sin espacios):\n");
			scanf("%s",direccion);
			printf("Ingrese el monto que quiere retirar el usuario:\n");
			scanf("%f",&estado_pagos);
			fclose(parchivo);
			fclose(parchivo);
			break;
			
			
		case 2:
	
  		  		if (parchivo == NULL){
				perror("Error en la apertura del archivo");
				return 1;
					}
        	while (feof(parchivo) == 0){
            fscanf(parchivo,"%s\t%s\t%.2f\n",nombre,direccion,&estado_pagos);
            printf("%s\t%s\t%.2f\n",nombre,direccion,estado_pagos);
       		 }    
        	fclose(parchivo);
        	
			break;
		
		default:
			exit(0);
			break;
			
		
		}
	
	printf("\nElige la opcion del menu:\n1- Agregar cliente\n2-Ver datos");
	scanf("%d",&menu);
	    } 
}

