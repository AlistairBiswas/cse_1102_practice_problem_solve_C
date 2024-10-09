#include<stdio.h>

void main ()
{
    int i, j, quotient, remainder;

    printf("Enter two numbers:\n");
    scanf("%d%d", &i, &j);

    quotient = i/j;
    remainder = i%j;

    printf("\nQuotient = %d\nRemainder = %d\n", quotient, remainder);
}
