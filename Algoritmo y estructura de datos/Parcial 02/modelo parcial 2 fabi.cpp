#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>


int FuncionTurno(int);
int FuncionPeliculas(int);
void FuncionSonido(void);

main(){
	system ("COLOR F0");
	int turno=0, pelicula=0, entradas=0;
	int pagar=0; // variable para mostrar a pagar cada vuelta
	int contadorpeli1=0, contadorpeli2=0, contadorpeli3=0, contadorpeli4=0; //variables de contador de peliculas en total
	int recaudapeli1=0, recaudapeli2=0, recaudapeli3=0, recaudapeli4=0,max=0,min=0;
	int contaentradas=0, pelimenor,montomenor;
	int cuentatarde=0, cuentanoche=0,ticketstarde=0,ticketsnoche=0; 
	int contadorpeli[4] = {0,0,0,0};

	
	turno=FuncionTurno(turno);
		while (turno==1 || turno==2){
		pelicula=FuncionPeliculas(pelicula);
		printf("Cantidad de entradas: ");
		scanf("%d",&entradas);
			switch(pelicula){
	  		    case 1:
	  		    	
	  		    	if (turno==1){
	  		    		pagar=entradas*120;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanoche+=pagar;
						ticketsnoche++;
						printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
						
						}
				contadorpeli[0]+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli1+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 2:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanoche+=pagar;
						ticketsnoche++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
						}
						contadorpeli[1]+=entradas; //para saber luego la cantanidad el menor y mayor
						recaudapeli2+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    		break;
	  		    case 3:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
								  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanoche+=pagar;
						ticketsnoche++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
						}
				contadorpeli[2]+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli3+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 4:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanoche+=pagar;
						ticketsnoche++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    	
						}
				contadorpeli[3]+=entradas; //para saber luego la cantanidad el menor y mayor	
				recaudapeli4+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula	
	  		    break;
			  	 	
	}
	
	 		   
	turno=FuncionTurno(turno);
      
	}
	
	
contaentradas=contadorpeli[0]+contadorpeli[1]+contadorpeli[2]+contadorpeli[3];	

printf("\nLa cantidad de entradas vendidas a la tarde fueron: %d",ticketstarde);
printf("\nLa cantidad de entradas vendidas a la noche fueron: %d",ticketsnoche);
printf("\nLa cantidad de dinero recaudado en la tarde: %d",cuentatarde);
printf("\nLa cantidad de dinero recaudado en la noche es: %d",cuentanoche);
printf("\nLa cantidad tickets de deadpool 2: %d",contadorpeli[0]);
printf("\nLa cantidad de dinero de venta de deadpool 2: %d",recaudapeli1);
printf("\nLa cantidad tickets de Los Increibles 2: %d",contadorpeli[1]);
printf("\nLa cantidad de dinero de venta de Los Increibles 2: %d",recaudapeli2);
printf("\nLa cantidad tickets de El ritual: %d",contadorpeli[2]);
printf("\nLa cantidad de dinero de venta de el ritual: %d",recaudapeli3);
printf("\nLa cantidad tickets de Sin Filtros: %d",contadorpeli4);
printf("\nLa cantidad de dinero de venta Sin Filtros: %d\n",contadorpeli[3]);
printf("\nEl total de entradas vendidas es: %d",contaentradas);

int menorValor = 0, mayorvalor = 999999999999, primeraVez = 1, i;//Esta es la bandera;


	
	for (i=0;i<=3;i++){
		
		if (primeraVez == 1){  //Comienzo de la bandera.
			menorValor = contadorpeli[i];
			primeraVez = 0;
		} else if (contadorpeli[i] < menorValor){
			menorValor = contadorpeli[i];
		}
		if (primeraVez == 1){
			mayorvalor = contadorpeli[i];
			primeraVez = 0;
		} else if (contadorpeli[i] > mayorvalor){
			mayorvalor = contadorpeli[i];
		}
		
	}
	
	printf("\nLa cantidad de tickets menos vendidas fue = %d\n",menorValor);
	printf("\nLa cantidad de tickets mayor vendidas fue = %d\n\n",mayorvalor);
	system("pause");


	   FuncionSonido();
} 
	   	   						    
int FuncionTurno(int turno)
{


printf("_____________________________________________________________\n");
printf("HOLA, Por favor seleccione del menu el turno de su pelicula \n");
printf("_____________________________________________________________\n");
printf("1.Turno Tarde\n2.Turno Noche\no Cualquier otra tecla para dar resultados y salir\n");
printf("_____________________________________________________________\n");
printf("Respuesta: ");
scanf("%d",&turno);
return(turno);
}


int FuncionPeliculas(int pelicula){
system("cls");
printf("_____________________________________________________________\n");
printf("_____________________________________________________________\n");
printf("                                     |\n");
printf("                          ___________I___________\n");
printf("                         ( _____________________ (\n");
printf("                       _.-'|                    ||\n");
printf("                   _.-'   || 1-Deadpool2        ||\n");
printf("  ______       _.-'       ||                    ||\n");
printf(" |      |_ _.-'           || 2- Los             ||\n");
printf(" |      |_|_              ||     increibles 2   ||\n");
printf(" |______|   `-._          || 3- El ritual       ||\n");
printf("    /\          `-._       ||                    ||\n");
printf("   /  \             `-._   || 4- Sin Filtros     ||\n");
printf("  /    \                `- .I____________________||\n");
printf(" /      \                 ------------------------\n");
printf("/________\___________________/________________\______\n");
	printf("_____________________________________________________________\n");
	printf("_____________________________________________________________\n");
printf("Ahora elegi la pelicula: \n");
		scanf("%d",&pelicula);
		return(pelicula);
}

void FuncionSonido (void){
  Beep(523,50);  // 523 hertz (C5) por 500 milisegundos de sonido
  Beep(587,50);
  Beep(659,50);
  Beep(698,50);
  Beep(784,50);
  
}



