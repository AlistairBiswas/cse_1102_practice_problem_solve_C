#include<stdio.h>

int main ()
{
    int i, n, sum=0;

    printf("Enter the term : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i;
        printf("%d,\t", sum);
    }
    return 0;
}
