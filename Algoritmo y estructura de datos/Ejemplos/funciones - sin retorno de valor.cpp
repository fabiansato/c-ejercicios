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

//Prototipos
void saludo();

int main(){
	
	saludo();
	return 0;
}

void saludo(){
printf("\nHola mundo\n");
}
