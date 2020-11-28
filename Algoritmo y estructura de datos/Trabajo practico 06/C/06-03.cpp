#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



/*
3) Se pide una aplicación que cargue dos vectores de
10 posiciones num1[10], num2[10].
Se pide hacer la multiplicación y 
la suma de los 2 vectores y guardar en un archivo
RESULTADO con los siguientes campos:

………………………………………………………………..
Numero 1	Numero 2	Suma	Multi	Mayor
_________________________________________________
5		4		9	20	multi
………………………………………………………………..

El campo MAYOR debe llenarse con la leyenda de la operación mayor. 
Suma y Multi pueden ser iguales, es ese caso Leyenda = iguales.


*/



int main(){
    
 	
	int num1[10],num2[10],suma=0,i=0;
	char str1[12];
	int multi=1;
	
FILE *flujo;
flujo = fopen ("06-03.txt","w+");
			if (flujo == NULL){
			perror("Error en la apertura del archivo\n");
			return 1;
 			} 
	
	for (i=0;i<10;i++){
		printf("Ingrese el valor de la posicion %d del primer vector\n",i);
		scanf("%d",&num1[i]);
		printf("Ingrese el valor de la posicion %d del segundo vector\n",i);
		scanf("%d",&num2[i]);
		suma=num1[i]+num2[i];
		multi=num1[i]*num2[i];
	
	printf("--------------------------------------\n");
	printf("Num 1	Num 2	Suma	Multi	Mayor");
	printf("\n%d	%d	%d	%d",num1[i],num2[i],suma,multi);
	
			if (multi>suma){
			printf("	Multi\n");
			}
			else if (multi<suma){
			printf("	Suma\n");
			} else if (multi==suma){
			printf("	Iguales\n");
			}
	printf("--------------------------------------\n");		

	fprintf(flujo,"--------------------------------------\n");
	fprintf(flujo,"Num 1	Num 2	Suma	Multi	Mayor");
	fprintf(flujo,"\n%d	%d	%d	%d",num1[i],num2[i],suma,multi);
				if (multi>suma){
			fprintf(flujo,"	Multi\n");
			}
			else if (multi<suma){
			fprintf(flujo,"	Suma\n");
			} else if (multi==suma){
			fprintf(flujo,"	Iguales\n");
			}
	fprintf(flujo,"--------------------------------------\n");	
}
	fclose(flujo);
}


