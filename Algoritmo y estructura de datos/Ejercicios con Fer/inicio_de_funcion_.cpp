#include<conio.h>
#include<stdio.h>

int negativo(int numero);
main()
{
	int n, resultado;
	printf("\n introduzca un numero:\n");
	scanf("%d",&n);
	resultado=negativo(n);
	if (resultado==1)
		{
		printf("\n El numero es negativo");
		getch();
		}
			else
			printf("\n El numero no es negativo"); 
					
	getch();
	return 0;
}

int negativo(int numero)
{
	int res;
	if(numero<0){
	res=1;
		}
		else
		res=0;
	
	return(res);
	getch();
}

