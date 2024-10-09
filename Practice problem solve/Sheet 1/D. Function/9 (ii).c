#include<stdio.h>

int digitSum ();

void main (int n)
{
    printf("Enter an integer: ");
    scanf("%d", &n);

    digitSum (n);
}
int digitSum (int num)
{
    int rem, sum=0;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("\nSum of the digits = %d.\n", sum);
}
