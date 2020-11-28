#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Constante para definir dias en que se hará el trabajo
//IMPORANTE SE PUDE CAMBIAR ESTE NUMERO PARA HACER MENOS PEDIDOS
#define DIAS 31

//Prototipo de las funciones

void FuncionIngreso(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna);
void FuncionMenu(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna);
void FuncionMuestraDatos(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna);
void FuncionCalcula(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna);

int main(){
	
	int tiposobre[DIAS], edad[DIAS], peso[DIAS],operacion[DIAS],atendido[DIAS],cant_sobres[DIAS],vacuna[DIAS];
	char sexo[DIAS] ;	
	
	FuncionIngreso(tiposobre,edad,peso,operacion,atendido,cant_sobres,sexo,vacuna);	
	FuncionMenu(tiposobre,edad,peso,operacion,atendido,cant_sobres,sexo,vacuna);	

	return 0;
}

//Funcion de ingreso de datos
void FuncionIngreso(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna){
system("cls");
int opc,sex,vac,ope; //variables para seleción de menu
int fecha=1; //Variable para declarar los dias (empezaomos con 1)
while(fecha<=DIAS){
printf("---------------------------------\n"); //Cada vuelta muestra el día del mes
printf("Hoy es el dia %i del mes\n",fecha);
printf("---------------------------------\n");
//ingresamos si el fue atendido con anterioridad
printf("Ingrese la cantidad de veces que fue atendido anteriormente\n(Si no fue atendido con antes ponga 0):\n"); 
scanf("%i",&atendido[fecha]);
//ingresamos el sexo de animal
do{
		printf("Ingrese sexo:\n1-Hembra:H\n2-Macho:M\n");
		scanf("%i",&sex);
		switch(sex){
		
		case 1:sexo[fecha]='H';printf("Elegiste sexo de animal Hembra\n");break;
		case 2:sexo[fecha]='M';printf("Elegiste sexo de animal Macho\n");break;
		}		
		}while(sex>2||sex<0);

//Ingresamos la edad del animal
printf("Ingrese la edad del animal:\n");
scanf("%i",&edad[fecha]);

//Ingresamos el peso del animal
printf("Ingrese el peso del animal:\n");
scanf("%i",&peso[fecha]);

//Ingresamos la vacuna del animal
do{
   printf("Ingrese Vacuna\n1-800\n2-500\n3-Ninguna\n");
   scanf("%i",&vac);
   switch(vac){
   case 1: vacuna[fecha]=800; break;
   case 2: vacuna[fecha]=500; break;
   case 3: vacuna[fecha]=0; break;
	}
}while(vac>3||vac<0);


//Ingresamos la operacion del animal
do{
   printf("Ingrese Operacion\n1-1000\n2-3000\n3-Ninguna\n");
   scanf("%i",&ope);
   switch(ope){
   case 1: operacion[fecha]=1000; break;
   case 2: operacion[fecha]=3000; break;
   case 3: operacion[fecha]=0; break;
	}
}while(ope>3||ope<0);

		
		
//Ingresamos la marca del sobre		
do{
printf("Ingrese marca del sobre:\n 1-Dog Chow \n 2-Pedigree \n 3-Vital \n 4-Cesar\n");
scanf("%i",&opc);	
switch(opc){
	   	case 1: tiposobre[fecha]=1;break;
		case 2: tiposobre[fecha]=2;break;
        case 3: tiposobre[fecha]=3;break;
        case 4: tiposobre[fecha]=4;break;
               	   }
}while(opc>4||opc<0);
printf("Ingrese la cantidad de sobres que quiere comprar:\n");
scanf("%i",&cant_sobres[fecha]);


fecha++;
	system("cls"); //Borramos pantalla
	}
	
}

//Funcion para mostrar Datos
void FuncionMuestraDatos(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna)
{
	
	int x;
	system("cls"); //Borramos pantalla
	printf("-----------------------------------------------------------------------------\n");
	printf("|Dia\t|Atendido ant.\t|Sobre\t|Cant. sobres\t|Sexo\t|Edad\t|Peso\t|Vacuna\t|Operacion\n");
	printf("-----------------------------------------------------------------------------\n");
	for (x=1;x<=DIAS;x++){

	printf("|%i\t|%i v.\t\t|%i\t|%i\t\t|%c\t|%i\t|%i\t|%i\t|%i\n",x,atendido[x],tiposobre[x],cant_sobres[x],sexo[x],edad[x],peso[x],vacuna[x],operacion[x]);
}
}

