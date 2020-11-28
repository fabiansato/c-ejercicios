/*
Realizar un menú que permita realizar las siguientes opciones:
1-	Realizar la carga del código de cada empleado de la empresa
 y el sueldo que cobra. Se deberán. El total son 6 empleados. 
2-	Mostrar por cada empleado su código y sueldo.
3-	Determinar e informar cual es el empleado que 
tiene el mayor sueldo y el menor sueldo. 
Para ello mostrar por pantalla código de empleado y sueldo.
4-	Crear un archivo llamado "empleados.txt" 
con todos los datos de los empleados de la empresa, 
cuyos campos son: código de empleado y sueldo.
5-	Salir del programa.
Utilizar como mínimo 2 funciones con pasaje por referencia.

*/
#include<stdio.h>
#include<conio.h>
//Prototipos
int ingresa(int *codigo,int *sueldo); //Prototipo por referencia array
int mostrar(int *codigo,int *sueldo);
void mayormenor(int *sueldo);
void menu(int *codigo,int *sueldo);
void archivo(int *codigo, int *sueldo);

int main(){

int i, codigo[6],sueldo[6];
ingresa(codigo,sueldo);//Llama a la funcion de codigo y sueldo por array de referencia
menu(codigo,sueldo);
return 0;
}


//Carga el valor del codigo y sueldo por arrays de referencia
int ingresa(int *codigo,int *sueldo){
int j;
//Ingresar empleado por pantalla
for(j=0;j<6;j++){
printf("\nIngresar Codigo de emplado numero %i (numeros enteros): \n",j+1);
scanf("%i",&codigo[j]);
printf("\nIngresar sueldo de emplado numero %i (numeros enteros): \n",j+1);
scanf("%i",&sueldo[j]);
}}

int mostrar(int *codigo,int *sueldo){
int k;
	for(k=0;k<6;k++)
{
	printf("\nEl empleado %i de codigo %i gana total de %i",k+1,codigo[k],sueldo[k]);
}}

//Funcion para mostrar menor y mayor
void mayormenor(int *sueldo){

int primeraVez = 1;//Esta es la bandera
int menorValor = 0, mayorvalor = 0, l;
int menorposicion = 0, mayorposicion=0;	
	

     for(l=0;l<6;l++){
		
		if (primeraVez == 1){
			menorValor = sueldo[l];
			menorposicion = l;
			primeraVez = 0;
		} else if (sueldo[l] < menorValor){
			menorValor = sueldo[l];
			menorposicion = l;
		}
		if (primeraVez == 1){
			mayorvalor = sueldo[l];
			mayorposicion = l;
			primeraVez = 0;
		} else if (sueldo[l] > mayorvalor){
			mayorvalor = sueldo[l];
			mayorposicion = l;
		}
		
	}
    printf("\nMenor valor = %d\n\n",menorValor);
    printf("\nMayor valor = %d\n\n",mayorvalor);
	printf("\nMenor Posicion = %d\n\n",menorposicion+1);
    printf("\nMayor Posicion = %d\n\n",mayorposicion+1);	
	
}

//funcion menu
void menu(int *codigo,int *sueldo){
	int opc;
		do{
	   printf("\n1-Ingresar codigo y empleado nuevamente");
	   printf("\n2-Mostrar Sueldo que tenemos");
	   printf("\n3-Mostrar sueldo mayor y sueldo menor");
	   printf("\n4-Guardar datos en un archivo");
	   printf("\n5-Salir\n");
	   scanf("%i",&opc);
	   
	   switch(opc){
	   	case 1: ingresa(codigo,sueldo);break;
        case 2: mostrar(codigo,sueldo);break;
        case 3: mayormenor(sueldo);break;
        case 4: archivo(codigo,sueldo);break;
        
	   }
	   	
	}while(opc!=5);
}

//Funcion que guarda en archivo
void archivo (int *codigo, int *sueldo){
	int m;
	FILE *flujo; 
	flujo = fopen ("empleados.txt","w+");
			if (flujo == NULL){
			perror("Error en la apertura del archivo\n");
			
 			} else{
	printf("El archivo se abrio y se guardara exitosamente!\n");
	fprintf(flujo,".:Codigo:.\t.:Sueldo:.");		 
 	for(m=0;m<6;m++){
	 fprintf(flujo,"%d\t%d\n",codigo[m],sueldo[m]);
				
}}
fclose(flujo);
}

