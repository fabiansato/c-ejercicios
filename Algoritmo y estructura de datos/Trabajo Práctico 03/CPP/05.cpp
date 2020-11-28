#include<conio.h>
#include<stdio.h>
/*
5. REALIZAR FUNCIÓN QUE TOME DOS NÚMEROS
 REALES COMO PARÁMETROS Y DEVUELVA UN NÚMERO REAL
 QUE SERÍA LA MEDIA DE LOS DOS NÚMEROS
 */
 
 
void calculo(int,int);
main(){
int num1,num2;
printf("ingrese un numero entero:\n");
scanf("%d",&num1);
printf("ingrese otro numero entero:\n");
scanf("%d",&num2);
calculo(num1,num2);

}

void calculo(int num1, int num2)
{
int total;
total=(num1+num2)/2;
printf("La media entre ambos numeros es: %d\n",total);
}



