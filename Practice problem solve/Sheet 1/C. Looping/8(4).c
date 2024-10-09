#include<stdio.h>

void main ()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    printf("\n");

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
