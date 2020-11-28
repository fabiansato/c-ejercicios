#include<conio.h>
#include<stdio.h>
/*
ESCRIBIR UNA FUNCIÓN LLAMADA "EDADES" QUE RECIBA 
2 EDADES Y DECIR CUÁL DE ELLAS ES 
LA MAYOR Y CUANTO LE FALTA A LA MENOR PARA LLEGAR A LA EDAD MAYOR.
*/

 
void edades(int,int);
int main(){
int num1,num2;
printf("Ingrese primera edad:\n");
scanf("%d",&num1);
printf("Ingrese primera edad:\n");
scanf("%d",&num2);
edades(num1,num2);
getch();
}

void edades(int num1,int num2)
{
int total;
if (num1>num2) {
 printf("El primer numero es el mayor\n");
 total=num1-num2;
 printf("El total de la menor para ser igual que la mayor es %d\n",total);
}
else if (num1<num2) {
 printf("El segundo numero es el mayor\n");
 total=num2-num1;
 printf("El total de la menor para ser igual que la mayor es %d\n",total);
}
}
