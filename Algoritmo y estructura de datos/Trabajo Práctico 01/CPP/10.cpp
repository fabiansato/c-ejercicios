#include<stdio.h>
#include<conio.h>
#include<math.h>


/*       
Desarrolle un algoritmo que calcule la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus catetos.
*/

int main() {
	
	float lado1,lado2,hipotenusa;
	
	printf("Ingrese el cateto 1 del rectangulo");
	scanf("%f",&lado1);
	printf("Ingrese el cateto 2 del rectangulo");
	scanf("%f",&lado2);
	
	hipotenusa=sqrt(pow(lado1,2)+pow(lado2,2));
	
	printf("La hipotenusa del traingulo rectangulo es: %f",hipotenusa);
	getch();
}
