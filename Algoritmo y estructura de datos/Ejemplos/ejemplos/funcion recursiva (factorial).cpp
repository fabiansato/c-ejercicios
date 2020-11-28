/*Funcion recursiva
Una funcion recursiva es una funcion que se llama a si misma.
1- caso base
2- caso recursivo

a(x){
if(n=1){
return 0
}
else{
a(x-1);
}
*/
#include<stdio.h>


//4! = 4*3*2*1 = 4*3!
//3! = 3*2*1 = 3*2!

long factorial(int n);

int main(){
	int num;
	printf("Digite un numero:\n");
	scanf("%i",&num);
	
	printf("\nEl factorial del numero es: %li",factorial(num));
	
	return 0;
}

long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
	
}
