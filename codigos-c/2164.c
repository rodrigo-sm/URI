include <stdio.h>
#include <math.h>

int main()
{
    double n,x,y,f,r5;
    scanf("%lf", &n);
    r5 = sqrt(5);
    x = (1 + r5) / 2.0;
    y = (1 - r5) / 2.0;
    f = (pow(x,n) - pow(y,n)) / r5;
    printf("%.1lf\n", f);
    return 0;
}
