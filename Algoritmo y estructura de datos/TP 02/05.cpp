#include<stdio.h>
#include<conio.h>
/* 
5- Escribir un algoritmo que solicite una nota e imprima por pantalla la calificación
 en formato “Aprobó” o “No Aprobó” según si la nota es mayor o igual que 7 o menor que 7.
 */

int main() {

int nota;
printf("Ingrese nota del alumno: \n");
scanf("%d",&nota);
if (nota>=7){
	printf("Aprobo");
}
else {
	printf("No aprobo");
}

}

