#include<stdio.h>
#include<conio.h>
#include<string.h>

 
int main()
{
    int num,contador=1;
    printf("Ingrese el numero\n");
    scanf("%d",&num);
 
    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
     
    printf("Tiene %u cifras",contador);
    getch();
    return 0;
}
