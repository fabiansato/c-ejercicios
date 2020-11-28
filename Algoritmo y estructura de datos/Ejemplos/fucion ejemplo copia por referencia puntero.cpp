#include <stdio.h> 
/*

 Se debe especificar en la “definición” de la función, a través del 
 símbolo * seguido al tipo de argumento del que estamos pasando 
 su dirección . 
 
 En la llamada a la función, para indicar que estamos pasando la dirección 
 de memoria del dato a pasar, se debe anteponer al mismo el símbolo 
 & (caso especial de arrays no hace falta).  
 Al finalizar la ejecuciòn de la función, el valor de dicha dirección permanece
 igual y lo que se ha modificado es el contenido de esa dirección de memoria. 
*/

void modificar(int *variable); 
main() 
{  
int i = 1;  
printf("\ni=%d antes de llamar a la funcion modificar", i);  
modificar(&i);  
printf("\ni=%d después de llamar a la funcion modificar", i);  
return 0; 
} 
void modificar(int *variable) 
{ 
printf("\nvariable = %d dentro de modificar", *variable); *variable = 9; 
printf("\nvariable = %d dentro de modificar", *variable); 
}

