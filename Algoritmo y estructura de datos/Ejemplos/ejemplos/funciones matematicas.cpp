/* Funciones Matematicas:

    ceil(x)    =>  Redondea al proximo entero mas cercano.
    fabs(x)    =>  Devuelve el valor absoluto de x.
    floor(x)   =>  Redondea por defecto al entero mas proximo.
    fmod(x,y)  =>  Calcula el resto de la division de x/y.
    pow(x,y)   =>  Calcula x elevada a la potencia y.
    sqrt(x)    =>  Devuelve la raiz cuadrada de x.
    
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void limpieza();
void funcion_matematica1();
void funcion_matematica2();
void funcion_matematica3();
void funcion_matematica4();
void funcion_matematica5();
void funcion_matematica6();
int main(){
 funcion_matematica1();
 limpieza();
 funcion_matematica2();
 limpieza();
 funcion_matematica3();
 limpieza();
 funcion_matematica4();
 limpieza();
 funcion_matematica5();
 limpieza();
 funcion_matematica6();
 limpieza();
 return 0;
}
void limpieza(){
 char letra;
 fflush(stdin);
 printf("\nDigite s para limpiar la pantalla: ");
 scanf("%c",&letra);
 if(letra=='s'){
  system("cls");
  printf("Se ha limpiado la pantalla correctamente");
 }
 else{
  printf("No se ha lipiado correctamente la pantalla");
 }
}
void funcion_matematica1(){
 float x,cambio=0;
 printf("Digite un numero: ");
 scanf("%f",&x);
 cambio = ceil(x);
 printf("%.2f",cambio);
}
void funcion_matematica2(){
 float x,cambio=0;
 printf("\nDigite un numero: ");
 scanf("%f",&x);
 cambio = fabs(x);
 printf("%.2f",cambio);
}
void funcion_matematica3(){
 float x,cambio=0;
 printf("\nDigite un numero: ");
 scanf("%f",&x);
 cambio = floor(x);
 printf("%.2f",cambio);
}
void funcion_matematica4(){
 int x,y,cambio=0;
 printf("\nDigite dos numeros: ");
 scanf("%i %i",&x,&y);
 cambio = fmod(x,y);
 printf("%i",cambio);
}
void funcion_matematica5(){
 int x,y,cambio=0;
 printf("\nDigite dos numeros: ");
 scanf("%i %i",&x,&y);
 cambio = pow(x,y);
 printf("%i",cambio);
}
void funcion_matematica6(){
 float x,cambio=0;
 printf("\nDigite un numero: ");
 scanf("%f",&x);
 cambio = sqrt(x);
 printf("%.2f",cambio);
}?
