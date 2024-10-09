#include<stdio.h>

void main ()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    printf("\n");

    for (row=n; row>=1; row--)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<2*row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row=2; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<2*row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
