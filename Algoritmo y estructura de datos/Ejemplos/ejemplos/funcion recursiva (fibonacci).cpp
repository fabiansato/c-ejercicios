//Recursividad 
//Serie Fibonacci
// 1.1.2.3.5.8

#include<stdio.h>

int fibonacci(int n);
int main(){
	
	int num,i;
	printf("ingrese el numero de elementos:\n");
    scanf("%i",&num);
    
    for (i=1;i<=num;i++){
    	printf("%i , ",fibonacci(i));
	}
	return 0;
}

int fibonacci(int n){
  if (n==0 || n==1){
  	return n;
  }
  else{
  	return(fibonacci(n-1)+fibonacci(n-2));
	  }
  }

