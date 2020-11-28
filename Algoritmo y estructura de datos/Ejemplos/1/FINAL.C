#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

//Constantes
#define CLUBES 2
#define CATEGORIAS 5

//Prototipos
void mostrarMatriz(int matriz[CATEGORIAS][CLUBES]);
void mostrarMatrizPromedio(float matriz[CATEGORIAS][CLUBES]);
void minuscula(char cadena[]);
int mostrarMenu();
void solicitarDatos(char nombreF[],char apellidoF[],int *nacimientoF, float *estaturaF, char clubF[], int *permitir);
int corroborarDatos(char nombreF[],char apellidoF[],int nacimientoF, float estaturaF, char clubF[], int permitir);
void pausa();
void calcularPromedio(int Msocios[CATEGORIAS][CLUBES], float Msuma[CATEGORIAS][CLUBES], float Mpromedio[CATEGORIAS][CLUBES]);
void asignar(char categoriaSocio[], int *cuota, int MsociosF[CATEGORIAS][CLUBES], float MsumaEstaturasF[CATEGORIAS][CLUBES], char club[], int nacimiento, float estatura);
void informarNuevoSocio(int numeroSocio, int cuota, char categoriaSocio[]);
int reingresarDatos();
void cargarDatos(int Msocios[CATEGORIAS][CLUBES], float MsumaEstaturas[CATEGORIAS][CLUBES], int *numeroSocio);
void guardarDatos(int Msocios[CATEGORIAS][CLUBES], float MsumaEstaturas[CATEGORIAS][CLUBES]);

////////////////////////////////Globales
	//Clubes
	char club[][10] = {"Ateneo", "Ferro"};
	
	//Categorias
	char categoria[][10] = {"Menores", "Cadetes", "Juveniles", "Juniors", "Mayores"};

main (){
	setlocale (LC_CTYPE,"spanish");
	//Matrices
	int Msocios[CATEGORIAS][CLUBES] = {}; // Matriz de cantidad de socios inicializada con ceros
	float MsumaEstaturas[CATEGORIAS][CLUBES] = {}; // Matriz acumuladora de estatura inicializada con ceros
	float MpromedioEstaturas[CATEGORIAS][CLUBES] = {}; // Matriz de promedio de estatura inicializada con ceros
	
	//Declaracion de Variables
	int menu=0, club=0, numeroSocio=0, verificar=1, cuota=0, reingresar;
	char nombre[20]="", apellido[20]="", categoriaSocio[15]="", clubOpcion[10]="";
	int nacimiento=0, permitir=1;
	float estatura=0;
	
	//cargar datos de un archivo
	cargarDatos(Msocios, MsumaEstaturas, &numeroSocio);
	
	//Mostrar menu
	menu = mostrarMenu();
	
	//Bucle principal
	while(menu != 0){
		if (menu == 1){
			do{
				//Solicitar los datos del nuevo socio y almacenarlos por paso por referencia.
				solicitarDatos(nombre, apellido, &nacimiento, &estatura, clubOpcion, &permitir);
				
				//Preguntar si los datos ingresados son validos
				verificar = corroborarDatos(nombre, apellido, nacimiento, estatura, clubOpcion, permitir);
				
				if (verificar == 1){
					reingresar = 0; //Cambiar la variable a 0 para salir del bucle
					
					//Hacer todos los procesos segun los datos ingresados por el usuario
					asignar(categoriaSocio, &cuota, Msocios, MsumaEstaturas, clubOpcion, nacimiento, estatura);
					
					numeroSocio++; //Aumentar el numero de socio
					
					informarNuevoSocio(numeroSocio, cuota, categoriaSocio);
					pausa();	
				} else {
				    //Pregunta si desea reingresar los datos
					reingresar = reingresarDatos();
				}
			} while (reingresar == 1);
		}
		
		if (menu == 2){
			//Informar cantidad de socios por categoría y club
			mostrarMatriz(Msocios);
			pausa();
			
			//Calcular promedio de estaturas
			calcularPromedio(Msocios,MsumaEstaturas,MpromedioEstaturas);
			
			//Informar estatura promedio por categoría y club
			mostrarMatrizPromedio(MpromedioEstaturas);
			pausa();		
		}
		
		//Guardar datos en un archivo
		guardarDatos(Msocios, MsumaEstaturas);
		
		//Mostrar menu
		menu = mostrarMenu();
	}
	return 0;
}//FIN main

/////////////////FUNCIONES

