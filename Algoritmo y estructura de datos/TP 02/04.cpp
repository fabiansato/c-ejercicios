#include<stdio.h>
#include<conio.h>

/* Dados LA CANTIDAD de varones y el de mujeres de un curso, calcular el total de alumnos. Si el total supera los 35 alumnos informar CURSO NUMEROSO. 
En caso contrario, calcular e informar lo que se deberá pagar para realizar una salida con todos, si cada alumno paga  $55.- */

int main() {
	
int varones,mujeres,total,pagar;
total=0;
printf("Ingresar cantidad de varones: \n");
scanf("%d",&varones);
printf("Ingresar cantidad de mujeres: \n");
scanf("%d",&mujeres);
total=varones+mujeres;

if (total>35){
	printf("Curso Numeroso");
	}
	else {
		pagar=total*55;
		printf("El total que debe pagar de la salida con todos es: %d \n",pagar);
	}
	
}

