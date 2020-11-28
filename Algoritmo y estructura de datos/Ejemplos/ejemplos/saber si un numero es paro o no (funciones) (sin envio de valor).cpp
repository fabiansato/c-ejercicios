#include <stdio.h>
//saber si un numero es par o no

//Con funciones que no retornan ningún valor
//prototipos
void comprobar(int num);
int main(){
	
	int num, x;
	printf("digite un numero:\n");
    scanf("%i",&num);
	comprobar(num);
	return 0;
}

void comprobar(int num){
	
	if(num%2==0){
		printf("El numero es par");
	}
	else if(num%2==1){
		printf("El numero es impar");
	}
}
