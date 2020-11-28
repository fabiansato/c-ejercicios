/*
Planes de ventas son 2
A= Auto 0 Km  200000 unidad
C= Camioneta 0KM 350000 por unidad
adicionalmente se carga cuanta cantidad se caragara
1- el programa pregunta si desea realizar una venta si es si carga el programa
2- hacer una funcion que pregunte el tipo del plan 	y la cantidad de unidades,
calcular el total por la venta, muestre el tickets y guarde en un archivo venta.txt 
el codigo del plan y cantidad
3- hacer una funcion que poase 2 vectores vacios y los reciba como punteros abrir el archivo venta.txt
y cargar datos de los punteros
4. informar desde el main atraveaz de recorrer los vectores todos los pedidos
opcional: recorrer el vector en elk que cargaron las cantidades e informar el total
de todas las uunidades vendidas independiente si es auto o camioneta
opcional 2: que calcule toda la plata
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int carga(int *autos, int *camionetas);
int pregunta(int *autos,int *camionetas);
int archivo(int *autos, int *camionetas, int *final);

int main(){
	
	int autos[200],camionetas[200];
	int final=0;	
	final=pregunta(autos,camionetas);
	archivo(autos,camionetas,&final);
	return 0;
}

//Inicio de la llamada  a las funciones
int carga(int *autos, int *camionetas){
	int i=0;
	int selecciona, uni,final=0;
	printf("Cuantos pedidos tiene?\n");
	scanf("%d",&final);
	do{
		printf("Seleccione\n1-Auto: 200.000\n2-Camioneta 350.000\n ");
		scanf("%i",&selecciona);
	}while(selecciona>2||selecciona<0);
	for(i=0;i<final;i++){
    if(selecciona==1){
		printf("Elegiste auto\n");
		printf("Cuantas unidades?\n");
		scanf("%i",&uni);
		autos[i]=uni*200000;
		
	}else if(selecciona==2){
		printf("Elegiste camioneta\n");
		printf("Cuantas unidades?\n");
		scanf("%i",&uni);
		camionetas[i]=uni*350000;
			}
	
	

} 

return 'final';
	}

int pregunta(int *autos, int *camionetas){
	char confirma;
	printf("Ingresar pedido?\nS=Si\n");
	scanf("%c",&confirma);
	
	if(confirma=='S'||confirma=='s'){
	printf("exito\n");
	carga(autos,camionetas);	
	}
}

int archivo(int *autos, int *camionetas, int *final){
	int m;
	int final=0;
	printf("Cuantas unidades pidio:");
	scanf("%i",&final);
	FILE *flujo; 
	flujo = fopen ("ventas.txt","w+");
			if (flujo == NULL){
			perror("Error en la apertura del archivo\n");
			
 			} else{
	printf("\n\nEl archivo se abrio y se guardara exitosamente!\n");
	fprintf(flujo,"ARCHIVO DE AUTOS Y CAMIONETAS");		 
 	for(m=0;m<final;m++){
	 fprintf(flujo,"%d\t%d\n",autos[m],camionetas[m]);
				
}}
fclose(flujo);
}
