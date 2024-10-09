#include<stdio.h>

int main ()
{
    int i, n, n1=0, n2=1, num;

    printf("Enter the term to be printed:");
    scanf("%d", &n);

    printf("%d\n%d\n", n1, n2);

    for(i=3; i<=n; i++)
    {
        num = n1 + n2;
        printf("%d\n", num);

        n1 = n2;
        n2 = num;

    }
    return 0;
}
