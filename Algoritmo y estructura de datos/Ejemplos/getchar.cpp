#include <stdio.h>
#include <stdio.h>ç

using namespace std;
int main(int argc, char** argv)
{
    float p,t;
    char i;
    i='n';
   	do{
   		printf("Ingrese numero");
   		scanf("%f",&p);
   		printf("\n desea continuar");
   		scanf("%c",&i);
   		getchar();
	   }while(i!='n' && i!='N');
    
      getchar();
      return 0;
