#include<stdio.h>
#include<conio.h>

/*
7-	UN MINISUPERMERCADO CUENTA CON DOS CAJERAS, CADA DÍA SE GUARDA EL 
TOTAL QUE CADA UNA DE LAS CAJERAS RECAUDO. AL FINAL DE LA SEMANA, SE 
REALIZA LA SUMA DEL TOTAL DE VENTAS DE CADA CAJERA Y A LA QUE MAYOR 
RECAUDACIÓN TIENE SE LE DA UN PREMIO. ADEMÁS, EL GERENTE DESEA CONOCER 
EL DÍA DE MENOR VENTA DE CADA CAJERA. ESCRIBIR UN PROGRAMA QUE PERMITA 
INGRESAR LA RECAUDACIÓN DIARIA DE CADA CAJERA, UTILIZANDO DOS VECTORES 
PARA ELLOS (CARGADOS DESDE UNA FUNCIÓN) Y LUEGO CREAR UNA FUNCIÓN 
QUE PERMITA DETERMINAR CUÁL ES LA CAJERA QUE RECIBIRÁ EL PREMIO, 
Y UNA TERCER FUNCIÓN QUE IMPRIMA EL DÍA DE MENOR VENTA DE CADA CAJERA. 
*/

void cargar(int cajera1[], int cajera2[]); //prototipo de la funcion
void premio(int cajera1[], int cajera2[]); //prototipo de la funcion
void menor(int cajera1[], int cajera2[]); //prototipo de la funcion

int main(){
	int i, cajera1[8],cajera2[8];
	cargar(cajera1,cajera2);
	premio(cajera1,cajera2);	
	menor(cajera1,cajera2);
}

void cargar(int cajera1[], int cajera2[]){
		int i;
		for (i=1;i<8;i++){
		printf("\nIngresar lo ganado el dia %d por la primer cajera\n",i);
		scanf("%d",&cajera1[i]);
		printf("\nIngresar lo ganado el dia %d por la segunda cajera\n",i);
		scanf("%d",&cajera2[i]);
	}
}
void premio(int cajera1[], int cajera2[]){
	int i, cajera1total=0,cajera2total=0;
	for (i=1;i<8;i++){
		cajera1total=cajera1total+cajera1[i];
		cajera2total=cajera2total+cajera2[i];
	}
	if (cajera1total>cajera2total){
		printf("\nLa cajera 1 es la que mas gano esta semana, ella obtiene el premio\n");}
		else {
		printf("\nLa cajera 2 es la que mas gano esta semana, ella obtiene el premio\n");}			
		}
void menor(int cajera1[], int cajera2[]){
		int primeraVezc1=1, menorValorc1=0;
		int primeraVezc2=1, menorValorc2=0;
		int i, diac1, diac2;
		
		for (i=1;i<8;i++){
		if (primeraVezc1 == 1){
			menorValorc1 = cajera1[i];
			diac1=i;
			primeraVezc1 = 0;
		} else if (cajera1[i] < menorValorc1){
			menorValorc1 = cajera1[i];
			diac1=i;	
		}
	}

for (i=1;i<8;i++){
		if (primeraVezc2 == 1){
			menorValorc2 = cajera2[i];
			diac2=i;
			primeraVezc2 = 0;
		} else if (cajera2[i] < menorValorc2){
			menorValorc2 = cajera2[i];
			diac2=i;	
		}
	}

printf("\nEl dia que menos vendio la cajera 1 es el dia %d y vendio solamente %d",diac1,menorValorc1);	
printf("\nEl dia que menos vendio la cajera 2 es el dia %d y vendio solamente %d",diac2,menorValorc2);
}
	

