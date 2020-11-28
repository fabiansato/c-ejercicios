#include<stdio.h>
#include<conio.h>

/*       
INGRESAR TRES VALORES AMBIENTALES DE TEMPERATURAS Y CALCULAR E INFORMAR LA SUMA Y EL PROMEDIO DE DICHOS VALORES.
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
