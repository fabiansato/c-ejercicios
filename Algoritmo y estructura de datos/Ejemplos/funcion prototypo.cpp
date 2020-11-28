#include <stdio.h>
/*prototipo de la funcion*/ 
int cubo(int numeroenfuncion);  
main() 
{  
int numero;
for(numero=1; numero<=5; numero++)  
{   
printf("El cubo del número %d es %d\n", numero, cubo(numero));  
} 
return 0; } /*definicion de la funcion*/ 
int cubo(int numeroenfuncion) 
{ 
int potencia; 
potencia = numeroenfuncion * numeroenfuncion * numeroenfuncion; 
return potencia; 
} 
