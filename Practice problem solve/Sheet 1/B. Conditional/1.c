#include<stdio.h>

int main ()
{
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    if (num1>num2)
    {

        printf("%d is the maximum number.\n", num1);
    printf("%d is the minimum number.", num2);

    }
    else
    {
        printf("%d is the maximum number.\n", num2);
    printf("%d is the minimum number.", num1);
    }

    return 0;
}
