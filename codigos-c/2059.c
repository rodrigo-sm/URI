#include <stdio.h>
int main()
{
    int p, j1, j2, r, a, v, soma;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    soma = j1 + j2;
    if((soma%2==0 && p==1) || (soma%2==1 && p==0)) v = 1;
    else v = 2;
    if((r==1 && a==0) || (r==0 && a==1)) v = 1;
    else if(r==1 && a==1) v =2;
    printf("Jogador %d ganha!\n", v);
    return 0;
}

