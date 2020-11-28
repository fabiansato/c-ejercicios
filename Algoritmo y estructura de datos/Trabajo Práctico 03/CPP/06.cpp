#include<conio.h>
#include<stdio.h>
/*
6.REALIZAR UNA FUNCIÓN LLAMADA NEGATIVO, QUE TOMA UN NÚMERO
 ENTERO COMO PARÁMETRO, Y DEVUELVE 1 SI ES NEGATIVO O 0 SI NO LO ES. 
 */
 
 
int negativo(int);
int main(){
int num;
printf("ingrese un numero entero:\n");
scanf("%d",&num);
printf("\n El contenid47 o es %d",negativo(num));
getch();
}

int negativo(int num)
{
int total;
if (num<0)
{
total=1;
return(total);
}
else if (num>0){
total=0;
return(total);
}
}

