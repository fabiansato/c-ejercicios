/*
guillermo tiene N dolares. Luis tiene la mitad que guillermo y Juan tiene la mitad de lo
que poseen luis y guillermo juntos. Hacer un programa que calcule e impriama la cantidad de dinero
que tienen entre los tres
*/
#include<stdio.h>

void total(int guillermo);
int main(){
	
	float guillermo,luis,juan,total;

	printf("Ingrese los dolares de guillermo:\n");
	scanf("%f",&guillermo);
	
    total(guillermo);
    
}
void total (int guillermo){
		luis=guillermo/2;
    juan=(luis+guillermo)/2;
    total=guillermo+luis+juan;
	
	printf("El total de dolares que tiene luis es: %.2f\n",luis);
	printf("El total de dolares que tiene juan es: %.2f\n",juan);
	printf("El total de dolares de los tres es: %f.2\n",total);
	return 0;
}
