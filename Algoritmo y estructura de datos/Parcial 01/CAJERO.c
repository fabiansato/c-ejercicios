#include<stdio.h>

int main() {
	int codigocajero;
	int moneda;
	float importe;
	float importeanterior;
	float juandolares;
	float juandolaresdeposito;
	float juandolaresextraccion;
	float juaneuros;
	float juaneurosdeposito;
	float juaneurosextraccion;
	float rubendolares;
	float rubendolaresdeposito;
	float rubendolaresextraccion;
	float rubeneuros;
	float rubeneurosdeposito;
	float rubeneurosextraccion;
	int tipoextraccion;
	rubendolares = 100000;
	rubeneuros = 100000;
	juandolares = 100000;
	juaneuros = 100000;
	moneda = 0;
	codigocajero = 1;
	importe = 0;
	tipoextraccion = 0;
	importeanterior = 0;
	juandolaresextraccion = 0;
	juandolaresdeposito = 0;
	juaneurosextraccion = 0;
	juaneurosdeposito = 0;
	rubendolaresextraccion = 0;
	rubendolaresdeposito = 0;
	rubeneurosextraccion = 0;
	rubeneurosdeposito = 0;
	while (codigocajero!=0) {
		printf("Ingrese codigo de cajero 1-Juan 2-Ruben 0-Terminar el dia\n");
		scanf("%i",&codigocajero);
		printf("Ingrese Moneda 1-Pesos 2-Dolares, 3-Euros\n");
		scanf("%i",&moneda);
		printf("Ingrese importe para realizar la transaccion\n");
		scanf("%f",&importe);
		printf("Realize el tipo de extraccion 1- Deposito 2-Extraccion\n");
		scanf("%i",&tipoextraccion);
		switch (codigocajero) {
		case 1:
			printf("Elegiste el cajero de Juan\n");
			switch (moneda) {
			case 1:
				printf("Elegiste moneda peso\n");
				printf("SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO\n");
				printf("El monto en Dolares de Juan es: %f\n",juandolares);
				printf("El monto en Euros de Juan es: %f\n",juaneuros);
				printf("\n");
				break;
			case 2:
				printf("Elegiste moneda dolar\n");
				switch (tipoextraccion) {
				case 1:
					juandolares = juandolares+importe;
					juandolaresdeposito = juandolaresdeposito+1;
					break;
				case 2:
					if (juandolares-importe>0) {
						juandolares = juandolares-importe;
						juandolaresextraccion = juandolaresextraccion+1;
					} else {
						printf("Ingresaste un valor que supera la cantidad para retirar\n");
					}
					break;
				default:
					printf("Ingresaste un codigo de extraccion incorrecto ingrese nuevamente\n");
				}
				printf("El monto en Dolares de Juan es: %f\n",juandolares);
				break;
			case 3:
				printf("Elegiste moneda euro\n");
				switch (tipoextraccion) {
				case 1:
					juaneuros = juaneuros+importe;
					juaneurosdeposito = juaneurosdeposito+1;
					break;
				case 2:
					if (juaneuros-importe>0) {
						juaneuros = juaneuros-importe;
						juaneurosextraccion = juaneurosextraccion+1;
					} else {
						printf("Ingresaste un valor que supera la cantidad para retirar\n");
					}
					break;
				default:
					printf("Ingresaste un codigo de extraccion incorrecto ingrese nuevamente\n");
				}
				printf("El monto en Euros de Juan es: %f\n",juaneuros);
				break;
			default:
				printf("Elegiste un codigo de moneda erroneo\n");
				printf("El monto en Dolares de Juan es: %f\n",juandolares);
				printf("El monto en Euros de Juan es: %f\n",juaneuros);
				printf("\n");
			}
			break;
		case 2:
			printf("Elegise el cajero de Ruben\n");
			switch (moneda) {
			case 1:
				printf("Elegiste moneda peso\n");
				printf("SOLICITE AL CLIENTE QUE REALICE ESTA OPERACION POR CAJERO AUTOMATICO\n");
				printf("El monto en Dolares de ruben es: %f\n",rubendolares);
				printf("El monto en Euros de ruben es: %f\n",rubeneuros);
				printf("\n");
				break;
			case 2:
				printf("Elegiste moneda dolar\n");
				switch (tipoextraccion) {
				case 1:
					rubendolares = rubendolares+importe;
					rubendolaresdeposito = rubendolaresdeposito+1;
					break;
				case 2:
					if (rubendolares-importe>0) {
						rubendolares = rubendolares-importe;
						rubendolaresextraccion = rubendolaresextraccion+1;
					} else {
						printf("Ingresaste un valor que supera la cantidad para retirar\n");
					}
					break;
				default:
					printf("Ingresaste un codigo de extraccion incorrecto ingrese nuevamente\n");
				}
				printf("El monto en Dolares de ruben es: %f\n",rubendolares);
				break;
			case 3:
				printf("Elegiste moneda euro\n");
				switch (tipoextraccion) {
				case 1:
					rubeneuros = rubeneuros+importe;
					rubeneurosdeposito = rubeneurosdeposito+1;
					break;
				case 2:
					if (rubeneuros-importe>0) {
						rubeneuros = rubeneuros-importe;
						rubeneurosextraccion = rubeneurosextraccion+1;
					} else {
						printf("Ingresaste un valor que supera la cantidad para retirar\n");
					}
					break;
				default:
					printf("Ingresaste un codigo de extraccion incorrecto ingrese nuevamente\n");
				}
				printf("El monto en Euros de ruben es: %f\n",rubeneuros);
				break;
			default:
				printf("Elegiste un codigo de moneda erroneo\n");
				printf("El monto en Dolares de ruben es: %f\n",rubendolares);
				printf("El monto en Euros de ruben es: %f\n",rubeneuros);
				printf("\n");
			}
			break;
		default:
			printf("El ingresado Codigo no es 1 o 2\n");
		}
	}
	printf("Se termino el dia del cajero\n");
	printf("Cantidad Dolares depositados en el cajero de juan son: %f\n",juandolaresdeposito);
	printf("Cantidad de Dolares extraidos en el cajero de juan son:%f\n",juandolaresextraccion);
	printf("Cantidad de Euros depositados en el cajero de juan son: %f\n",juaneurosdeposito);
	printf("Cantidad de Dolares extraidos en el cajero de juan son: %f\n",juaneurosextraccion);
	printf("Monto disponible en Dolares en el cajero de Juan es: %f\n",juandolares);
	printf("Monto disponible en Euro en el cajero de Juan es: %f\n",juaneuros);
	printf("Se termino el dia del cajero\n");
	printf("Cantidad Dolares depositados en el cajero de ruben son: %f\n",rubendolaresdeposito);
	printf("Cantidad de Dolares extraidos en el cajero de ruben son:%f\n",rubendolaresextraccion);
	printf("Cantidad de Euros depositados en el cajero de ruben son: %f\n",rubeneurosdeposito);
	printf("Cantidad de Dolares extraidos en el cajero de ruben son: %f\n",rubeneurosextraccion);
	printf("Monto disponible en Dolares en el cajero de ruben es: %f\n",rubendolares);
	printf("Monto disponible en Euro en el cajero de ruben es: %f\n",rubeneuros);
	return 0;
}

