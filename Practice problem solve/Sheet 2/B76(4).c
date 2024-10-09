#include<stdio.h>

int main ()
{
    int i, n, sum=0;

    printf("Enter the range : ");
    scanf("%d", &n);

    for (i=1; i<=n; i+=4)
    {
        sum = sum + i;
        printf("%d,\t");
        sum += 2;
    }


    return 0;
}
