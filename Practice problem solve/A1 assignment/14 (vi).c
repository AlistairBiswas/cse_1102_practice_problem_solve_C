#include<stdio.h>

int main ()
{
    int alpha=65;
    int i, j, k, m, n;
    n=15;

    for (i=1; i<=n; i++)
    {
        for (j=n-1; j>=i; j--)
            printf(" ");

        for (k=1; k<=i; k++)
            printf("%c", alpha++);
        alpha--;

        for (m=1; m<i; m++)
            printf("%c", --alpha);
        printf("\n");

        alpha=65;
    }
    for (i=n-1; i>=1; i--)
    {
        for (j=i; j<=n-1; j++)
            printf(" ");

        for (k=i; k>=1; k--)
            printf("%c", alpha++);
        alpha--;

        for (m=1; m<i; m++)
            printf("%c", --alpha);
        printf("\n");

        alpha=65;
    }
    return 0;
}
