#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    //printf("Ingresa dos numeros:");
    scanf("%d\n%d", &a, &b);
    char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    int labels_index;
      for (int i=a; i<=b; i++) {
        labels_index = i <= 9 ? i - 1 : 9 + i % 2; 

  // usamos un operador ternario para guardar en labels:index el valor de I mientras sea menor igual que nueve entonces (?) guarda
  // el valor de i - 1, sino (:) guarda el valor de 9 + i % 2
  
        printf("%s\n", labels[labels_index]);
}
    return 0;
}

