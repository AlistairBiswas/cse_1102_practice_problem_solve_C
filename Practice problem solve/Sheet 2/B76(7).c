#include<stdio.h>

int main ()
{
    int i, n, sum=0;

    printf("Enter the term : ");
    scanf("%d", &n);

    for (i=1; i<=2*n; i+=2)
    {
        sum = sum + i;
        printf("%d,\t", sum);
    }
    return 0;
}
