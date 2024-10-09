#include<stdio.h>

int fact ();

void main ()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n%d! = %d\n", n, fact (n));
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
