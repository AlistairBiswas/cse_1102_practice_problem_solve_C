#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of N : ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for (col=row; col<n; col++)
        {
            printf("\t");
        }
        for (col=1; col<=row; col++)
        {
            printf("%d\t\t", row);
        }
        printf("\n");
    }
    getch ();
}
