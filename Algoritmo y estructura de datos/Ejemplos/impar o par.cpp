#include<stdio.h>
#include<conio.h>

int main(){
int num, tipear=1;
while (tipear!=0){

printf("\nIngresar un numero:\n");
scanf("%d",&num);

if (num%2==0){
	printf("El numero ingresado es par\n");
}
else {
	printf("El numero ingresado es impar\n");
}
printf("\nIngrese 0 para terminar, o cualquier otro numero para continuar:\n");
scanf("%d",&tipear);
				}		

}

