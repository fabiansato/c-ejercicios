#include<stdio.h>
#include<conio.h>
#include<string.h>

// Hay que verificar que problema tiene con el if

int main()
{
    
	int n=1;
	char nombre[80];
	float salario;
	FILE *parchivo;
	parchivo = fopen ("./prueba.txt","w");
	if (parchivo!=NULL){
		do{
			printf("Introduzca el numero de empleado:");
			scanf("%d",&n);
			if (n!=0){
			printf("Introduzca el nombre del empleado:");
			scanf("%s",nombre);
			printf("Introduzca el salario de empleado:");
			scanf("%f",&salario);
				}
			fprintf(parchivo,"%d\t%s\t%.2f\n",n,nombre,salario);
			}
			while(n>0);
			fclose(parchivo);
			
	}
}
