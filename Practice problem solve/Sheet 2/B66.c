#include<stdio.h>

void main ()
{
    int n, i, j, count=0, p=1, rem, temp, sum=0, flag;


    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;
    flag = n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    while (temp != 0)
    {
        rem = temp%10;
        for (i=1; i<=count; i++)
        {
            p *= rem;
        }
        sum = sum + p;
        p=1;
        temp /= 10;
    }
    if (flag == sum)
    {
        printf("\nArmstrong Number.\n");
    }
    else
    {
        printf("\nNot an Armstrong Number.\n");
    }
}
