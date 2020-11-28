#include <conio.h>
#include <stdio.h>

int main() {
   char nombre[25], apellido[25];
   
   printf("Escribe tu nombre:\n");
   scanf("%s",nombre);    
   printf("Escribe tu apellido:\n");
   scanf("%s",apellido);    
   
   printf("Tu nombre es %s\n",nombre);
   printf("Tu apellido es %s\n",apellido);
   
   getch();
   return 0;
}
