#include<stdio.h>

int main ()
{
    int n, x, i, j, p=1, f=1, sign=1;
    float sum=0;

    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("\nEnter the value of n : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            p *= x;
        }
        for (j=1; j<2*i; j++)
        {
            f *= j;
        }
        sum = sum + (float)p/(float)f * sign;
        p=1, f=1;
        sign *= -1;
    }
    printf("\nSum of the series is %.2f\n", sum);

    return 0;
}
