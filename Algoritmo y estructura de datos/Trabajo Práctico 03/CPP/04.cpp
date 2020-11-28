#include<conio.h>
#include<stdio.h>
/*
4. REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO
 ES PAR O NO UTILIZANDO FUNCIONES.
*/

void pares(int);
main(){
int num1,calculo;
printf("ingrese un numero entero:\n");
scanf("%d",&num1);
pares(num1);

}

void pares(int num1)
{
int calculo;
calculo=num1%2;
if (calculo==0)
{ printf("El numero es par");
}
else { 
printf("El numero es impar\n");
}
}
