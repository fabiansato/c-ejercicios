#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
10-	ESCRIBIR UNA FUNCIÓN LLAMADA "CANTIDAD" QUE RECIBA COMO PARÁMETROS 
UN NÚMERO ENTERO Y UNA CADENA Y QUE LUEGO DIGA SI LA CADENA TIENE LA MISMA CANTIDAD DE LETRAS QUE EL NÚMERO ENTERO INGRESADO. 
*/

void cantidad(char cadena[], int *num);

int main(){
	char cadena[200];
	int num;
	printf("Ingrese un texto que desee:\n");
	scanf("%s",cadena);
	printf("Ingrese un numero que desee:\n");
	scanf("%d",&num);
	cantidad(cadena, &num);
	getch();
}
void cantidad(char cadena[], int *num){
	
	int i;
	i=strlen(cadena);
	if (i==*num){
		printf("La cantidad de letras ingresadas es igual al numero entero ingresado\n");
	}
	else{
	printf("La cantidad de letras ingresadas NO es igual al numero entero ingresado\n");
	}
}
