#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\n");

    for (row=1; row<=n; row++)
    {
        for (col=row; col<n; col++)
        {
            printf("\t");
        }
        for (col=1; col<=row; col++)
        {
            printf("%c\t", col+64);
        }
        for (col=row-1; col>=1; col--)
        {
            printf("%c\t", col+64);
        }
        printf("\n");
    }

    for (row=n-1; row>=1; row--)
    {
        for (col=row; col<n; col++)
        {
            printf("\t");
        }
        for (col=1; col<=row; col++)
        {
            printf("%c\t", col+64);
        }
        for (col=row-1; col>=1; col--)
        {
            printf("%c\t", col+64);
        }
        printf("\n");
    }
    getch ();
}
