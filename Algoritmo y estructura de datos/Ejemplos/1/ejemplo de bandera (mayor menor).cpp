#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_CTYPE,"spanish");
	int primeraVez = 1;//Esta es la bandera
	int num, menorValor = 0, mayorvalor = 999999999999;
	
	printf("El programa finalizará cuando se ingrese el '0'\ne informará el menor número ingresado\n\n");
	
	printf("Ingresá un número:\n");
	scanf("%d", &num);
	
	while (num!=0){
		
		if (primeraVez == 1){
			menorValor = num;
			primeraVez = 0;
		} else if (num < menorValor){
			menorValor = num;
		}
		if (primeraVez == 1){
			mayorvalor = num;
			primeraVez = 0;
		} else if (num > mayorvalor){
			mayorvalor = num;
		}
		
		printf("Ingresá un número:\n");
		scanf("%d", &num);
	}
	
	printf("\nMenor valor = %d\n\n",menorValor);
	printf("\nMayor valor = %d\n\n",mayorvalor);
	system("pause");
}
