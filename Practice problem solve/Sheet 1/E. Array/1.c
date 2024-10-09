#include<stdio.h>

int main ()
{
    int n, i, x, flag=0;

    printf("Enter array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the array elements :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the search elements : ");
    scanf("%d", &x);

    for (i=0; i<n; i++)
    {
        if (arr[i] == x)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nPOSITIVE.\n");
    }
    else
    {
        printf("\nNEGATIVE.\n");
    }

    return 0;
}
