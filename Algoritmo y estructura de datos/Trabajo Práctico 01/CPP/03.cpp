#include<stdio.h>
#include<conio.h>

int main() {
	float a,b,division,multiplicacion,resta,suma;
	
	printf("Escribe el Primer numero\n");
	scanf("%f",&a);
	printf("Escribe el segundo numero\n");
	scanf("%f",&b);
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	printf("La suma del primer numero con el segundo es %f\n",suma);
	printf("La resta del primer numero con el segundo es %f\n",resta);
	printf("La multiplicacion del primer numero con el segundo es %f\n",multiplicacion);
	printf("La division del primer numero con el segundo es %f\n",division);
	resta = b-a;
	division = b/a;
	printf("Ahora invertimos los numeros. La suma del primer numero con el segundo es %f\n",suma);
	printf("Ahora invertimos los numeros. La resta del primer numero con el segundo es %f\n",resta);
	printf("Ahora invertimos los numeros. La multiplicacion del primer numero con el segundo es %f\n",multiplicacion);
	printf("Ahora invertimos los numeros. La division del primer numero con el segundo es %f\n",division);
	getch();  
	return 0;
	getch();
}
