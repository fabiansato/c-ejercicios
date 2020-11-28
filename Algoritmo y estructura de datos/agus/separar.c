#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
    int num,m,i,x;
    int vector[12];
    int contador=1;   
   	int numaux,caso;
   	
   //ingreso de numero y separacion de cifras
    printf("ingrese el numero\n");
    
    scanf("%d",&num);
    numaux=num;
    
    while(num<=0)
    {
       printf("el numero debe ser positivo:\n");
       scanf("%d",&num);
    }
    
    i=0;
    while(num)
    {
       vector[i]=num%10;
       num=num/10;
       i++;
    }
    
    int j;
    for(j=0;j<i;j++)
    {
   
	   printf("\ndigito de orden %d es %d",j,vector[j]);
	
	}
    //contador de cifras
 
    while(numaux/10>0)
    {
        numaux=numaux/10;
        contador++;
    }
     
    printf("\nEl numero Tiene %u cifras\n",contador);
    getch();
    

    //fin de contador de cifras

    
    //inicio de conversion de numero a texto
    x=numaux;
    while (x>=0){
    switch (vector[x]){
    	
    	case 1: 
    	printf("UNO ");
    	break;
    	
    	case 2:
    	printf("DOS ");
    	break;

    	case 3:
    	printf("TRES ");
    	break;
    	
    	case 4:
    	printf("CUATRO ");
    	break;

    	case 5:
    	printf("CINCO ");
    	break;

    	case 6:
    	printf("SEIS ");
    	break;

    	case 7:
    	printf("SIETE ");
    	break;
    	
  	    case 8:
    	printf("OCHO ");
    	break;
    	
		case 9:
    	printf("NUEVE ");
    	break;
    	
  	    case 0:
    	printf("CERO ");
    	break;
    }
    x--;
        }
   //fin de conversion de numero a texto
}
