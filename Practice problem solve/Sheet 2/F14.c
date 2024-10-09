#include<stdio.h>

int countSum ();

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    countSum (n);
}

int countSum (int num)
{
    int rem, rev=0, sum=0, count=0;

    while (num != 0)
    {
        rem = num % 10;

        sum = sum + rem;
        rev = rev*10 + rem;
        count++;

        num /= 10;
    }

    printf("\nSum of the digits : %d\n", sum);
    printf("\nNumber of digits : %d\n", count);
    printf("\nReverse Number : %d\n", rev);
}
