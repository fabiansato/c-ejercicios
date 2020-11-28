#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {	

int n,tamano,aux=0,aux2=0;
int T[6]={1,2,3,4,5,6};	
printf("\nMostraremos todos los vectores\n");	
	
	for (n=0;n<6;n++)		{
		printf("[%d]",T[n]);;
							}
	
	tamano=6;
		for(n=0;n<tamano/2;n++){
			int temp=T[n];
			T[n]=T[tamano-1-n];
			T[tamano-1-n]=temp;
		}
		

printf("\nMostraremos todos los vectores\n");	
	
	for (n=0;n<6;n++)		{
		printf("[%d]",T[n]);;
							}		
			
			
	    	}
