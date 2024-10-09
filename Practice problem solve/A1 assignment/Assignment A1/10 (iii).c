#include<stdio.h>

int main ()
{
    int pow, fact, i, j, sign=1, n, x;
    float sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(i=1; i<=n; i=i+2)
    {
        pow=1, fact=1;
        for(j=1; j<=i; j++)
            pow = pow*x;

        for(j=1; j<=i; j++)
            fact = fact*j;

        sum = sum + (float)pow/(float)fact*sign;
        sign = sign*(-1);
    }
    printf("Sum of the series is %.2f", sum);

    return 0;
}
