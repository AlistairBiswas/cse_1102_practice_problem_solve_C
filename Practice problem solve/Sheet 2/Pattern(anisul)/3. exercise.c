#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=row; col<=n-1; col++)
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

    for (row=n-1; row>=1; row--)
    {
        for (col=row; col<=n-1; col++)
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
    getch ();
}
