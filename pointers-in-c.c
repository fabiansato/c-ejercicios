// https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true&h_r=next-challenge&h_v=zen


#include <stdio.h>

void update(int *a,int *b) 
{
    // Pointers in C - Hacker Rank Solution START
    int x,y;
    x = *a + *b;
    y = *a - *b;
    *a = x;
    *b =abs(y); 
    // Pointers in C - Hacker Rank Solution END
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}