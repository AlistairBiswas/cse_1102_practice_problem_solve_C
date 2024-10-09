#include<stdio.h>

int main ()
{
    int i, sum;

    for (i=3; i<=1691; i=i+8)
        sum += i;

    printf("Sum is %d.", sum);

    return 0;
}
