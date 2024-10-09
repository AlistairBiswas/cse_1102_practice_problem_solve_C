#include<stdio.h>

int main ()
{
    int n, i, r, rem, sum=0, count=0, temp, flag;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;
    flag = temp;

    while (n != 0)
    {
        r = n%10;
        count++;
        n /= 10;
    }
    while (temp != 0)
    {
        int p = 1;

        rem = temp%10;
        for (i=1; i<=count; i++)
        {
            p = p*rem;
        }
        sum = sum + p;
        temp /= 10;
        p = 1;
    }
    if (sum == flag)
        printf("\nArmstrong Number.\n");
    else
        printf("\nNot an Armstrong Number.\n");
}
