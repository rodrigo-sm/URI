#include <stdio.h>

int main()
{
    int l,i,j;
    double a=0.0,m[12][12];
    char t;
    scanf("%d %c", &l, &t);
    for(i = 0;i < 12;i++)
    {
        for(j = 0;j < 12;j++)
        {
            scanf(" %lf", &m[i][j]);
            if(i == l)
            {
                a += m[i][j];
            }
        }
    }
    if(t == 'S')
    {
        printf("%.1lf\n", a);
    }
    if(t == 'M')
    {
        a = a/12;
        printf("%.1lf\n", a);
    }
    return 0;
}
