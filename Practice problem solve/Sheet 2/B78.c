#include<stdio.h>

int main ()
{
    int n, num, i;

    printf("1. Factorial of a Number.\n2. Prime or Not.\n3. Odd or Even.\n4. Exit\n");

    printf("Enter the option: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        int f=1;

        for (i=1; i<=num; i++)
        {
            f *= i;
        }
        printf("\n%d! = %d\n", num, f);
    }

    else if (n == 2)
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        int flag=0;

        for (i=2; i<=num/2; i++)
        {
            if (num%i == 0)
            {
                flag=1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("\nPrime.\n");
        }
        else
        {
            printf("\nNot Prime.\n");
        }
    }

    else if (n == 3)
    {
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num%2 == 0)
        {
            printf("\nEven.\n");
        }
        else
        {
            printf("\nOdd\n");
        }
    }

    else if (n == 4)
    {
        return 0;
    }
}
