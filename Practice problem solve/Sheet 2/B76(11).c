#include<stdio.h>

int main ()
{
    int n, i, j, f=1, n1=1;
    float sum=0;

    printf("Enter the term : ");
    scanf("%d", &n);

    printf("%d,\t", n1);

    for (i=2; i<=n; i++)
    {
        for (j=1; j<=i+1; j++)
        {
            f *= j;
        }
        sum = i/(float)f;
        printf("%.2f,\t", sum);
        f=1;
    }
}
