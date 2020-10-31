#include<stdio.h>


/* imprimir el cuadrado de los primeros numeros pares */

int main() {
	int num;
	num = 2;
	printf("%d\n",num);
	while (num<200) {
		num = num+2;
		printf("%d\n",num);
	}
	return 0;
}

