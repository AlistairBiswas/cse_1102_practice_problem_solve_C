#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\n");

    for (row=n; row>=1; row--)
    {
        for (col=row; col<n; col++)
        {
            printf(" ");
        }
        for (col=1; col<=row; col++)
        {
            printf("%d", col);
        }
        for (col=row-1; col>=1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    for (row=2; row<=n; row++)
    {
        for (col=n-row; col>=1; col--)
        {
            printf(" ");
        }
        for (col=1; col<=row; col++)
        {
            printf("%d", col);
        }
        for (col=row-1; col>=1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
