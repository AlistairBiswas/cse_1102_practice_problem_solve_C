#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    for (row=n; row>=1; row--)
    {
        for (col=row; col<=n-1; col++)
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
        for (col=row; col<=n-1; col++)
        {
            printf(" ");
        }
        for (col=1; col<2*row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch ();
}
