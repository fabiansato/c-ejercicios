/* 3- Desarrolle un ordenamiento por selección (en forma ascendente) de un arreglo de caracteres. Luego contabilice la ocurrencia de cada carácter en una sola pasada. */
/* Solución en lenguaje C */

#include <stdio.h>

#define N 10

/* Prototipo */
void ordenar(char datos[], int n);
void estadisticas(char datos[], int n);

/* Programa Principal */
int main()
{
	char caracteres[N] = {'H','O','L','A','M','L','N','L','O','!'};
	int i;

	printf("Arreglo original: ");
	for (i=0; i<N; i++)
		printf("%c ", caracteres[i]);
	printf("\n");

	/* Ordenamiento */
	ordenar(caracteres, N);

	printf("Arreglo ordenado: ");
	for (i=0; i<N; i++)
		printf("%c ", caracteres[i]);
	printf("\n\n");

	/* Estadísticas */
	estadisticas(caracteres, N);

	return 0;
}
void ordenar(char datos[], int n)
{

	int i, j;
	char aux;

	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (datos[i] > datos[j])
			{

			/* Intercambio */
			aux = datos[i];
			datos[i] = datos[j];
			datos[j] = aux;
			}
	}

void estadisticas(char datos[], int n)
{
	int i, count;
	char car;

	car = datos[0];
	count = 0;
	for (i=0; i<N; i++)
	{
		if (datos[i] == car)
			count++;
		else
		{
		printf("El carácter '%c' aparece %d veces.\n", car, count);
		car = datos[i];
		count = 1;
		}
	}
	printf("El carácter '%c' aparece %d veces.\n", car, count);
}
