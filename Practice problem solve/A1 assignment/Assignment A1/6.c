#include<stdio.h>

int main ()
{
    int i, n, flag = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i=2; i<=n/2; i++)
    {
        if (n%i == 0)
            flag = 0;
        break;
    }
    if (flag == 0)
        printf("Not Prime.");
    else
        printf("Prime.");

    return 0;
}
