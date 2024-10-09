#include<stdio.h>

int main ()
{
    int n, i, rem, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i=n; i>0; i=i/10)
    {
        rem = i%10;
        sum = sum + rem;
    }
    printf("\nSum of the Digit: %d\n", sum);
}
