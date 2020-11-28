#include<stdio.h>
#include<conio.h>

/*       
Dado un número verificar si es positivo, negativo o nulo.
*/

int main() {
	
float num1;
printf("Ingrese un numero: \n");
scanf("%f",&num1);

if (num1>0){
            
printf("El numero ingresado es positivo");
            }
            else if (num1<0){
                 printf("El numero ingtesado es negativo");
                 }
                 else if (num1==0){
                      printf("El numero ingresado es igual a cero");                      
                      }
	
	getch();
}
