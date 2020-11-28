#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> // para toupper


//Prototipo de las funciones
void cobro(); //Funcion de cobro
void carga(int *codigos, int *turnos, char *moviles, char *pagos); //Funcion de carga
void informe1();
void informe2 ();
int mostrarMenu(); //funcionpara mostrar el menu
int main(){
	int menu;
	int codigos[5], turnos[5]; //declaracion de variables
		char moviles[5], pagos[5];
	
	do{
		menu = mostrarMenu();
		
		switch(menu){
			
			case 1:
				cobro();
				getch();
				break;
			case 2:
				carga(codigos,turnos,moviles,pagos);
				getch();
				break;
			case 3:
				informe1();
				getch();
				break;
			case 4:
				informe2();
				getch();
				break;	
		}
	} while (menu != 5);
	
	return 0;
	
}

//Funcion para cargar el cobro de un pedio
void cobro()
{		

	int codigo, turno,i,total=0; //declaracion de variables
	char movil, pago;

	FILE *flujo; //abrimos el arhivo donde se guardara todo 
	flujo = fopen ("peaje.txt","a+");
	for(i=1;i<=5;i++){
		do{	// Se realiza el do while para poder verificar si el usuario ingrese correctamente 'c' o 'm'
		printf("Ingrese el tipo de movil de usuario \n(m)Moto $20 \n(a)Auto $40 \n(c)Camion $ 50\n");
		fflush(stdin);
		scanf("%c",&movil);
		movil = toupper(movil); //Pasamos a mayuscula para acortar 'c' o 'm' 'a'
		printf("El movil elegido es:%c\n",movil);
		
		if (movil='M'){
			total+=20;
		}else if (movil='A'){
			total+=40;
		}else if (movil='C'){
			total+=40;
		}
		
	}while(movil!='M'&&movil!='C'&&movil!='A');	

	do{
	system("cls");	
	printf("Ingrese el turno usuario\n(1)Pico $15 \n(2)Normal: $0\n");
	scanf("%i",&turno);
	printf("El turno: elegido es%i\n",turno);
	if (turno==1){
	total+=15;}
	}while(turno!=1&&turno!=2);	// con esto evitamos que el usuario igrese otra cosa
	
	do{ system("cls");
		printf("Ingrese el tipo de pago del usuario\n (s) Sube\n (e) efectivo)\n ");
		fflush(stdin);
		scanf("%c",&pago);
		pago = toupper(pago); //Pasamos a mayuscula para acortar 'S' o 'E'
		printf("movil:%c\n",pago);
	}while(pago!='S'&&pago!='E');

	system("cls");
	printf("Ingrese el codigo del usuario:\n");
	scanf("%i",&codigo);
	codigo = toupper(codigo);
	printf("codigo%i\n",codigo);
	//Abrir el archivo para guardar datos del peaje
	
	printf("El total a pagar de este cliente es %i\n",total);
	if (flujo == NULL){
	perror("Error en la apertura del archivo\n");		
 	} else{
	printf("\n\nSe guardaran los datos del codigo movil y turno!\n");		 
	fprintf(flujo,"%i\t%c\t%i\t%c\n",codigo,movil,turno,pago);
}
fclose(flujo);

}

}

//Mostrar menú y solicitar opción
int mostrarMenu(){
	int OpcionMenu;
	
	system("cls");
	printf("\n 1 - Ingresar cobro.\n");
	printf(" 2 - Cargar vectores.\n");
	printf(" 3 - Informe 1.\n");
	printf(" 4 - Informe 2.\n");
	printf("\n 5 - Salir.\n ");
	scanf("%d", &OpcionMenu);
	
	return OpcionMenu;
}

void carga(int *codigos, int *turnos, char *moviles, char *pagos){
	int n;
	FILE *flujo2; 
	flujo2 = fopen ("peaje.txt","r");
			if (flujo2 == NULL){
			perror("Error en la apertura del archivo\n");
			
 			} else{
	printf("\n\nEl archivo se abrio y se lee perfectamente!\n");
	
			 
 	for(n=0;n<=5;n++){
	 fscanf(flujo2,"%i\t%c\t%i\t%c\n",codigos[n],moviles[n],turnos[n],pagos[n]);
}
	 
}}
