#include<stdio.h>

void main ()
{
    int x, n, i, j, p=1, f=1;
    float sum=1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=2; i<=n; i=i+2)
    {
        for (j=1; j<=i; j++)
        {
            p *= x;
            f *= j;
        }
        sum = sum + (float)p/(float)f;
        p=1, f=1;
    }
    printf("\nSUM of the Series = %.2f.\n", sum);
}
