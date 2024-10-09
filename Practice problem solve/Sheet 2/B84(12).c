#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    printf("\n");

    for (row=1; row<=n; row++)
    {
        printf("%c", row+64);
    }
    for (row=n-1; row>=1; row--)
    {
        printf("%c", row+64);
    }
    printf("\n");

    for (row=n-1; row>=1; row--)
    {
        for (col=1; col<=row; col++)
        {
            printf("%c", col+64);
        }
        for (col=1; col<2*(n-row); col++)
        {
            printf(" ");
        }
        for (col=row; col>=1; col--)
        {
            printf("%c", col+64);
        }
        printf("\n");
    }
    getch ();
}
