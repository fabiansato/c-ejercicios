#include<stdio.h>
#include<conio.h>
#define col  2
#define fil 2
int a=2;
int suma(int x);
main()
{
      int mat[col][fil], i=0,j=0,num=0;
      
      for(i=0;i<2;i++)
      {
         for(j=0;j<2;j++)
         {
            mat[i][j]=a;
         }
         a=a+2;
      }
            
      for(i=0;i<2;i++)
      {
         for(j=0;j<2;j++)
         {
            num=mat[i][j];
            printf("1-El numero es: %i\n",num);
            printf("3-El numero es: %i\n",suma(num));                           
         }
      }
 getch();
      
}
int suma(int x)
{
    int tot=0;
    
    tot=x+tot;
    x=tot+a;
    printf("2-el numero es: %i\n",x);
    return tot;}

