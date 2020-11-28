#include <stdio.h> 
/*

 Se debe especificar en la �definici�n� de la funci�n, a trav�s del 
 s�mbolo * seguido al tipo de argumento del que estamos pasando 
 su direcci�n . 
 
 En la llamada a la funci�n, para indicar que estamos pasando la direcci�n 
 de memoria del dato a pasar, se debe anteponer al mismo el s�mbolo 
 & (caso especial de arrays no hace falta).  
 Al finalizar la ejecuci�n de la funci�n, el valor de dicha direcci�n permanece
 igual y lo que se ha modificado es el contenido de esa direcci�n de memoria. 
*/

void modificar(int *variable); 
main() 
{  
int i = 1;  
printf("\ni=%d antes de llamar a la funcion modificar", i);  
modificar(&i);  
printf("\ni=%d despu�s de llamar a la funcion modificar", i);  
return 0; 
} 
void modificar(int *variable) 
{ 
printf("\nvariable = %d dentro de modificar", *variable); *variable = 9; 
printf("\nvariable = %d dentro de modificar", *variable); 
}

