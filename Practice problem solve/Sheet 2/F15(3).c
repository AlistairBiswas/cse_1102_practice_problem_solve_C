#include<stdio.h>

float seriesSum (int, int);

void main ()
{
    int x, n;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("\nSum of the Series: %.2f\n", seriesSum (x,n));
}

float seriesSum (int xx, int nn)
{
    int i, j, p=1, f=1;
    float sum=1;

    for (i=1; i<=nn; i++)
    {
        for (j=1; j<=i; j++)
        {
            p *= xx;
        }
        for (j=1; j<=2*i; j++)
        {
            f *= j;
        }
        sum = sum + (float)p/(float)f;
        p=1, f=1;
    }
    return sum;
}
