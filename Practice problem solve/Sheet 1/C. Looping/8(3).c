#include<stdio.h>

void main ()
{
    int n, row, col, i;

    printf("Enter N = ");
    scanf("%d", &n);

    printf("\n");

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<2*row; col++)
        {
           for (i=1; i<=row; i++)
           {
               printf("%d", col++);
           }
           for (i=1; i<row; i++)
           {
               printf("%d", col--);
           }
        }
        printf("\n");
    }
}
