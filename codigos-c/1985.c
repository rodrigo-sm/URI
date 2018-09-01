#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c,q;
    float p=0.0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &c, &q);
        switch(c)
        {
            case 1001: p += 1.5 * q; break;
            case 1002: p += 2.5 * q; break;
            case 1003: p += 3.5 * q; break;
            case 1004: p += 4.5 * q; break;
            case 1005: p += 5.5 * q; break;
        }
    }
    printf("%.2f\n", p);
    return 0;
}

