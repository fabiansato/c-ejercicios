#include<stdio.h>
#include<conio.h>
int x=0;
int calculo(int a, int b);
main()
{
      int y=1;
      
      printf("El valor de x es: %i\n",x);
      printf("El valor de y es: %i\n",y);
      x=x+1;
      printf("El valor de x es: %i\n",x);
      printf("El valor es: %i \n", calculo(x,y));
      printf("El valor es es: %i\n",y);
      getch ();
}

int calculo(int a, int b)
{
    a=6;
    
    printf("El valor de a es: %i\n", a);
    b=a;
    return b;
}


