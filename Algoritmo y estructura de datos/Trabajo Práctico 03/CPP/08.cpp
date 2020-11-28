#include<conio.h>
#include<stdio.h>
/*
Realizar una función que reciba un número, muestre los 5 números anteriores 
y los 5 números siguientes al número ingresado
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
