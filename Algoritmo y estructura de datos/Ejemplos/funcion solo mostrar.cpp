#include <stdio.h> 
void primera(void)
{  
 printf("Llamada a la funcion primera\n");  
 return; 
 } 
 void segunda(void) 
 {  
 printf("Llamada a la funcion segunda\n");  
 return; 
 } 
 
 main() 
 {  
 printf("La primera funcion llamada, main\n");  
 primera();  
 segunda(); 
 printf("Final de la función main\n");  
 return 0;  
 } 
 
