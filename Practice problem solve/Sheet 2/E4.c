#include<stdio.h>

int main ()
{
    int i, j, row, col;

    printf("Enter the row and col for the matrix :\n");
    scanf("%d %d", &row, &col);

    int matrix[row][col];

    printf("\nEnter the elements for the matrix :\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe actual matrix is...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            matrix[i][j]*=2;
        }
    }

    printf("\nAfter double all the value...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
