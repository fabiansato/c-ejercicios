#include<conio.h>
#include<stdio.h>
/*
5. REALIZAR FUNCI�N QUE TOME DOS N�MEROS
 REALES COMO PAR�METROS Y DEVUELVA UN N�MERO REAL
 QUE SER�A LA MEDIA DE LOS DOS N�MEROS
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



