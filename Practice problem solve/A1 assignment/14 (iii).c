#include<stdio.h>

void main ()
{
    int i, j, n=0;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5-n; j++)
        {
            printf("%c", j+64);
        }
        n++;
        printf("\n");
    }
    return 0;
}
