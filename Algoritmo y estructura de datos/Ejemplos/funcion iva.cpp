#include <stdio.h> 

float precio(float base, float impuesto) /* definición */ 
{
 float calculo;  
 calculo = base + ((base * impuesto)/100);  
 return calculo; 
 } 
 
 main() { 
 float importe, tasa;  printf("Ingrese el porcentaje del IVA: ");  
 scanf("%f",&tasa);      
 printf("\nIngrese el precio: ");      
 scanf("%f",&importe);  
 printf("\nEl precio a pagar es: %.2f\n",precio(importe, tasa));  return 0; 
 } 
