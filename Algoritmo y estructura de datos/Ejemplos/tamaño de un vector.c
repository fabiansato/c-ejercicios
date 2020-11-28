#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
int vectortamano, vectoringresado;
char string[32] = "hello, world";
vectortamano=sizeof(string); //nos dara 32 el tamaño total del vector
vectoringresado=strlen(string); // nos dara 12 el tamaño en letras ingresadas al vector
printf("\nEl tamano ingresado por el vector es %d\n",vectortamano);
printf("\nLa cantidad de datos ingresadas dentro del vector es %d\n",vectoringresado);
 return 0;
 getch();
}
