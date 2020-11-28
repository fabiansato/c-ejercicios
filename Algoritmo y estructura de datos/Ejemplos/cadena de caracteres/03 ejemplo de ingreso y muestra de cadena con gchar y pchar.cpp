//como leer una cadena de caracteres con getchar y putchar

#include<stdio.h>
#include<conio.h>
int main(){
	
	char palabra[20];
	do{	
		scanf("%s",palabra);
		if(!feof(stdin)){ //Si estoy leyendo algo
		printf("\n%s",palabra);}
	  }while(!feof(stdin));


}
