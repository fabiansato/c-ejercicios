#include<conio.h>
#include<stdio.h>
/*
Realizar una funci�n que reciba un n�mero, muestre los 5 n�meros anteriores 
y los 5 n�meros siguientes al n�mero ingresado
*/

 
void MiFuncion(int);
int main(){
int num1,num2;
printf("Ingrese un numero:\n");
scanf("%d",&num1);
MiFuncion(num1);
getch();
return 0;
}

void MiFuncion(int num1)
{
int i,numerosantes,numerosdespues;
numerosantes=num1;
numerosdespues=num1;
printf("Los 5 numeros anteriores al ingresado son:\n");
	for (i=0;i<=5;i++) 
	{
	numerosantes-=1;
	printf("%d\n",numerosantes);
	}
printf("Los 5 numeros posteriores al ingresado son:\n");
	for (i=0;i<=5;i++) 
	{
	numerosdespues+=1;
	printf("%d\n",numerosdespues);
	}	
}
