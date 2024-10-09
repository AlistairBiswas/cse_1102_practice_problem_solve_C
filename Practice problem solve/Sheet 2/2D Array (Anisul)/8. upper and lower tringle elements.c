#include<stdio.h>

int main ()
{
    int i, j, row, col, upper=0, lower=0;

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

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            if (i<j)
            {
                upper = upper + A[i][j];
            }
            if (i>j)
            {
                lower = lower + A[i][j];
            }
        }
    }

    printf("\nSum of upper elements = %d\n", upper);
    printf("\nSum of lower elements = %d\n", lower);

    return 0;
}
