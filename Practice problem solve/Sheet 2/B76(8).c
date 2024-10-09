#include<stdio.h>

int main ()
{
    int n, i, j, p=1, sum=0;

    printf("Enter the term : ");
    scanf("%d", &n);

    for (i=1; i<=2*n; i+=2)
    {
        for (j=1; j<=2; j++)
        {
            p *= i;
        }
        sum = sum + p;
        printf("%d,\t", sum);
        p=1;
    }
}
