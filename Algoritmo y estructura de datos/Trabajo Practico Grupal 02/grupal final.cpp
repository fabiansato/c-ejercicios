#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>

//Constantes
#define PRECIOTARDE 50
#define PRECIONOCHE 45

//Prototipos de las funciones
int FuncionTurno(int);
int FuncionPeliculas(int);
void FuncionSonido(void);
int FuncionDatosFinal(int contadorpeli[],int *ticketstarde,int *ticketsnoche,int *cuentatarde,int *cuentanoche,int *recaudapeli1,int *recaudapeli2,int *recaudapeli3,int *recaudapeli4);
int FuncionMayormenor(int contadorpeli[]);

//Inicio del Main
main(){
	//Para poner en español el programa
	setlocale (LC_CTYPE,"spanish");
	//Para poner en colores el programa
	system ("COLOR F0");
	//Carga de variables y vectores
	int turno=0, pelicula=0, entradas=0;
	int pagar=0; // variable para mostrar a pagar cada vuelta
	int contadorpeli1=0, contadorpeli2=0, contadorpeli3=0, contadorpeli4=0; //variables de contador de peliculas en total
	int recaudapeli1=0, recaudapeli2=0, recaudapeli3=0, recaudapeli4=0;
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
	  		    		pagar=entradas*PRECIOTARDE;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*PRECIONOCHE;
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
	  		    		pagar=entradas*PRECIOTARDE;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*PRECIONOCHE;
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
	  		    		pagar=entradas*PRECIOTARDE;
						cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
								  }
						else if (turno==2){
						pagar=entradas*PRECIONOCHE;
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
	  		    		pagar=entradas*PRECIOTARDE;
	  		    		cuentatarde+=pagar;
						ticketstarde++;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
					  }
						else if (turno==2){
						pagar=entradas*PRECIONOCHE;
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
	
	
FuncionSonido();
FuncionDatosFinal(contadorpeli,&ticketstarde,&ticketsnoche,&cuentatarde,&cuentanoche,&recaudapeli1,&recaudapeli2,&recaudapeli3,&recaudapeli4);

//Inicio de funcion de bandera
FuncionMayormenor(contadorpeli);

//Inicio funcion de carga de peliculas que no estan en la lista, la misma se guarda en un archivo txt externo

char pelipedida[80];
    
    
    FILE *flujo;
    flujo = fopen ("./pedidosdepelis.txt","a+");
    
    if (flujo != NULL){
        
            printf("\nIntroduce peli que quieres que no estaba en la lista: ");
            fflush(stdin);
            gets(pelipedida);
            fprintf(flujo,"%s\n",pelipedida);
          }
        
        
        fclose(flujo);

	   
} 

//En esta funcoin pedimos el turno de la pelicula tarde o noche	   	   						    
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

//Funcion para pedir las peliculas
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
		if (pelicula<=0||pelicula>4){
			printf("Error la pelicula ingresada no está en la lista\n");
			printf("Elige la pelicula nuevamente: \n");
	    	scanf("%d",&pelicula);
			}
		
		return(pelicula);
}

//Cargamnos el valor del programa por datos por referencia.
int FuncionDatosFinal(int contadorpeli[],int *ticketstarde,int *ticketsnoche,int *cuentatarde,int *cuentanoche,int *recaudapeli1,int *recaudapeli2,int *recaudapeli3,int *recaudapeli4){
	
int contaentradas=contadorpeli[0]+contadorpeli[1]+contadorpeli[2]+contadorpeli[3];	
system("cls");
printf("\n------------------------------------------------------------\n");
printf("\n-----------Resultados Finales-------------------------------\n");
printf("\nEntradas Vendidas Tarde:		| %d	|",*ticketstarde);
printf("\nEntradas Vendidas Noche:		| %d	|",*ticketsnoche);
printf("\nEn la tarde se recaudó:			|$%d	|",*cuentatarde);
printf("\nEn la tarde se recaudó:			|$%d	|",*cuentanoche);
printf("\nDeadpool 2 tickets: 			| %d	|",contadorpeli[0]);
printf("\nDinero que recaudó deadpool 2:		|$%d	|",*recaudapeli1);
printf("\nLos Increibles 2 tickets:		| %d	|",contadorpeli[1]);
printf("\nDinero que recaudó Los increibles 2:	|$%d	|",*recaudapeli2);
printf("\nEl ritual tickets:			| %d	|",contadorpeli[2]);
printf("\nDinero que recaudó El ritual		|$%d	|",*recaudapeli3);
printf("\nSin Filtros Tickets:			| %d	|",contadorpeli[3]);
printf("\nDinero que recaudó Sin Filtros: 	|$%d	|",*recaudapeli4);
printf("\nTotal de entradas vendidas:		| %d	|",contaentradas);
}


//Inicio de Funcion Para mostrar la mayor cantaidad de tickets y la menor cantidad de tickets
//El uso de esta funcion es mediante bandera y el paso por referencia del vector.

int FuncionMayormenor(int contadorpeli[]) //Paso por referencia el valor del contador de peliculas en vector
{
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
	printf("\n--------------------------------------------------");
	printf("\nLa cantidad de tickets con menos vendidas fue = %d",menorValor);
	printf("\nLa cantidad de tickets con mayor vendidas fue = %d\n",mayorvalor);
	printf("--------------------------------------------------\n");
	system("pause");
}

//Funcion de sonido que el programa terminó exitosamente.

void FuncionSonido (void){
  Beep(523,50);  // 523 hertz (C5) por 500 milisegundos de sonido
  Beep(587,50);
  Beep(659,50);
  Beep(698,50);
  Beep(784,50);
  
}



