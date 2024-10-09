#include<stdio.h>

void main ()
{
    int n, i;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        printf("%d\t", i);
    }
}
