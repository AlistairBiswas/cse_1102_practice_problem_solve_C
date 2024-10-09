#include<stdio.h>

int main ()
{
    int p, q, r, s, i, j;

    printf("Enter row and col for A matrix :\n");
    scanf("%d%d", &p, &q);

    int A[p][q];

    printf("\nEnter elements for A matrix :\n");

    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter row and col for B matrix :\n");
    scanf("%d%d", &r, &s);

    int B[r][s];

    printf("\nEnter elements for B matrix :\n");

    for (i=0; i<r; i++)
    {
        for (j=0; j<s; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\nPrint A array...\n");

    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nPrint B matrix...\n");

    for (i=0; i<r; i++)
    {
        for (j=0; j<s; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
