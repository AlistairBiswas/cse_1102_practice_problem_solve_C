#include<stdio.h>

int main ()
{
    int i, j, row, col;

    printf("Enter the row and the col for the matrix :\n");
    scanf("%d %d", &row, &col);

    while (row != col)
    {
        printf("\nThis is not a square matrix. Enter row and col again...\n");

        printf("\nEnter the row and the col for the matrix :\n");
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

    printf("\nElements expect diagonal elements ...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i != j)
            {
                printf("matrix[%d][%d] : %d", i, j, matrix[i][j]);
            }
            printf("\n");
        }
    }
    getch ();
}
