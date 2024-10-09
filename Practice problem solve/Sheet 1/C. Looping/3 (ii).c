#include<stdio.h>

int main ()
{
    int i, sum=0, term=7;

    for (i=1; i<=100; i++)
    {
        sum = sum + term;
        term = term + 13;
    }
    printf("Sum is %d.", sum);

    return 0;
}
