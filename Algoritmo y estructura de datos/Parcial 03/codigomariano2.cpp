#include<stdio.h>
#include<conio.h>

//Prototipo
int carga(int *comida,int *gaseosa,int *papas,int *codigo);
void recorrer(int *comida,int *gaseosa,int *papas,int *codigo);
int main(){
	int comida[5];
	int gaseosa[5];
	int papas[5];
	int codigo[5];
	char confirma;
	printf("Ingresar pedido?\nS=Si\n");
	scanf("%c",&confirma);
	
	if(confirma=='S'||confirma=='s'){
	printf("exito\n");
	carga(comida,gaseosa,papas,codigo);
	recorrer(comida,gaseosa,papas,codigo);
	}
	
}
int carga(int *comida,int *gaseosa,int *papas,int *codigo){
	int i, pedido,pedido2,pedido3;
	for(i=0;i<5;i++){
		do{
		printf("Elija el pedido de la comida %i:\n1-Hamburguesa completa $120\n2-Lomito Completo $160\n3-Bondiola completa $140\n ",i+1);
		scanf("%i",&pedido);
		}while(pedido>3||pedido<1);
		
		switch(pedido){
		
		case 1:
		printf("Elegiste Hamburguesa completa $120\n");
		comida[i]=120;	
		break;
		case 2:
		printf("Lomito Completo $160\n");
		comida[i]=160;	
		break;
	    case 3:
		printf("Bondiola completa $140\n");
		comida[i]=140;	
		break;
		}
	do{
		printf("A su pedido %i Quiere agregarle gaseosa? $60 adicional\n1-Si o 2-no ",i+1);
		scanf("%i",&pedido2);
		}while(pedido2>2||pedido2<1);
		
		if (pedido2==1){
		gaseosa[i]=60;
		}else{
			gaseosa[i]=0;
		}
	do{
		printf("A su pedido %i Quiere agregarle papas? $50 adicional\n1-Si o 2-no ",i+1);
		scanf("%i",&pedido3);
		}while(pedido3>2||pedido3<1);
		
		if (pedido3==1){
		gaseosa[i]=50;
		}else{
			gaseosa[i]=0;
		}
	printf("Ingrese el codigo de su producto numero %i (numeros reales)\n",i+1);
	scanf("%i",&codigo[i]);	
	printf("Fin de carga del producto %i\n",i+1);
}}
void recorrer(int *comida,int *gaseosa,int *papas,int *codigo){
int k;
for (k=0;k<5;k++){
	printf("El valor de la compra  %i\n",k+1);
	printf("Comida: %i\n",comida[k]);
	printf("Gaseosa: %i\n",gaseosa[k]);
	printf("Papas: %i\n",papas[k]);
	printf("Codigo: %i\n",codigo[k]);
}}
