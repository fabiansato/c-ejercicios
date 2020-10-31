/* Crear un programa para saber el salario semanal de unos empleados a los que se le paga 150 la hora. 
Se ingresan las horas trabajadas y se muestra el salario que se debe pagar tambien informar el total
de todos los sueldos a pagar. El programa corta con horas trabajadas = 0*/

#include<stdio.h>

int main() {
	int dinero;
	int horastrabajadas;
	int total;
	horastrabajadas = 1;
	while (horastrabajadas!=0) {
		printf("Ingrese las horas trabajadas por el empleado:\n");
		scanf("%d",&horastrabajadas);
		dinero = 150*horastrabajadas;
		total = total+dinero;
		printf("El dinero que recibe este empleado es: %d\n",dinero);
	}
	printf("El total a pagar de todos los empleados es: %d\n",total);
	return 0;
}

