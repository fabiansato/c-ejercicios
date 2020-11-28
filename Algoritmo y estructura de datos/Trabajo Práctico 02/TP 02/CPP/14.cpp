#include<stdio.h>
#include<conio.h>

/*       
Se realiza una encuesta entre 100 personas que votan por los candidatos A o B.
 Se pide informar los porcentajes obtenidos por cada candidato.
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
