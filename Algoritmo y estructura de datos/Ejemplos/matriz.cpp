#include<stdio.h>
#include<conio.h>

#define FILAS 4
#define COLUMNAS 5

int main(){

int y, z;
int matriz[4][5];

for(y=0;y<4;y++) //filas
{
 
for(z=0;z<5;z++) //columnas
{
printf("ingrese el valor de la matriz[%i][%i]",y+1,z+1);
scanf("%i",&matriz[y][z]);
}
printf("\n");
}


for(y=0;y<FILAS;y++) //filas
{
for(z=0;z<COLUMNAS;z++) //columna
{
printf("%d  ",matriz[y][z]);
}
printf("\n");
}
getch();
}
