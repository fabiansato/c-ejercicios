#include<conio.h>
#include<stdio.h>
#include<math.h>

void imprimirvalor(void);
main()
{
	int contador=0;
	contador++;
	printf("\n el valor de contador es:%d\n",contador);
	getch();
	imprimirvalor();
	printf("\n ahora el valor de contador :%d\n",contador);
	getch();
	return 0;
}

void imprimirvalor()
{
	int contador=5;
	printf("\n el valor de contador es :%d\n",contador);
	getch();
}

