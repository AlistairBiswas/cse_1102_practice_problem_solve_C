#include<stdio.h>

int main ()
{
    int n, i, x, count=0, flag=0;

    printf("Enter the Array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value you want to search : ");
    scanf("%d", &x);

    for (i=0; i<n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            count++;
        }
    }

    if (flag == 1)
    {
        printf("\n%d is present in this Array : %d times.\n", x, count);
    }
    else
    {
        printf("\nERROR_404!\n");
    }

    return 0;
}
