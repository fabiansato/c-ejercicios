#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159265


/*       
Desarrolle un algoritmo que permita determinar el área y volumen de un cilindro dado su radio y su altura.
*/

int main() {

float area,volumen,radio,altura, pi;
	
	
	printf("Ingrese Radio del cilindro:\n");
	scanf("%f",&radio);
	printf("Ingrese Altura del cilindro:\n");
	scanf("%f",&altura);

volumen=PI*pow(radio,2)*altura;
area=2*PI*(altura+radio);

	printf("El Area total del cilindro es: %f\n",area);
	printf("El Volumen total del cilindro es: %f\n",volumen);	
	getch();
	
}
