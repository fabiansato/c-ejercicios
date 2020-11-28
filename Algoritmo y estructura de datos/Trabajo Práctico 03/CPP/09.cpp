#include<conio.h>
#include<stdio.h>

/*
Dada la cantidad de horas trabajadas, la antigüedad, y la categoría del empleado.
        a. sabiendo que cobra 50 pesos por cada año trabajado y que el valor de
		la hora según la categoría: cat 1= 10, cat 2= 20, cat 3= 25, cat 4= 30.
        b. determinar sueldo del empleado.
        c. informar si el sueldo supera los 1000 pesos.
efectuar el ejercicio con al menos 2 funciones: una para calcular 
el cobro por antigüedad y otra para calcular el cobro por horas.
*/

 
int FuncionCategorias(int);
int Sueldo(int);

int main(){
int horas,sueldo,subsueldo,total,categoria,antiguedad,antiguedadtotal,plata;
printf("Ingrese horas trabajadas:\n");
scanf("%d",&horas);
printf("Ingrese Antiguedad en años:\n");
scanf("%d",&antiguedad);
printf("Ingrese categoria del trabajador:\n cat 1= 10, cat 2= 20, cat 3= 25, cat 4= 30\n---");
scanf("%d",&categoria);
antiguedadtotal=antiguedad*50;
plata=FuncionCategorias(categoria);
subsueldo=horas*plata;
sueldo=subsueldo+antiguedadtotal;
printf("El sueldo que tiene que cobrar el empleado es %d",sueldo);
getch();
return 0;
}

int FuncionCategorias(int categoria)
{
int sueldo=0;
switch(categoria){

	case 1:	
			sueldo=10;	
			break;
	case 2:	
			sueldo=20;	
			break;
	case 3:	
			sueldo=25;	
			break;						
	case 4:	
		sueldo=30;	
			break;
	default:
			sueldo=0;	
			break;
			}
return(sueldo);						
}

