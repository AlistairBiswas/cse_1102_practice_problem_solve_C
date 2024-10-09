#include<stdio.h>

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n>=40 && n<=100)
        printf("\nPASS.\n");
    else if (n<40)
        printf("\nFAIL.\n");
}
