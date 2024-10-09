#include<stdio.h>

int digitSum ();

int sum=0;

void main (int n)
{
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum = %d.", digitSum (n));
}
int digitSum (int num)
{
    int rem;

    if (num == 0)
        return;
    else
    {
        rem = num % 10;
        sum += rem;
        num = digitSum (num/10);
    }
    return sum;
}
