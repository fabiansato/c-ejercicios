#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include <Windows.h>


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
4
Se deben usar por lo menos dos funciones
Informar: 
Total vendido de la pelicula grandes heroes en turno matine
Total vendido de todas las peliculas del turno normal
Cantidad de entradas vendidas en total
La pelicula que menos recaudo*/

int FuncionTurno(int);
int FuncionPeliculas(int *pelicula);
void FuncionSonido(void);

main(){
	system ("COLOR F0");
	int turno=0, pelicula=0, entradas=0;
	int pagar=0; // variable para mostrar a pagar cada vuelta
	int contadorpeli1=0, contadorpeli2=0, contadorpeli3=0, contadorpeli4=0; //variables de contador de peliculas en total
	int recaudapeli1=0, recaudapeli2=0, recaudapeli3=0, recaudapeli4=0,max=0,min=0;
	int contaentradas=0, pelimenor,montomenor;
	int cuentah=0, cuentanormal=0;

	
	turno=FuncionTurno(turno);
		while (turno==1 || turno==2){
		FuncionPeliculas(&pelicula);
		printf("Cantidad de entradas: ");
		scanf("%d",&entradas);
			switch(pelicula){
	  		    case 1:
	  		    	if (turno==1){
	  		    		pagar=entradas*120;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
						printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
						
						}
				contadorpeli1+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli1+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 2:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
						}
						contadorpeli2+=entradas; //para saber luego la cantanidad el menor y mayor
						recaudapeli2+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    		break;
	  		    case 3:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
								  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
						}
				contadorpeli3+=entradas; //para saber luego la cantanidad el menor y mayor
				recaudapeli3+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula
	  		    break;
	  		    case 4:
	  		    		if (turno==1){
	  		    		pagar=entradas*120;
	  		    		cuentah+=pagar;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    		
					  }
						else if (turno==2){
						pagar=entradas*180;
						cuentanormal+=pagar;
	  		    		printf("El total a pagar es %d\n Presione una Tecla para continuar...",pagar);
	  		    		getch();
	  		    		system("cls");
	  		    	
						}
				contadorpeli4+=entradas; //para saber luego la cantanidad el menor y mayor	
				recaudapeli4+=pagar; // guarda el dato de cuanto recuado en pesos esta pelicula	
	  		    break;
			  	 	
	}
	
	 		   
	turno=FuncionTurno(turno);
      
	}
	
	
contaentradas=contadorpeli1+contadorpeli2+contadorpeli3+contadorpeli4;	

printf("El total vendido de grandes heroes turno matinee es de %d pesos\n",cuentah);
printf("El total vendido de todas las peliculas en turno normal es de %d pesos\n",cuentanormal);
printf("La cantidad total de entradas vendidas es de %d\n",contaentradas);
pelimenor=1;
montomenor=contadorpeli1;
if (contadorpeli1<montomenor){
pelimenor=2;
montomenor=contadorpeli2;
}
if (contadorpeli3<montomenor){
pelimenor=3;
montomenor=contadorpeli3;
}
if (contadorpeli4<montomenor){
pelimenor=4;
montomenor=contadorpeli4;
}
printf("La peli que menos vendio es la %d y solamente vendio %d\n",pelimenor,montomenor);
	   FuncionSonido();
} 
	   	   						    
int FuncionTurno(int turno)
{


printf("_____________________________________________________________\n");
printf("HOLA, Por favor seleccione del menu el turno de su pelicula \n");
printf("_____________________________________________________________\n");
printf("1.Turno Matine\n2.Turno Normal\no Cualquier otra tecla para dar resultados y salir\n");
printf("_____________________________________________________________\n");
printf("Respuesta: ");
scanf("%d",&turno);
return(turno);
}


int FuncionPeliculas(int *pelicula){
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
printf("Ahora elegi la pelicula: \n");
		scanf("%d",&pelicula);

}



void FuncionSonido (void){
	 Beep(523,50);  // 523 hertz (C5) for 500 milliseconds
  Beep(587,50);
  Beep(659,50);
  Beep(698,50);
  Beep(784,50);
  
}



