#include<stdio.h>

int main ()
{
    int i, j, numberOfRow, numberOfCol;

    printf("Enter row and col for matrix :\n");
    scanf("%d%d", &numberOfRow, &numberOfCol);

    int A[numberOfRow][numberOfCol], B[numberOfRow][numberOfCol], C[numberOfRow][numberOfCol];

    printf("\nEnter elements for A matrix :\n");

    for (i=0; i<numberOfRow; i++)
    {
        for (j=0; j<numberOfCol; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for B matrix :\n");

    for (i=0; i<numberOfRow; i++)
    {
        for (j=0; j<numberOfCol; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<numberOfRow; i++)
    {
        for (j=0; j<numberOfCol; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nAfter Addition...\n");

    for (i=0; i<numberOfRow; i++)
    {
        for (j=0; j<numberOfCol; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
