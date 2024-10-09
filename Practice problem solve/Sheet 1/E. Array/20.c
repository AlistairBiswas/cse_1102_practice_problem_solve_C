#include<stdio.h>

int main ()
{
    int i, j, deter;
    int matrix[3][3];

    printf("Enter the elements of the 3X3 matrix :\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe 3X3 matrix is...\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    deter = matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[2][1]*matrix[1][2])
            - matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[2][0]*matrix[1][2])
            + matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[2][0]*matrix[1][1]);

    printf("\nThe determinant of the matrix is : %d\n", deter);

    return 0;
}
