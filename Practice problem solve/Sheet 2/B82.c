#include<stdio.h>

int main ()
{
    int n, n1=0, n2=1, n3, i;

    printf("Enter the term to be printed: ");
    scanf("%d", &n);

    printf("\nFibonacci Series:\n");
    printf("%d\n%d", n1, n2);

    for (i=3; i<=n; i++)
    {
        n3 = n1+n2;

        printf("\n%d", n3);

        n1 = n2;
        n2 = n3;
    }
    printf("\n");

    return 0;
}
