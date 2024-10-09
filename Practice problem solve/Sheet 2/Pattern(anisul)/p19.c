#include<stdio.h>

void main ()
{
    int n, row, col;

    printf("Enter N = ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<2*row; col++)
        {
            printf("%c", col+64);
        }
        printf("\n");
    }
}
