#include<stdio.h>

int main ()
{
    int i, j, row, col;

    printf("Enter the row and the col for the matrix :\n");
    scanf("%d %d", &row, &col);

    while (row != col)
    {
        printf("\nRow and Col are not same. Enter again...\n");

        printf("Enter the row and the col for the matrix :\n");
    scanf("%d %d", &row, &col);
    }

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

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i == j)
            {
                matrix[i][j] *= matrix[i][j];
            }
        }
    }

    printf("\nNew matrix...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
        printf("\n");
    }

    getch ();
}
