#include<stdio.h>
#include<conio.h>

/*       
Dada las edades y estaturas de 6 alumnos. Se pide determinar: la Edad Promedio, la Estatura Promedio, 
la Cantidad de alumnos mayores a 10 años y la Cantidad de alumnos que miden más de 1.40 mt. 

*/

int main() {

flot num1,num2,num3,suma,promedio;

printf("Ingresar valor ambiental de la primer temperatura: \n");
scanf("%f",&num1);	
printf("Ingresar valor ambiental de la segunda temperatura: \n");
scanf("%f",&num2);	
printf("Ingresar valor ambiental de la tercer temperatura: \n");
scanf("%f",&num3);	
suma=num1+num2+num3;
promedio=suma/3;
printf("La suma de las tres temperaturas es: %f: \n",suma);
printf("El promedio de las tres temperaturas es: %f: \n",promedio);

getch();
	
}
