#include<stdio.h>

int main ()
{
    int i, sum = 0, term = 5, sign = 1;

    for(i=1; i<=75; i++)
    {
        sum = sum + term * sign;
        term = term + 6;
        sign = sign * (-1);
    }
    printf("Result is %d", sum);

    return 0;
}