//Procesar los datos segun lo ingresado por el usuario
void asignar(char categoriaSocio[], int *cuota, int MsociosF[CATEGORIAS][CLUBES], float MsumaEstaturasF[CATEGORIAS][CLUBES], char club[], int nacimiento, float estatura){
	int categoriaOpcion;
	
	//clubOpcion es Ateneo por defecto, los numeros correcponden al vector global "club"
	int clubOpcion = 0;
	//clubOpcion cambia a 1 si se ingreso Ferro
	if (strcmp(club,"Ferro")==0)
		clubOpcion = 1;
	
	//Dependienco del año de nacimiento se determina la categoria y el valor la cuota
	// 0 = menores, 1 = cadetes... etc, los numeros corresponden al vector global "categoria"
	switch(nacimiento){
		case 2005:
		case 2004:
			categoriaOpcion = 0;
			*cuota = 150;
			break;
		
		case 2003:
		case 2002:
			categoriaOpcion = 1;
			*cuota = 180;
			break;
		
		case 2001:
		case 2000:
			categoriaOpcion = 2;
			*cuota = 210;
			break;
		
		case 1999:
		case 1998:
		case 1997:
			categoriaOpcion = 3;
			*cuota = 240;
			break;
		
		default:
			categoriaOpcion = 4;
			*cuota = 270;
			break;
	}
	
	//almacenar en modo de cadena (EJ: "juveniles") la categoria que se le asigno segun el año de nacimiento en el switch.
	strcpy(categoriaSocio,categoria[categoriaOpcion]);
	
	//Se agrega un nuevo socio a la categoria y club seleccionado
	MsociosF[categoriaOpcion][clubOpcion]++;
	
	//Se suma la estatura para luego calcular promedio
	MsumaEstaturasF[categoriaOpcion][clubOpcion] += estatura;
}

//Calcular promedio de estatura
void calcularPromedio(int Msocios[CATEGORIAS][CLUBES], float Msuma[CATEGORIAS][CLUBES], float Mpromedio[CATEGORIAS][CLUBES]){
	int i, j;
	for (i=0; i<CATEGORIAS; i++){
	   for (j=0; j<CLUBES; j++){
	   		if(Msocios[i][j]!=0)
	   		Mpromedio[i][j] = Msuma[i][j] / Msocios[i][j];
	   }
	}
}

//Cargar los datos de los TXT y actualizar el número de socio.
void cargarDatos(int Msocios[CATEGORIAS][CLUBES], float MsumaEstaturas[CATEGORIAS][CLUBES], int *numeroSocio){
	FILE *archivoSocios, *archivoEstaturas;
	
	archivoSocios = fopen("matrizSocios.txt","r");
	archivoEstaturas = fopen("matrizEstaturas.txt","r");
	
	if (archivoSocios != NULL && archivoEstaturas != NULL){
		int i, j;
		for (i=0; i<CATEGORIAS; i++){
			for(j=0; j<CLUBES; j++){
				fscanf(archivoSocios,"%d", &Msocios[i][j]);
				fscanf(archivoEstaturas,"%f", &MsumaEstaturas[i][j]);
				*numeroSocio += Msocios[i][j];
			}
		}
		fclose(archivoSocios);
		fclose(archivoEstaturas);
	}
}

int corroborarDatos(char nombreF[],char apellidoF[],int nacimientoF, float estaturaF, char clubF[],int permitir){
	//Si no cumple con la edad minima devolver 0
	if(permitir == 0) return 0;
	
	int respuesta;
	
	system("cls");
	printf("Nombre: %s\n", nombreF);
	printf("Apellido: %s\n", apellidoF);
	printf("Año de nacimiento: %d\n", nacimientoF);
	printf("Estatura: %.2f metros\n", estaturaF);
	printf("Club: %s\n", clubF);
	
	//Preguntar si son correcto los datos
	printf("\n¿Son correctos los datos?\n1) SI\n0) NO\n");
	scanf("%d", &respuesta);
	
	return respuesta;
}

//Guardar datos en los TXT
void guardarDatos(int Msocios[CATEGORIAS][CLUBES], float MsumaEstaturas[CATEGORIAS][CLUBES]){
	FILE *archivoSocios, *archivoEstaturas;
		
	archivoSocios = fopen("matrizSocios.txt","w");
	archivoEstaturas = fopen("matrizEstaturas.txt","w");
		
	if (archivoSocios != NULL && archivoEstaturas != NULL){
		int i, j;
		for (i=0; i<CATEGORIAS; i++){
			for(j=0; j<CLUBES; j++){
				fprintf(archivoSocios,"%d ", Msocios[i][j]);
				fprintf(archivoEstaturas,"%.2f ", MsumaEstaturas[i][j]);
			}
		}
	}
		
	fclose(archivoSocios);
	fclose(archivoEstaturas);
}

//Informar los datos al nuevo socio
void informarNuevoSocio(int numeroSocio, int cuota, char categoriaSocio[]){
	system("cls");
	printf("Número de socio: %d\n",numeroSocio);
	printf("Cuota: $%d\n",cuota);
	printf("Categoria: %s\n",categoriaSocio);
}

