#include<stdio.h>
#include<conio.h>
#include<math.h>


/*       
9- En una olimpiada de tiro al blanco se llega a un acuerdo entre 
los participantes para que el puntaje obtenido sea calculado en base 
al puntaje original (0 a 10) alcanzado en el tiro efectuado, multiplicado por un factor según la siguiente tabla:
puntaje original	 	||  	Factor
-------------------------------------------
0						||		0
de 1 a 5				||		6
de 6 a 8				||		9
de 9 a 10				||		10


Para un tiro realizado determine el puntaje alcanzado aplicando el factor que le corresponde.

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
