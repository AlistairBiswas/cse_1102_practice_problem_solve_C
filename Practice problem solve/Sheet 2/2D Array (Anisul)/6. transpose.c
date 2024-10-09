#include<stdio.h>

int main ()
{
    int i, j, row, col;

    printf("Enter row and col for matrix :\n");
    scanf("%d%d", &row, &col);

    int A[row][col], trans[col][row];

    printf("\nEnter the matrix elements :\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            trans[j][i] = A[i][j];
        }
    }

    printf("\nTranspose Matrix...\n");

    for (i=0; i<col; i++)
    {
        for (j=0; j<row; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
