/* Este codigo ha sido generado por el modulo psexport 20160506-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	float horastrabajadas;
	float impuestos;
	char pass[MAX_STRLEN];
	float subtotal;
	float tarifa;
	float total;
	pass = "SI";
	while (strcmp(pass,"SI")==0) {
		printf("Ingresar Horas trabajadas\n");
		scanf("%f",&horastrabajadas);
		printf("Ingresar Tarifa del empleado 1 = 30 la hora, 2 = 40 la hora, y 3 = 50 la hora\n");
		scanf("%s",tarifa);
		if (tarifa==1) {
			subtotal = horastrabajadas*30;
			printf("El subtotal que gana el empleado es:%f\n",subtotal);
		} else {
			if (tarifa==2) {
				subtotal = horastrabajadas*40;
				printf("El subtotal que gana el empleado es:%f\n",subtotal);
			} else {
				if (tarifa==3) {
					subtotal = horastrabajadas*50;
					printf("El subtotal que gana el empleado es:%f\n",subtotal);
				} else {
					printf("ERROR TARIFA ERRONEA - Ingresar Tarifa del empleado 1 = 30 la hora, 2 = 40 la hora, y 3 = 50 la hora\n");
					scanf("%f",&tarifa);
				}
			}
		}
		if (subtotal>8000) {
			total = subtotal-(subtotal*0.10);
			impuestos = impuestos+1;
			printf("El total a cobrar por el empleado es: %f\n",total);
			printf("--NOTA ESTE EMPLEADO SE LE DESCUENTA EL 10 PORCIENTO DE SU SUELDO--\n");
		} else {
			printf("El total a cobrar por el empleado es: %f\n",subtotal);
		}
		printf("Hay mas empleados? SI / NO \n");
		scanf("%s",pass);
	}
	printf("La cantidad de empleados con impuestos (los que ganan mas que 8000) son en total: %f\n",impuestos);
	return 0;
}

