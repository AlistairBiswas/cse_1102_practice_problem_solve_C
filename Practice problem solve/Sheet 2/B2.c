#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the age of candidate: ");
    scanf("%d", &n);

    if (n>=18)
        printf("\nEligible for License.\n");
    else
        printf("\nNot eligible for License.\n");
}
