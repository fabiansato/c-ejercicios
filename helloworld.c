/*
https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    
    /*printf("Please input your text bellow: \n%s", s); */
    scanf("%[^\n]%*c", &s);
    
    printf("Hello, World! \n%s", s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    
    return 0;
}
