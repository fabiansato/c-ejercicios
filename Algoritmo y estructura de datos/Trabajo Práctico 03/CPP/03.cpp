#include<conio.h>
#include<stdio.h>

/* 
HALLAR EL ÁREA DE LA SIGUIENTE FIGURA Y MOSTRARLA POR PANTALLA.
HACER EL MISMO EJERCICIO CON LAS FUNCIONES AREA1, AREA2, ÁREA, MOSTRAR. 

	3 metros
 ________
|    	| <- 3 metros
|       |      4 metros
|       |_______
|				|
|				| <- 2 metros
|				| 
|				| 
 ---------------
 */



void areatotal(void)
{  
 int total,area1,area2;
area1=3*5;
area2=2*4;
total=area1+area2;
printf("El area total es:%d",total);
 return; 
 } 
 
 main() 
 {  

 areatotal();  
 
 return 0;  
 } 
 


