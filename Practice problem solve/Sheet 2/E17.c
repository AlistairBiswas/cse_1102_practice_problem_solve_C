#include<stdio.h>

int main ()
{
    int r1, c1, r2, c2, i, j, flag=0;

    printf("Enter row and col for first matrix :\n");
    scanf("%d %d", &r1, &c1);

    printf("\nEnter row and col for second matrix :\n");
    scanf("%d %d", &r2, &c2);

    while (r1!=r2 || c1!=c2)
    {
        printf("\nThis two Matrix will not be equal.Enter row and col again...\n");

        printf("\nEnter row and col for first matrix :\n");
        scanf("%d %d", &r1, &c1);

        printf("\nEnter row and col for second matrix :\n");
        scanf("%d %d", &r2, &c2);
    }

    int A[r1][c1], B[r2][c2];

    printf("\nEnter elements for first matrix :\n");

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter elements for second matrix :\n");

    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            if (A[i][j] != B[i][j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("\nThis two Matrix are EQUAL.\n");
    }
    else
    {
        printf("\nThis two Matrix are NOT EQUAL.\n");
    }

    getch ();
}
