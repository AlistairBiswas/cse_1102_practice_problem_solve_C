#include<stdio.h>

int main ()
{
    int n, rem, sum=0, rem1, rev=0, temp, flag;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }

    flag = sum;

    while (flag != 0)
    {
        rem1 = flag % 10;
        rev = rev*10 + rem1;
        flag /= 10;
    }

    if (sum*rev == temp)
    {
        printf("\nMAGIC NUMBER.\n");
    }
    else
    {
        printf("\nNOT A MAGIC NUMBER.\n");
    }
}
