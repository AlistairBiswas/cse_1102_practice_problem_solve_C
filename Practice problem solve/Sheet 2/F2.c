#include<stdio.h>

int square ();

void main ()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("\nSquare = %d\n", square(n));
}

int square (int num)
{
    int i, p=1;

    for (i=1; i<=3; i++)
    {
        p *= num;
    }
    return p;
}
