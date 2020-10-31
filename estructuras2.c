/* En una empresa tienen datos que corresponden a 100 empleados. Informar cuantas cuentas con un sueldo mayor a 15000. Dato de ingreso = sueldo */

#include<stdio.h>

int main() {
	int cont;
	int i;
	int sueldo;
	for (i=1;i<=100;i=i+1) {
		printf("Ingresar sueldo\n");
		scanf("%d",&sueldo);
		if (sueldo>15000) {
			cont = cont+1;
		}
	}
	printf("Los sueldos mayores a 15000 fueron:%d\n",cont);
	return 0;
}

