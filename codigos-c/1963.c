#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n,y,t,p;
    scanf("%lf %lf", &n, &y);
    p = y - n;
    if(p == 0)
        printf("0.00%%\n");
    else
    {
        t = (p * 100 )/ n;
        printf("%.2lf%%\n", t);
    }
    return 0;
}

