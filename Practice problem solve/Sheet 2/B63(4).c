#include<stdio.h>

void main ()
{
    int n, i, j, f=1;
    float sum=1;

    printf("Enter the term: ");
    scanf("%d", &n);

    for (i=1; i<n; i++)
    {
        for (j=1; j<=i; j++)
        {
            f *= j;
        }
        sum = sum + i/(float)f;
        f=1;
    }
    printf("Sum of the series: %.2f.", sum);
}

