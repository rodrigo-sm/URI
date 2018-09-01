#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    scanf("%d", &c);
    while(c--)
    {
        scanf("%d", &n);
        if(n % 2 == 0) printf("0\n");
        else printf("1\n");
    }
    return 0;
}

