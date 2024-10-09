#include<stdio.h>

int sum ();

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("\nSUM = %d\n", sum (n));
}

int sum (int num)
{
    int i, sum=0;

    for (i=1; i<=num; i++)
    {
        sum = sum + i;
    }
    return sum;
}
