#include<stdio.h>

int main ()
{
    int n, i, j, k, x=0, y=0, term=21, sum=1, sign=-1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i=2; i<=n; i++)
    {
        for (j=2; j<=i; j++)
            x++;

        for (k=1; k<=n; k++)
        {
            y = y+term;
            term = term+10;
        }
        sum = (sum + x/y)*sign;
        sign = sign*-1;
    }
    printf("Sum of the series is %f ", (float)sum);

    return 0;
}
