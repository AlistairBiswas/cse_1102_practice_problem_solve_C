#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n%2 == 0)
        printf("\nEVEN.\n");
    else
        printf("\nODD.\n");
}
