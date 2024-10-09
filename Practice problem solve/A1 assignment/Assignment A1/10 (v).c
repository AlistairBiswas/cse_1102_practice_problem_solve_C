#include<stdio.h>

int main ()
{
    int pow, fact, i, j, n, x;
    float sum=0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    for(i=0; i<=n; i++)
    {
        pow=1, fact=1;
        for(j=1; j<=i; j++)
            pow = (2*pow)*x;

        for(j=1; j<=i; j++)
            fact = fact*j;

        sum = sum + (float)pow/(float)fact;
    }
    printf("Sum of the series is %.2f", sum);

    return 0;
}
