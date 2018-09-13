#include <stdio.h>

int main()
{
    int i;
    char t[501];
    scanf("%500[^\n]", t);
    for(i = 0;t[i] != '\0';i++);
    if(i > 140)
        printf("MUTE\n");
    else
        printf("TWEET\n");
    return 0;
}
