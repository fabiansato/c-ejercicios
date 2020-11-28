#include<stdio.h>
#include<conio.h>

/*       
Desarrolle un algoritmo para calcular el importe de una venta en un supermercado. 
El usuario debe ingresar  el nombre del producto, el precio por unidad y el número de unidades. 
El programa mostrará por pantalla el nombre del producto, el número de unidades vendidas y el precio total.
*/

int main() {
	
	char nombre[30];
	float preciounidad,numerounidades,total;
	
	
	printf("Ingrese el nombre del producto: \n");
	scanf("%s",&nombre);
	printf("Ingrese el precio por unidad del producto: \n");
	scanf("%f",&preciounidad);
	printf("Ingrese numero de unidades vendidas del producto: \n");
	scanf("%f",&numerounidades);
	total=preciounidad*numerounidades;
	printf("El nombre del producto es: %s \n Las unidades vendidas son: %f \nEl total que tiene que pagar es: %f \n",nombre,numerounidades,total);
	
}
