#include<stdio.h>

int power ();

void main ()
{
    int n1, n2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &n1, &n2);

    printf("\n%d to the power %d = %d.\n", n2, n1, power (n1,n2));
}

int power (int x, int y)
{
    int i, p=1;

    for (i=1; i<=x; i++)
    {
        p *= y;
    }
    return p;
}
