#include<stdio.h>
#include<conio.h>

/*       
Dada una compra de 30 PC para una empresa y sabiendo que cada una cuesta 11500 pesos. 
Sé que el proveedor me hace un 20% de descuento.
Sé que el envío me cobra un 5% del total.
Sé que el seguro de traslado es 12% del total el cual se devuelven si los equipos llegan bien.
Obtener el precio sin descuentos. El precio con todos los descuentos si todas las PC llegan bien. 
El precio con todos los descuentos si las PC llegan Mal. 
Solamente el precio del descuento, Solamente el precio del envío.

*/

int main() {
	
	int pc=11500,descuento=20,envio=5,seguro=12,subtotal,totalenvio,totalseguros,totaldescuentos;
	
	subtotal=pc*30;
	totalenvio=subtotal*envio/100;
	totaldescuentos=subtotal*descuento/100;
	totalseguros=subtotal*seguro/100;
	
	printf("\nEl precio sin descuentos es:%d ",subtotal);
	printf("\nEl precio con todos los descuentos si todas las PC llegan bien: %d",subtotal+totalenvio-totaldescuentos+totalseguros);
	printf("\nEl precio si todas las pc llegan mal: %d",subtotal+totalenvio-totaldescuentos);
	printf("\nEl precio del descuento es: %d",totaldescuentos);
	printf("\nEl precio solamente del evio es: %d ",totalenvio);
	getch();
	
}
