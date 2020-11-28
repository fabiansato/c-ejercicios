#include<conio.h>
#include<stdio.h>

void promedio(float,float,float);
main()
{
	float num1,num2,num3;
	printf("\n introduzca el primer numero:\n");
	scanf("%f",&num1);
	printf("\n introduzca el segundo numero:\n");
	scanf("%f",&num2);
	printf("\n introduzca el tercer numero:\n");
	scanf("%f",&num3);
	promedio(num1,num2,num3);
	getch();
	return 0;
}

void promedio(float n1,float n2,float n3)
{
	float resultado;
	resultado=(n1+n2+n3)/3;
	printf("\n El promedio es: %.2f",resultado);
	getch();
}

