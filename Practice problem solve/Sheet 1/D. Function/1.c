#include<stdio.h>

int fact ();

void main (int n)
{
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("%d! = %d.", n, fact(n));
}
int fact (int num)
{
    int i, f=1;

    for (i=1; i<=num; i++)
    {
        f *= i;
    }
    return f;
}
