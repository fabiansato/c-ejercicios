#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){

int num,mayor,menor,i;

for (i=0; i<5; i++) {
	printf("Dime mi numero:\n");
	scanf("%d",&num);
	if (i==0) {
		mayor=num;
		menor=num;
	}
	else{
		if (num > mayor) mayor = num;
		if (num < menor) menor = num;
	}
	
}
printf("\nEl numero mayor era: %d",mayor);
printf("\nEl numero menor era: %d",menor);
printf("\n\n\n");
getch();
}
	

