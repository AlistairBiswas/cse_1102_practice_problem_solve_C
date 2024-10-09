#include<stdio.h>

int main ()
{
    int n, i, f1=0, f2=1, f3;

    printf("Enter the term to be printed (Fibonacci Number) : ");
    scanf("%d", &n);

    f1=0, f2=1;

    printf("\n%d\n%d\n", f1, f2);

    for (i=3; i<=n; i++)
    {
        f3 = f1 + f2;

        printf("%d\n", f3);

        f1=f2, f2=f3;
    }
    return 0;
}
