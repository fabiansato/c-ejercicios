#include<stdio.h>
#include<stdio.h>
#include<conio.h>
/*
1)Realizar la carga de los códigos de 6 productos del area de informatica 
y el precio unitario de cada uno de ellos.
2) mostrar por pantalla el codigo de cada producto y el precio.
3) crear un archivo llamado productos.txt y guardar en el todos los datos de los
productos existentes, cuyos campos debarán ser el Codigo_producto y precio
4) mostrar los datos que fueron cargados en el archivo, de aquellos productos cuyo
precio supere a los $1500
5) salir del programa

Se deben codificar las siguientes funciones:
1-Menu incluoir todas las opciones mencionadas anteriormente
2-Muestra de productos: esta funcion mostrará por pantalla todos los datos de los
productos informaticos (codigo y precio) que fueron ingresados.
*/

//Prototipo de las funciones
void ingresa(int *codigo_producto, int *precio);
void mostrar(int *codigo_producto, int *precio);
void archivo(int *codigo_producto, int *precio);
void mostrar1500(int *codigo_producto, int *precio);
void opciones(int *codigo_producto, int *precio);
int main(){
	
	int codigo_producto[6];
	int precio[6];
	
	ingresa(codigo_producto,precio); //Muestra por pantalla la seleccion de codigo de producto y precio
	opciones(codigo_producto,precio); //Muestra por pantalla menu de selecciones
	return 0;
	
}
void ingresa(int *codigo_producto, int *precio){
	int i;
	for(i=0;i<6;i++){
		printf("Ingresar el codigo de producto numero %i\n",i+1);
		scanf("%i",&codigo_producto[i]);
		do{
		printf("Ingresar el precio de lo que vale el producto numero %i (Numero entero y real)\n",i+1);
		scanf("%i",&precio[i]);}while(precio[i]<0);
		
	}
}
void mostrar(int *codigo_producto, int *precio){
	int j;
		for(j=0;j<6;j++){
		printf("\nproducto %i Codigo de producto: %i precio: %i  ",j+1,codigo_producto[j],precio[j]);
	}	
}

void archivo(int *codigo_producto, int *precio){
	int m;
	FILE *flujo; 
	flujo = fopen ("productos.txt","w+");
			if (flujo == NULL){
			perror("Error en la apertura del archivo\n");
			
 			} else{
	printf("\n\nEl archivo se abrio y se guardara exitosamente!\n");
	fprintf(flujo,".:Codigo:.\t.:precio:.");		 
 	for(m=0;m<6;m++){
	 fprintf(flujo,"%d\t%d\n",codigo_producto[m],precio[m]);
				
}}
fclose(flujo);
}
void mostrar1500(int *codigo_producto, int *precio)
{
	int n;
	FILE *flujo2; 
	flujo2 = fopen ("productos.txt","r");
			if (flujo2 == NULL){
			perror("Error en la apertura del archivo\n");
			
 			} else{
	printf("\n\nEl archivo se abrio y se lee perfectamente!\n");
	fprintf(flujo2,".:Codigo:.\t.:precio:.");		 
 	for(n=0;n<6;n++){
	 fscanf(flujo2,"%d\t%d\n",codigo_producto[n],precio[n]);
	  if(precio[n]>1500){
	  	printf("\nEl valor del codigo: %i en la posicion %i es mayor a 1500 y vale: %i\n",codigo_producto[n],n+1,precio[n]);
	  }
	  }			
}
fclose(flujo2);	
}

void opciones(int *codigo_producto, int *precio){
	int opc;
	do{
	 
	   printf("\n.:Menu de seleccion principal:.");
	   printf("\n1-Ingresar nuevamente Codigo de producto y precio");
	   printf("\n2- Mostrar por pantalla el codigo de cada producto y el precio");
	   printf("\n3- Crear archivo productos.txt y guardar Codigo de Producto y precio");
	   printf("\n4- Mostrar datos que fueron cargados en productos.txt con precios mayores a 1500");
	   printf("\n5-Salir\n");
	   scanf("%i",&opc);
	   
	   switch(opc){
	   	case 1: ingresa(codigo_producto,precio);break;
		case 2: mostrar(codigo_producto,precio);break;
        case 3: archivo(codigo_producto,precio);break;
        case 4: mostrar1500(codigo_producto,precio);break;
        
       	   }
	  }while(opc!=5);
}
