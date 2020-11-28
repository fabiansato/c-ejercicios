//Pasar un numero entero a binario con recursividad

#include<stdio.h>
void binario(int n);
int main(){
	
	int num;
	
	do{
		
		printf("Digite un numero:\n");
		scanf("%i",&num);
	}while(num<0);
	
	binario(num);
	return 0;
}

void binario(int n){
	if(n>1) binario(n/2);
	
	printf("%i",n%2);
	
}
