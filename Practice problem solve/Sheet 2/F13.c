#include<stdio.h>

int prime ();

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (prime (n) == 1)
    {
        printf("\nPRIME.\n");
    }
    else
    {
        printf("\nNOT PRIME.\n");
    }
}

int prime (int number)
{
    int i, flag=0;

    for (i=2; i<=number/2; i++)
    {
        if (number%2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
