// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen



#include <stdio.h>
#include <stdlib.h>

int main()
{
  
    int n, *arr, i, sum = 0;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    for(i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("%d\n", sum);
    free(arr);
    return 0;
}