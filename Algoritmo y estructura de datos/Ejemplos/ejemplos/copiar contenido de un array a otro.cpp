/*
1 Copiar el contenido de un array1 de 5 elementos hacia
otro array 2
*/

#include<stdio.h>
#include<conio.h>

void copiararrays(int a[], int b[], int tamanio);
int main(){
	
	int array1[5]={1,2,3,4,5};
	int array2[5];
	
	printf("Copiando Arrays\n\n");	
	copiararrays(array1,array2,5);
	getch();
	return 0;
	
}
// a[] = array1
// b[] = array2
void copiararrays(int a[], int b[], int tamanio){
	int i;
	
	for(i=0;i<tamanio;i++)
    {
    	b[i]=a[i];
	}
		
	for(i=0;i<tamanio;i++)
    {
    printf("%i", b[i]);
	}
}
