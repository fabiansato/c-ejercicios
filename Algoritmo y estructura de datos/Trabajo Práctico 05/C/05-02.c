#include <stdio.h>
#include <conio.h>

/*
2-	ESCRIBIR UN PROGRAMA EN C QUE PERMITA INGRESAR LAS TRES NOTAS DE UN ALUMNO, 
CALCULAR EL PROMEDIO E INFORME SI ESTA APROBADO O DESAPROBADO. EL PROMEDIO DEBER� 
CALCULARSE EN LA FUNCI�N PROMEDIO(), QUE RECIBIR� POR REFERENCIA LAS NOTAS Y DEBER� 
RETORNAR EL VALOR DEL PROMEDIO PARA EVALUAR LA CONDICI�N EN EL CUERPO PRINCIPAL
*/

// Este trabajo se realiza mediante el envio de variables por referencia

float promedio(float *notaF1, float *notaF2,float *notaF3);

int main(){
	float nota1, nota2, nota3;
	float final;
	
	printf("Ingresar la primer nota:\n");
	scanf("%f", &nota1);
	
	printf("Ingresar la segunda nota:\n");
	scanf("%f", &nota2);
	
	printf("Ingresar la tercer nota:\n");
	scanf("%f", &nota3);
	
	final = promedio(&nota1, &nota2, &nota3);
	
	if (promedioFinal >= 7){
		printf("\nPromedio: %.2f\nAPROBADO\n", final);
	} else {
		printf("\nPromedio: %.2f\nDESAPROBADO\n", final);
	}
	
	getch();
}//fin main

float promedio(float *notaF1, float *notaF2,float *notaF3){
	return (*notaF1 + *notaF2 + *notaF3)/3;
}
