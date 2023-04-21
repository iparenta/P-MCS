#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int c;
    int (*p)(int, int);
    p = Add; // moze bez & isto vraca funkciju kao pointer
   
    c = (*p)(2,3);//de-referencing and executing the function
    // p(2,3) moze isto i lakse je
    printf("%d",c);
}