// Convertir cadena a minusculas empezando con MAYUSCULA
void minuscula(char cadena[]){
	int i;
	//convertir toda la cadena a minusculas
	for (i=0; cadena[i]; i++){
			cadena[i] = tolower(cadena[i]);
	}
	
	//Convectir la primera letra de cada palabra a mayusculas
	cadena[0] = toupper(cadena[0]);
	int mayus = 0;
	for (i=0; cadena[i]; i++){
		if (mayus == 1){
			cadena[i] = toupper(cadena[i]);
			mayus = 0;
		}
		
		//Detectar espacio entre palabras para convectir a mayusculas el siguiente caracter
		if (cadena[i] == ' ')
			mayus = 1;
	}
}

//Menu
int mostrarMenu(){
	system("cls");
	int opcion;
	printf("Seleccionar opción:\n1) Ingresar nuevo Socio\n2) Consultar estado de los clubes\n\n0) Salir\n");
	scanf("%d", &opcion);
	
	return opcion;
}

//mostrar matriz
void mostrarMatriz(int matriz[CATEGORIAS][CLUBES]){
	system("cls");
	int i, j;
	
	printf("Cantidad de socios actuales por categoría:\n\n");
	
	//Imprimir cabecera de la tabla
	printf("         ");
	for (i=0; i<CLUBES; i++){
		printf("%9s",club[i]);
	}
	printf("\n----------------------------\n");
	
	//Imprimir contenido
	for( i=0; i<CATEGORIAS; i++){
			
		//Imprimir nombre de la categoria al principio de la fila
		printf("%-9s", categoria[i]);
		
		//Imprimir la fila
		for( j=0; j<CLUBES; j++){
			printf("%9d", matriz[i][j]);
		}
		
		printf("\n----------------------------\n");
	}
}

//Mostrar matriz float
void mostrarMatrizPromedio(float matriz[CATEGORIAS][CLUBES]){
	system("cls");
	int i, j;
	
	printf("Promedio de altura en metros por categoría:\n\n");
	//Imprimir cabecera de la tabla
	printf("         ");
	for (i=0; i<CLUBES; i++){
		printf("%9s",club[i]);
	}
	printf("\n----------------------------\n");
	
	//Imprimir contenido
	for( i=0; i<CATEGORIAS; i++){
			
		//Imprimir nombre de la categoria al principio de la fila
		printf("%-9s", categoria[i]);
		
		//Imprimir la fila
		for( j=0; j<CLUBES; j++){
			printf("%9.2f", matriz[i][j]);
		}
		
		printf("\n----------------------------\n");
	}
}

//Pausar programa
void pausa(){
	printf("\nPresione cualquier tecla para continuar\n");
	getch();
}

//Preguntar si desea reingresar los datos
int reingresarDatos(){
	int reingresarF;
	system("cls");
	printf("¿Reingresar los datos?\n1) SI\n0) NO\n");
	scanf("%d", &reingresarF);
	
	return reingresarF;
}

//Solicitar los datos al usuario
void solicitarDatos(char nombreF[],char apellidoF[],int *nacimientoF, float *estaturaF, char clubF[], int *permitir){
	//por defecto cumple con la edad minima
	*permitir = 1;
	int intentos = 0;// intentos de ingresar el club
	
	system("cls");
	
	printf("Ingrese nombre:\n");
	fflush(stdin);
	gets(nombreF);
	minuscula(nombreF);
	
	printf("\nIngrese apellido:\n");
	fflush(stdin);
	gets(apellidoF);
	minuscula(apellidoF);
	
	printf("\nIngrese año de nacimiento:\n");
	scanf("%d", nacimientoF);
	
	//si no cumple con la edad minima la bandera "permitir" cambia a 0 y se sale de la funcion.
	if (*nacimientoF > 2005){
		*permitir = 0;
		printf("\n\"La persona no cuenta con la edad mínima para asociarse.\"\n");
		pausa();
		return;
	}
	
	printf("\nIngrese estatura en centímetros:\n");
	scanf("%f", estaturaF);
	*estaturaF /= 100;
	
	do{//repetir mientras la palabra ingresada sea diferente de ferro y ateneo
	printf("\nIngrese el club del cual es socio: \"Ateneo\" o \"Ferro\"\n");
	scanf("%s", clubF);
	
	minuscula(clubF);//Convertir a minusculas con 1ra letra en mayusculas
	
	//Informar club incorrecto en caso de ser necesario
	if (strcmp(clubF,"Ateneo")!=0 && strcmp(clubF,"Ferro"))
		intentos++;
		if (intentos == 3){
			*permitir = 0;
			system("cls");
			printf("\n\"Se ingresó el club 3 veces seguidas de manera incorrecta.\"\n");
			pausa();
			return;
		}
		printf("¡Club incorrecto!\n");
		
		
	} while (strcmp(clubF,"Ateneo")!=0 && strcmp(clubF,"Ferro")!=0);
}
