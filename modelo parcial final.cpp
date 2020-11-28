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
Cantidad de entradas vendidas en total
La pelicula que menos recaudo*/
int Total(int,int);
main(){
	int turno=0, pelicula=0, entradas=0;
	int pagar=0; // variable para mostrar a pagar cada vuelta
	int contadorpeli1=0, contadorpeli2=0, contadorpeli3=0, contadorpeli4=0; //variables de contador de peliculas en total
	int recaudapeli1=0, recaudapeli2=0, recaudapeli3=0, recaudapeli4=0;
	int contaentradas=0;
	int acumulagh=0, cuentanormal=0;

	printf("1.Turno Matine\n2.Turno Normal\n3.Informes\n 4. Salir\n Respuesta: ");
	scanf("%d",&turno);
	
	while (turno >=1 && turno <= 3){
		printf("\n1.Rapido y furioso\n2.La bella y la bestia\n3.Sin hijos\n4.Grandes heroes\nRespuesta: \n ");
		scanf("%d",&pelicula);
		printf("Cantidad de entradas: ");
		scanf("%d",&entradas);
			switch(turno){
	  		    case 1:
	  		    	if (turno==1){
	  		    		pagar=entradas*120;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    		getch();
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
						printf("El total a pagar es %d\n",pagar);
						
						}
				contadorpeli1+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli1+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 2:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n",pagar);
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    		
						}
						contadorpeli2+=entradas; //para saber luego la cantanidad el menor y mayor
						recaudapeli2+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    		break;
	  		    case 3:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    		
								  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    		
						}
				contadorpeli3+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli3+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 4:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		acumulagh+=pagar;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    		
					  }
						else if (turno==2){
						pagar=entradas*180;
	  		    		printf("El total a pagar es %d\n",pagar);
	  		    	
						}
				contadorpeli4+=entradas; //para saber luego la cantanidad el menor y mayor	
				recaudapeli4+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula	
	  		    break;
		
					  	 
	
	}
	
	 		   
	printf("1.Turno Matine\n2.Turno Normal\n3.Informes\n 4. Salir\n Respuesta: ");
	scanf("%d",&turno);
      
	}
	
	
contaentradas=contadorpeli1+contadorpeli2+contadorpeli3+contadorpeli4;	

printf("El total vendido de grandes heroes turno matine es de %d pesos\n",acumulagh);
printf("El total vendido de todas las peliculas en turno normal es de %d pesos\n",cuentanormal);
printf("La cantidad total de entradas vendidas es de %d\n",contaentradas);
	              // la variabler recuadapeli1,2,3,4 sirve para comparar quien vendio menos
	                     
	      
								    } 




