#include<stdio.h>

int main ()
{
    int i, j, row, col, sum=0;

    printf("Enter row and col for matrix :\n");
    scanf("%d%d", &row, &col);

    while (row != col)
    {
        printf("\nRow and Col is not same. Input again...\n");

        printf("\nEnter row and col for matrix :\n");
        scanf("%d%d", &row, &col);
    }

    int A[row][col];

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

    printf("\nDiagonal elements...\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i == j)
            {
                printf("%d\t", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }

    printf("\n\nSum of diagonal elements = %d\n", sum);

    return 0;
}
