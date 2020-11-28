#include <stdio.h> 
void total (int);  
void imprima (); 
int acum; 
int main() 
{  
int cont;
acum=0;
for(cont=0;cont<10;cont++)  
{   
total(cont);   
imprima();  
} 
} 	
 
void total(int x) 
{  
acum=acum+x; 
} 
 
void imprima () 
{  
int cont;  
for(cont=0;cont<5;cont++)   
printf("*");  
printf("La suma es: %d \n",acum); 
}
