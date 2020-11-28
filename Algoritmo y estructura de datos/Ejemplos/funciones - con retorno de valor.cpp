#include<stdio.h>
/*
Tenemos dos tipos de funciones:
 -Sin retorno de valor:
        void nombredefuncion(parametros){
        instrucciones
	}
 -Funciones con retorno de valor:
   tipo_dato nombreFuncion(parametros){
   intrucciones...
   return expresion
}

*/
//Con funcion que retornan valor
//Prototipos
int sumar(int n1, int n2);

int main(){
	int a,b,suma=0;
	printf("Digite 2 numeros:\n");
	scanf("%i %i",&a,&b);
	printf("La suma es %d",sumar(a,b));
	return 0;
}

int sumar(int n1, int n2){
int suma=0;
suma=n1+n2;
return suma;
}
