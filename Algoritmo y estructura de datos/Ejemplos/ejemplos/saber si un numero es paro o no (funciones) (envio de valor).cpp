#include <stdio.h>
//saber si un numero es par o no

//Con funciones que no retornan ningún valor
//prototipos
int comprobar(int num);
int main(){
	
	int num, x;
	printf("digite un numero:\n");
    scanf("%i",&num);
	x = comprobar(num);
	if (x==0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	return 0;
}

int comprobar(int num){
	
	if(num%2==0){
		return 0;
	}
	else if(num%2==1){
		return 1;
	}
}
