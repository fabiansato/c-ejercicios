#include<conio.h>
#include<stdio.h>

main()
{
char nombres[30], apellidos[30];
printf("\n introduce los nombres del alumno seperado por espacio:\n");
gets(nombres);
printf("Ingrese el o los apellidos separados por espacio:\n");
gets(apellidos);
printf("\n %s %s",nombres,apellidos);
getch();
}
