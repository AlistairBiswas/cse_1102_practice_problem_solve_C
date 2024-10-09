#include<stdio.h>

int main ()
{
    int i, j, k, r1, r2, c1, c2, sum=0;

    printf("Enter row and col for A matrix :\n");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter row and col for B matrix :\n");
    scanf("%d%d", &r2, &c2);

    while (c1!=r2)
    {
        printf("\nError!!!\nCol of A matrix is not same as Row of B matrix.\n");

        printf("\nEnter row and col for A matrix :\n");
        scanf("%d%d", &r1, &c1);

        printf("\nEnter row and col for B matrix :\n");
        scanf("%d%d", &r2, &c2);
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("\nEnter elements for A matrix :\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for B matrix :\n");

    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            for (k=0; k<c1; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    printf("\nAfter multiplication...\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
