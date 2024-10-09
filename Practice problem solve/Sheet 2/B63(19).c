#include<stdio.h>

void main ()
{
    int n, a, r, i, j, p=1;
    float sum=0;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        for (j=1; j<=i; j++)
        {
            p *= r;
        }
        sum = sum + a*(float)p;
        p=1;
    }
    printf("Sum of the series: %.2f", sum);
}
