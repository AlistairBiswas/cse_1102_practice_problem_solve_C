#include<stdio.h>

int main ()
{
    int i, sum=0, sum1=0, n;

    printf("Enter the value:");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i;
        sum1 = sum1 + sum;
    }
    printf("Result = %d", sum1);

    return 0;

}
