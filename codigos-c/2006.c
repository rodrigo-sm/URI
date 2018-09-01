#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5,n,t,c=0;
    scanf("%d", &t);
    while(i--)
    {
        scanf("%d", &n);
        if(n == t) c++;
    }
    printf("%d\n", c);
    return 0;
}

