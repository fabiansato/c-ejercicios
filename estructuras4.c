/*
Una empresa desea saber el sueldo a pagar de sus empleados según las horas trabajadas a cierta tarifa porhora. Si el empleado es tarifa 1 = a 30 la hora tarifa 2 = 40 la hora y tarifa 3 = 50 la hora.
Se sabe que si el sueldo supera los 8000 se descuenta el 10 poricento de  impuestos. Se desa saber cuantos empleados pagan impuestos. Se ingresa horas trabajadas. tarifa, pase. El programa permite
el ingreso mientras pase=SI
*/
#include<stdio.h>
#include<string.h>


int main() {
	int horastrabajadas;
	int impuestos;
	int subtotal;
	int tarifa;
	int total;
	int pase=1;
	while (pase==1) {
		printf("Ingresar Horas trabajadas\n");
		scanf("%d",&horastrabajadas);
		printf("Ingresar Tarifa del empleado 1 = 30 la hora, 2 = 40 la hora, y 3 = 50 la hora\n");
		scanf("%d",&tarifa);
		if (tarifa==1) {
			subtotal = horastrabajadas*30;
			printf("El subtotal que gana el empleado es:%d\n",subtotal);
		} else {
			if (tarifa==2) {
				subtotal = horastrabajadas*40;
				printf("El subtotal que gana el empleado es:%d\n",subtotal);
			} else {
				if (tarifa==3) {
					subtotal = horastrabajadas*50;
					printf("El subtotal que gana el empleado es:%d\n",subtotal);
				} 
			}
		}
		if (subtotal>8000) {
			total = subtotal-(subtotal*0.10);
			impuestos = impuestos+1;
			printf("El total a cobrar por el empleado es: %d\n",total);
			printf("--NOTA ESTE EMPLEADO SE LE DESCUENTA EL 10 PORCIENTO DE SU SUELDO--\n");
		} else {
			printf("El total a cobrar por el empleado es: %d\n",subtotal);
		}
		printf("Hay mas empleados? 1 = SI / 2 = NO \n");
		scanf("%d",&pase);
	}
	printf("La cantidad de empleados con impuestos (los que ganan mas que 8000) son en total: %d\n",impuestos);
	return 0;
}

