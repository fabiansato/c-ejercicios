#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_CTYPE,"spanish");
	int primeraVez = 1;//Esta es la bandera
	int num, menorValor = 0;
	
	printf("El programa finalizar� cuando se ingrese el '0'\ne informar� el menor n�mero ingresado\n\n");
	
	printf("Ingres� un n�mero:\n");
	scanf("%d", &num);
	
	while (num!=0){
		
		if (primeraVez == 1){
			menorValor = num;
			primeraVez = 0;
		} else if (num < menorValor){
			menorValor = num;
		}
		
		printf("Ingres� un n�mero:\n");
		scanf("%d", &num);
	}
	
	printf("\nMenor valor = %d\n\n",menorValor);
	system("pause");
}