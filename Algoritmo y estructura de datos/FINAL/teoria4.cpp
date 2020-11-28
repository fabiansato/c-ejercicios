#include<stdio.h>
#include<conio.h>

int main()
{
int numero[3]={1,2,3};
int *num;
int z,x,i;
z=2;

    num=numero;
    printf("%p",num);
    printf("%i\n",z);
    for(i=0;i<3;i++)
    {
        x=*num+z; 
        printf("%p\n",num);
        printf("%i\n",x);
        z++;
        num++;
    }
    getch();
    return 0;
}
