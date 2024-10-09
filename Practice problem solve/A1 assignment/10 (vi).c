#include<stdio.h>

int main ()
{
    int pow=1, fact=1, i, j, n, x, sign=1;
    float sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(i=0; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            pow = pow*x;
            fact = fact*j;
        }
        if (i != 0)
        {
            sum = sum + (float)pow/(float)fact*sign;
            sign = sign*(-1);
        }
    }
    printf("Sum of the series is %.2f", sum);

    return 0;
}
