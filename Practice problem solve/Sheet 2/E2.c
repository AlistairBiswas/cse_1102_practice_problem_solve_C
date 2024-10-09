#include<stdio.h>

int main ()
{
    int i, j, row, col;

    printf("Enter row and col for 2D Array :\n");
    scanf("%d%d", &row, &col);

    int A[row][col];

    printf("\nEnter the elements for the 2D Array :\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nDisplay the 2D Array elements in matrix form...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
