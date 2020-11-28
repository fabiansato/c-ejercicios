//paso por referencia

#include<stdio.h>
#include<conio.h>
 


void referencia(int &xnum, int &ynum); //prototipo de la funcion

int main(){
	
	int num1, num2;
	
	printf("Digite numero 1\n");
	scanf("%d",num1);
	printf("Digite numero 2\n");
	scanf("%d",num2);
	
	referencia(num1,num2);

	printf("El nuevo valor del primer numero es %d",num1);
	printf("El nuevo valor del primer numero es %d",num2);
	
	getch();
	return 0;
	
}

void referencia(int &xnum, int &ynum)
{
	printf("El valor del primer numero es %d",xnum);
	printf("El valor del segundo numero es %d",ynum);
	
	xnum = 89;
	ynum = 45;
	}	
