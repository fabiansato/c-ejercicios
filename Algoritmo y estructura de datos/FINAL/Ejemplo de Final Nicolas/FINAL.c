#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define SIZE 5



void Salir(void)
{
	exit(0);
}



int Pregunta()
{
	int respuesta;
	printf("1.Ingresar pedido.\n2.Cargar vectores.\n3.Informe 1.\n4.Informe 2.\n5.Salir.\nElección: ");
	scanf("%i",&respuesta);
	return respuesta;
}



void Ingresar_Pedido(FILE *archivo,int Cod_Op[],char Cod_Env[], int Cant_Env[], float Precio[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Ingrese código de operador: ");
		scanf("%i",&Cod_Op[i]);
		system("cls");
		printf("Ingrese código de envase: ");
		fflush(stdin);
		scanf("%c",&Cod_Env[i]);
		system("cls");
		printf("Ingrese cantidad de envases: ");
		scanf("%i",&Cant_Env[i]);
		system("cls");
		printf("Por favor, ingrese decimales sólo con coma.\n");
		printf("Ingrese precio del pedido: ");
		scanf("%f",&Precio[i]);
				fflush(stdin);
		system("cls");
	}
	/*for(i=0;i<SIZE;i++)
	{
		printf("%i\t%c\t%i\t%f\n", Cod_Op[i],Cod_Env[i], Cant_Env[i], Precio[i]);
	}*/
	system("pause");
}



void Cargar_Vectores(FILE *archivo,int Cod_Op[],char Cod_Env[], int Cant_Env[], float Precio[])
{
	//En realidad esta función no carga vectores. Guarda los datos en un archivo.
	//Intenté hacerlo de la forma sugerida, pero no llegaba siquiera a guardar los registros en un archivo.
	//Y me quedé sin tiempo.
	int i;
	system("del pedido.txt.");
	system("cls");
	for(i=0;i<SIZE;i++)
	{
		if((archivo=fopen("pedido.txt","a+"))!=NULL)
		{
			fprintf(archivo,"%i\t%c\t%i\t%f\n",Cod_Op[i],Cod_Env[i],Cant_Env[i],Precio[i]);
			fclose(archivo);
		}else{
			perror("");
		}
	}
	printf("Guardado exitoso\n");
	system("pause");
	system("cls");
}



void Informe_1(char Cod_Env[], int Cant_Env[])
{
	int i;
	int conta1=0,conta2=0,conta3=0;
	for(i=0;i<SIZE;i++)
	{
		if(Cod_Env[i]=='a')
		{
			conta1+=Cant_Env[i];
		}else if(Cod_Env[i]=='b')
		{
			conta2+=Cant_Env[i];
		}else if(Cod_Env[i]=='c')
		{
			conta3+=Cant_Env[i];
		}
	}
	system("cls");
	printf("Envase tipo a: %i pedidos, %i litros.\n",conta1,conta1);
	float litros = conta2*(1,5);
	printf("Envase tipo b: %i pedidos, %.2f litros.\n",conta2,litros);
	litros = conta3*2,25;
	printf("Envase tipo c: %i pedidos, %.2f litros.\n",conta3,litros);
	system("pause");
	system("cls");
	
}



void Informe_2(int Cod_Op[], float Precio[])
{
	int flag=0;
	int i;
	int mayor, aux;
	float acum = 0;
	system("cls");
	for(i=0;i<SIZE;i++)
	{
		if(flag==0)
		{
			mayor = Precio[i];
			aux = Cod_Op[i];
			flag = 1;
		}
		if (flag==1)
		{
			if(Precio[i] > mayor)
			{
				mayor = Precio[i];
				aux = Cod_Op[i];
			}
		}
		acum +=Precio[i];
	}
	printf("El código de operador de la operación de mayor precio es %i.\nEl total de todo lo facturado es %.2f.\n",aux,acum);
	system("pause");
	system("cls");
}



void Menu(FILE *archivo,int Ans,int Cod_Op[],char Cod_Env[], int Cant_Env[], float Precio[])
{
	switch(Ans)
	{
		case 1:
			Ingresar_Pedido(archivo,Cod_Op, Cod_Env, Cant_Env, Precio);
			break;
		case 2:
			Cargar_Vectores(archivo,Cod_Op,Cod_Env, Cant_Env, Precio);
			break;
		case 3:
			Informe_1(Cod_Env, Cant_Env);
			break;
		case 4:
			Informe_2(Cod_Op,Precio);
			break;
		case 5:
			Salir();
			break;
	}
	system("cls");
	Ans = Pregunta();
	Menu(archivo,Ans, Cod_Op, Cod_Env, Cant_Env, Precio);
}




main()
{
	FILE *archivo;
	setlocale(LC_ALL,"spanish");
	int Cod_Op[SIZE];
	char Cod_Env[SIZE];
	int Cant_Env[SIZE];
	float Precio[SIZE];
	int Ans = Pregunta();
	system("cls");
	Menu(archivo,Ans, Cod_Op, Cod_Env, Cant_Env, Precio);
}
