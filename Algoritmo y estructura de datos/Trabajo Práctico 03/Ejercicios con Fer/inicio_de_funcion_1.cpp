#include<conio.h>
#include<stdio.h>
#include<math.h>

void primera (void);
void segunda (void);
main()
{
	printf ("\n la primera funcion llamada main");
	getch();
	primera();
	segunda();
	printf("\n final de la funcion mail");
	getch();
	return 0;
}

void primera()
{
	printf ("\n llamada a la funcion primera");
	getch();
}
void segunda ()
{printf ("\n llamada a la funcion segunda");
getch();
}
