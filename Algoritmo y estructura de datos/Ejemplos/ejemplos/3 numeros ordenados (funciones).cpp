// Hacer un programa que muestre 3 números ordenados de ascendente mente, utilizar un procedimiento para cada operación.
#include<stdio.h>
void ascendente();
int main ()
{
 ascendente();
 
 return 0;
}
void ascendente(){
int numero1,numero2,numero3;
printf("Ingrese tres numeros: ");
scanf("%d %d %d",&numero1,&numero2,&numero3);
 if(numero1>numero2)
 {
  if(numero1>numero3)
 {
   if(numero2>numero3)
   {
    printf("Los numeros ordenados ascendentemente: %d %d %d",numero3,numero2,numero1);
   }
   else
   {
    printf("Los numeros ordenados ascendentemente: %d %d %d",numero2,numero3,numero1);
   }
 }
 else
  {
  printf("Los numeros ordenados ascendentemente: %d %d %d",numero2,numero1,numero3); 
     }
 }
else if(numero2>numero3)
{
  if(numero3>numero1)
  {
    printf("Los numeros ordenados ascendentemente: %d %d %d",numero1,numero3,numero2);
  }
 else
  {
   printf("Los numeros ordenados ascendentemente: %d %d %d",numero3,numero1,numero2);                    
  }   
}
else
{
 printf("Los numeros ordenados ascendentemente: %d %d %d",numero1,numero2,numero3);
}
}
