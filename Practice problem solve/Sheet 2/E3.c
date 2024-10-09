#include<stdio.h>

int main ()
{
    int i, j, k, row, col, rowSum=0;

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

    for (i=0; i<row; i++)
    {
        for (j=0,k=0; j<col; j++,k++)
        {
            if (j==k)
            {
                rowSum = rowSum + matrix[i][j];
            }
            printf("\nSum of %d row = %d\n", i, rowSum);
        }

    }


}
