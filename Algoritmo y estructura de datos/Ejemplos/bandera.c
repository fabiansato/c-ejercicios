#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_CTYPE,"spanish");
	int primeraVez = 1;//Esta es la bandera
	int num, menorValor = 0;
	
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
		
		printf("Ingresá un número:\n");
		scanf("%d", &num);
	}
	
	printf("\nMenor valor = %d\n\n",menorValor);
	system("pause");
}
