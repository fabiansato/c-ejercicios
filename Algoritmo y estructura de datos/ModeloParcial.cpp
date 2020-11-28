#include <stdio.h>
#include <conio.h>
/*Una empresa que cuenta con salas de cine desea una aplicacion para poder obtener
resultados de las peliculas que proyecta en un dia determinado:
	1. Rapido y furioso
	2. La bella y la bestia
	3. Sin hijos
	4. Grandes heroes
En dos turnos con distinto precio:
	1. Matine: 120 pe
	2. Normal: 180 pe
Se debera armar un menu con las siguientes opciones:
	1. Turno Matine
	2. Turno Normal
	3. Informes finales
	4. Salir
Por cada venta que se realiza se ingresa:
xxx	La pelicula
xxx	La cantidad de entradas
xxx	El turno
Finaliza la venta cuando se responde que no a la pregunta:
	"¿Desea realizar otra venta?"
	xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
	xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
Se deben usar por lo menos dos funciones
Informar: 
Total vendido de la pelicula grandes heroes en turno matine
Total vendido de todas las peliculas del turno normal
Cantidad de entradas vendidas e n total
La pelicula que menos recaudo*/
int Total(int,int);
main(){
	int Confirmacion = 1,Opcion,Pelicula,Entradas,Turno,Precio,ContaEntradas=0,Aux;
	int AcuM5=0,AcuM6=0,AcuM7=0,AcuM8=0,Acum5=0,Acum6=0,Acum7=0,Acum8=0;
	printf("1.Turno Matine\n2.Turno Normal\n3.Informes\nRespuesta: ");
	scanf("%d",&Turno);
	while (Turno != 4){
		printf("5.Rapido y furioso\n6.La bella y la bestia\n7.Sin hijos\n8.Grandes heroes\nRespuesta: ");
		scanf("%d",&Pelicula);
		printf("Cantidad de entradas: ");
		scanf("%d",&Entradas);
			switch(Turno){
	  		    case 1:
	  		    	Aux = Total(Entradas,120);
				  	 ContaEntradas+=Entradas;
				  	 switch(Pelicula){
				  	 	case 5:
							  AcuM5+=Aux;
							  printf("El total a pagar es de %d\n",Aux);
							  break;
	                    case 6:
	                    	printf("El total a pagar es de %d\n",Aux);
	                    	AcuM6+=Aux;
	                    	break;
                    	case 7:
						  	 AcuM7+=Aux;
						  	 printf("El total a pagar es de %d\n",Aux);
						  	 break;
			  	 		 case 8:
							  AcuM8+=Aux;
							  printf("El total a pagar es de %d\n",Aux);
							  break;
					   }//FIN DEL SWITCH ANIDADO
					   printf("Desea realizar otra venta?\n0.No\n1.Si\nRespuesta: ");
					   scanf("%d",&Confirmacion);
					   if (Confirmacion == 1){
						printf("1.Turno Matine\n2.Turno Normal\n3.Informes\nRespuesta: ");
						scanf("%d",&Turno);				   	
					   }else{
						Turno = 4;
					}
				  	 break;
	     		    case 2:
	     		    	Aux = Total(Entradas,180);
	     		    	ContaEntradas+=Entradas;
	     		    	switch(Pelicula){
					  	 	case 5:
								  Acum5+=Aux;
								  printf("El total a pagar es de %d\n",Aux);
								  break;
		                    case 6:
		                    	printf("El total a pagar es de %d\n",Aux);
		                    	Acum6+=Aux;
		                    	break;
	                    	case 7:
							  	 Acum7+=Aux;
							  	 printf("El total a pagar es de %d\n",Aux);
							  	 break;
				  	 		 case 8:
								  Acum8+=Aux;
								  printf("El total a pagar es de %d\n",Aux);
								  break;
						   }//FIN DEL SWITCH ANIDADO
						   printf("Desea realizar otra venta?\n0.No\n1.Si\nRespuesta: ");
						   scanf("%d",&Confirmacion);
						   if (Confirmacion == 1){
							printf("1.Turno Matine\n2.Turno Normal\n3.Informes\nRespuesta: ");
							scanf("%d",&Turno);	
						}else{
							Turno = 3;
							break;
						}
	                break;
	                case 3:
	                	printf("El total vendido de grandes heroes turno matine es de %d pesos\n",AcuM8);
	                	printf("El total vendido de todas las peliculas en turno normal es de %d pesos\n",Acum5+Acum6+Acum7+Acum8);
	                	printf("La cantidad total de entradas vendidas es de %d\n",ContaEntradas);
	                	//FALTA el de la que menos recaudo
	                	Turno = 4;
	                	break;
			
			
			}
		
		getch();
	}}

int Total(int Cantidad, int PrecioPorUnidad){
	int asd = Cantidad*PrecioPorUnidad;
	return asd;
}



