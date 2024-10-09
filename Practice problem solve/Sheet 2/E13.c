#include<stdio.h>

int main ()
{
    int row, col, i, j, k, sum=0;

    printf("Enter row and col for 2D Array :\n");
    scanf("%d%d", &row, &col);

    int array[row][col];

    printf("\nEnter the Array elements :\n");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("Prime numbers in this Array : ");

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            int flag=0;

            for (k=2; k<=array[i][j]/2; k++)
            {
                if (array[i][j]%k == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0 && array[i][j] != 1)
            {
                printf("\n%d", array[i][j]);
                sum = sum + array[i][j];
            }
        }
    }
    printf("\n\nSum of Prime Numbers : %d.\n", sum);

    getch ();
}
