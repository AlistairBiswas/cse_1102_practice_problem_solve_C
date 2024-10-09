#include<stdio.h>

int main ()
{
    int i, n, sum=0;
    float avg;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n*2; i=i+2)
    {
        sum = sum + i;
        avg = sum/n;
    }
    printf("sum is %d\n", sum);
    printf("average is %.2f", avg);

    return 0;
}
