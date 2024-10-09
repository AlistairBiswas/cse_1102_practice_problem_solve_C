#include<stdio.h>

int pow ();

void main (int a, int b)
{
    printf("Enter the value of 'a' and 'b' :\n");
    scanf("%d %d", &a, &b);

    printf("Result = %d.", pow (a,b));
}
int pow (int x, int y)
{
    int i, p=1;

    for (i=1; i<=y; i++)
    {
        p = p * x;
    }
    return p;
}
