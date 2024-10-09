#include<stdio.h>

void main ()
{
    int i, j, quotient, remainder;

    printf("Enter two numbers:\n");
    scanf("%d%d", &i, &j);

    quotient = i/j;
    remainder = i-quotient*j;

    printf("\nQuotient = %d\nRemainder = %d\n", quotient, remainder);
}
