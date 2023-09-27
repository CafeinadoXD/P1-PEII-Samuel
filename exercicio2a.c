#include <stdio.h>
#include <stdlib.h>

// RESPOSTA *p = 10.

void fun(int **p) 
{
    int q = 10;
    *p = &q;
}

int main() {

    int r = 20;
    int * p = &r;
    fun(&p);
    printf("%d\n", *p);

    return 0;
}