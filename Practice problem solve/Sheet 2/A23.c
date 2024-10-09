#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("\nThe square of the number is %d\n", n*n);
    }
    else
    {
        printf("\nThe cube of the number is %d\n", n*n*n);
    }
}
