#include<stdio.h>

void main ()
{
    int n, i, j, p=1;
    float sum=1;

    printf("Enter the term: ");
    scanf("%d", &n);

    for (i=1; i<n; i++)
    {
        for (j=1; j<=i; j++)
        {
            p *= j;
        }
        sum = sum + 1/(float)p;
        p=1;
    }
    printf("Sum of the series : %.2f.", sum);
}
