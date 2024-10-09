#include<stdio.h>

int main ()
{
    int i, j, n;

    printf("Enter row\col of a square matrix : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("\nEnter the elements for the matrix :\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper half of the matrix :\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i < j)
            {
                printf("%d\t", matrix[i][j]);
            }
        }
    }

    printf("\nLower half of the matrix :\n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i > j)
            {
                printf("%d\t", matrix[i][j]);
            }
        }
    }

    getch ();
}
