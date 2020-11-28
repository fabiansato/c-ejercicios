#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

int main()
{
     char cadena[80];
     int x;
     strcpy(cadena,"HoLA MUNDo");
     for(x=0;cadena[x];x++)
                           cadena[x]=toupper(cadena[x]);
     printf("%s\n",cadena);
     getch();
     return 0;
}

