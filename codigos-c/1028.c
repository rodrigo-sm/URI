/* 1028.c
 *
 * Programa que determina a quantidade de figurinhas que podem ser trocadas
 * Rodrigo Suarez Moreira
 *
 * 02/10/2018
 */

#include <stdio.h>

int main()
{
    int qtd, m, n, aux;
    scanf ("%d", &qtd);
    /*Determina a quantidade de figurinhas que podem ser trocadas e imprime*/
    while (qtd--)
    {
        scanf (" %d %d", &m, &n);
        if(m < n)
        {
            aux = m;
            m = n;
            n = aux;
        }
        while((m % n) != 0)
        {
            aux = m;
            m = n;
            n = aux % m;
        }
        printf("%d\n", n);
    }
    return 0;
}
