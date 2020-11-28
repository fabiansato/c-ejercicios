#include <stdio.h>
#include <stdlib.h>


/* El tama¤o del arreglo: s¢lo 20 para que quepa en la pantalla */
#define TAM 20

void burbuja (int arreglo[]);          /* Ordenamiento burbuja            */
void mostrar (int arreglo[]);          /* Imprime el arreglo              */
int generar_elementos (int arreglo[]); /* Genera n£meros aleatorios para  llenar el arreglo       */ 

int main()
{
     int arreglo[TAM];
     
     /* Llenamos el arreglo con n£meros al azar por primera vez */
     generar_elementos(arreglo);
     mostrar (arreglo);
     burbuja (arreglo);
     return 0;
 }
     
 int generar_elementos (int arreglo[])
{
     int i;

     /* Introducimos una semilla para los n£meros aleatorios */
     srand ( time(NULL));

     for (i=0; i<TAM; i++)
          arreglo[i] = rand() % 100;    /* numeros de 0 a 99... */

     return TAM;
}

void mostrar (int arreglo[])
{
     int i;

     for (i=0; i<TAM; i++)
          printf ("\n\tElemento[%2d] = %d", i, arreglo[i]);

     printf ("\n\n\t");
     
}    
     
void burbuja (int arreglo[])
{
     int i, j;
     int temp;

     for (i=1; i<TAM; i++)
          for (j=0; j<TAM - i; j++)
               if (arreglo[j] > arreglo[j+1])
                    {
                    /* Intercambiamos */
                    temp = arreglo[j];
                    arreglo[j] = arreglo[j+1];
                    arreglo[j+1] = temp;
                    }

     
     printf ("\n\n\tOrdenamiento burbuja.");
     printf ("\n\tEl arreglo ordenado es:\n");
     mostrar (arreglo);
     getch();
}
