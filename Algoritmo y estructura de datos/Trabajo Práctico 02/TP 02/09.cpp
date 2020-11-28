#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159265


/*       
9- Dado los 3 lados de un triángulo determinar qué tipo de triangulo es.
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