//Funcion para hacer calculos
void FuncionCalcula(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna)
{
	int 
	tvac=0, //Total de $ vacunas
	top=0, //Total de $ operaciones
	tvacop=0, // Total entre vacunas y operaciones
	cvac=0, // Cantidad de vac 
	cop=0, //cantidad de operaciones
	them=0, // cantidad de hembras
	tmach=0, //cantidad de machos
	nuevoc=0, // Cuenta la cantidad de nuevos clientes
	viejoc=0, // cuenta la cantidad de viejos clientes
	tsobres=0, // cuenta la cantidad de sobres
	dogchow=0, // cuenta la cantidad de dogchow
 	pedigree=0, // cuenta la cantidad de pedigree
	vital=0, // cuenta la cantidad de vital
	cesar=0, // cuenta la cantidad de cesar
	y; //sirve para las vueltas del for
//comenzamos haciendo los calculos dentro de un bucle para luego informarlo
for (y=1;y<=DIAS;y++){
	tvac=tvac+vacuna[y]; //Guarda la cantidad de vacunas en $
	top=top+operacion[y]; // Guarda la cantidad de operaciones en $
	if(vacuna[y]!=0){
		cvac++;	} //Si el valor del array de vacuna es diferente a 0 cuenta vacunas
	if(operacion[y]!=0){
		cop++;	} //Si el valor del array de opracion es diferente a 0 cuenta operaciones
	if(sexo[y]='H'){
		them++; //cuenta cantidad de hembras
	}else {
		tmach++; //cuenta cantidad de machos
	}
	if(operacion!=0){
		viejoc++;  //Cuenta los usuarios viejos si el numero es diferente a 0
	}else {nuevoc++;	}	//sino cuenta usuarios nuevos
	tsobres=tsobres+cant_sobres[y];
	if(tiposobre[y]==1){
		dogchow++;
	}else if(tiposobre[y]==2){
		pedigree++;
	}else if(tiposobre[y]==3){
		vital++;
	}else if(tiposobre[y]==4){
		cesar++;
	}		
}
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("El total de dinero ganado con Vacunas es: %i \n",tvac);
printf("El total de dinero ganado con Operaciones es: %i\n",top);
printf("El total de vacuna/s dada/s: %i\n",cvac);
printf("El total de operacione/s hecha/s: %i\n",cop);
printf("El Total de $ entre operaciones y vacunas es\n",tvacop);
printf("----------------------------------------------\n");
printf("El total de macho/s: %i\n",tmach);
printf("El total de hembra/s: %i\n",them);
printf("----------------------------------------------\n");
printf("La cantidad de usuarios nuevo/s: %i\n",nuevoc);
printf("La cantidad de usuarios viejo/s: %i\n",viejoc);
printf("----------------------------------------------\n");
printf("La cantidad de sobres vendido/s: %i\n",tsobres);
printf("La cantidad de DOGCHOW vendido/s: %i\n",dogchow);
printf("La cantidad de PEDIGREE vendido/s: %i\n",pedigree);
printf("La cantidad de VITAL vendido/s: %i\n",vital);
printf("La cantidad de CESAR vendido/s: %i\n",cesar);
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("\n\n");

getch();

}
//Funcion Menu
void FuncionMenu(int *tiposobre,int *edad,int *peso,int *operacion,int *atendido,int *cant_sobres,char *sexo, int *vacuna)
{
	int elige; //variable para elegir el menu
	system("cls"); //borrar pantalla
    do{
    
	printf("\n********************\n");
	printf("Menu de seleccion:\n********************\n 1-Ingresa datos nuevamente \n 2-Muestra los datos \n 3-Realiza los calculos\n 4-Salir del programa\n");
	scanf("%i",&elige);

	switch(elige){
	case 1: 
	FuncionIngreso(tiposobre,edad,peso,operacion,atendido,cant_sobres,sexo,vacuna);	
	break;
	case 2:
	FuncionMuestraDatos(tiposobre,edad,peso,operacion,atendido,cant_sobres,sexo,vacuna);
	break;
	case 3:
	FuncionCalcula(tiposobre,edad,peso,operacion,atendido,cant_sobres,sexo,vacuna);
		}
	}while(elige!=4);
	
	
}
