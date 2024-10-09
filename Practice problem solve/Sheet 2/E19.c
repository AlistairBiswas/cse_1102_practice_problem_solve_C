#include<stdio.h>

int main ()
{
    int i, j, k, l, row, col, max, min, secondMax;

    printf("Enter the row and the col for the matrix :\n");
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

    max = min = secondMax = matrix[0][0];

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    printf("\nMaximum element : %d.\n", max);

    printf("\nMinimum element : %d.\n", min);

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (secondMax > matrix[i][j] || matrix[i][j] != max)
            {
                secondMax = matrix[i][j];
            }
        }
    }

    printf("\nSecond Maximum element : %d.\n", secondMax);

    getch ();
}
