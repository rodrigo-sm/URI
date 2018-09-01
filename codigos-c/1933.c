#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,aux;
    scanf("%d %d", &a, &b);
    if(b > a)
    {
        aux = b;
        b = a;
        a = aux;
    }
    printf("%d\n", a);
    return 0;
}

