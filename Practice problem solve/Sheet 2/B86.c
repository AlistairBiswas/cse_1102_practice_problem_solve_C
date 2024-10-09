#include<stdio.h>

void main ()
{
    int n, i, j, f=1, sum=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            f *= j;
        }
        sum = sum + f;
        f=1;
    }
    printf("\nSUM = %d\n", sum);
}
