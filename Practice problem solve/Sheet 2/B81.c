#include<stdio.h>

int main ()
{
    int n, count=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    printf("\nDigit Count: %d\n", count);
}
