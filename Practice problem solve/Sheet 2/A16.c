#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n>=40)
        printf("PASS");
    else
        printf("FAIL!!!");
}
