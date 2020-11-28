#include <stdio.h>
#include <locale.h>
#include <conio.h>


/*	
Dado un vector de 20 números. Hallar el promedio de los
elementos positivos y el porcentaje de los negativos.

*/

int main() {
	setlocale (LC_CTYPE,"spanish"); //para poner es español
	
	int i=0, array[21],neg=0,pos=0;
	float total1=0,total2=0,prom=0, porc=0;
	for (i=1;i<=20;i++)		{
		array[i]=i;
		printf("Ingrese un nota del alumno:\n");
		scanf("%d",&array[i]);
		if (array[i]>0){
				pos=pos+array[i];
					}	
					else if (array[i]<0)	{
						neg++;	
									}
									
		}

total1=pos;
total2=neg;
prom=total1/20;
porc=(neg*100)/20;

printf("El promedio de los elementos positivos es:%.2f\n",prom);
printf("El porcentaje de los elementos negativos es:%.2f porciento\n",porc);

getch();
	return 0;

	}
