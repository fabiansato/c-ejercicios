#include<stdio.h>
#include<conio.h>


/*       
Desarrollar un programa para que se ingrese una temperatura en  grados Centígrados y luego pasarla a grados Kelvin y a grados Fahrenheit. 

*/

int main() {
	
	float celsius,kelvin,fahrenheit;
	
	printf("Ingrese un valor en grados centigrados:\n");
	scanf("%f",&celsius);
	
	fahrenheit=1.8*(celsius)+32;
	kelvin=celsius+273.15;
	
	printf("El valor en Grados Fahrenheit es: %f \n",fahrenheit);
	
	printf("El valor en Grados Kelvin es; %f \n",kelvin);
	getch();
}
