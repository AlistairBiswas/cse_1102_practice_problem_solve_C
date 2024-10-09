#include<stdio.h>

int oddEven ();

void main ()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (oddEven (n) == 0)
    {
        printf("\nEven.\n");
    }
    else
    {
        printf("\nOdd.\n");
    }
}

int oddEven (int num)
{
    if (num%2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
