#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n%7 == 0)
        printf("\nDivisible by 7.\n");
    else
        printf("\nNot Divisible by 7.\n");
}
