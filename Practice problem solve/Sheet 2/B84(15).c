#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    for (row=0; row<n; row++)
    {
        for (col=row; col<n-1; col++)
        {
            printf("\t");
        }
        for (col=row; col>=0; col--)
        {
            printf("%d\t", col);
        }
        for (col=1; col<=row; col++)
        {
            printf("%d\t", col);
        }
        printf("\n");
    }
    getch ();
}
