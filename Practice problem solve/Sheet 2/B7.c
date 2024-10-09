#include<stdio.h>

void main ()
{
    int n;

    printf("Name: Alistair Biswas.\n");
    printf("\nEnter the age: ");
    scanf("%d", &n);

    if (n>=13 && n<=19)
        printf("\nTEENAGER.\n");
    else if (n<=12)
        printf("\nCHILD.\n");
    else
        printf("\nNuLL.\n");
}
