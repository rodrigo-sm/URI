#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,v,c,i,cg=0;
    while(scanf("%d", &n) != EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d", &v);
            if(v >= 20)
                c = 3;
            else
            {
                if(v >= 10)
                    c = 2;
                else
                    c = 1;
            }
            if(cg < c)
                cg = c;
        }
        printf("%d\n", cg);
            cg = 0;
    }
    return 0;
}

