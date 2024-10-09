#include<stdio.h>

int main ()
{
    int n, row, col;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (row=n; row>=1; row--)
    {
        for (col=n; col>=row; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
