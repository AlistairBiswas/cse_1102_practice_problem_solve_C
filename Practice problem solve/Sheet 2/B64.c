#include<stdio.h>

void main ()
{
    int a, b, i, p=1;

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    for (i=1; i<=b; i++)
    {
        p *= a;
    }
    printf("\n%d to the power %d = %d\n", a, b, p);
}
