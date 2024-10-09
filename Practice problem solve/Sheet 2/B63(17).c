#include<stdio.h>

void main ()
{
    int x, n, i, j, p=1, f=1;
    float sum=0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<2*i; j++)
        {
            p *= x;
        }
        for (j=1; j<=i; j++)
        {
            f *= j;
        }
        sum = sum + (float)p/(float)f;
        p=1; f=1;
    }
    printf("Sum of the series: %.2f", sum);
}
