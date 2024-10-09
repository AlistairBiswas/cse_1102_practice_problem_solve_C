#include<stdio.h>

int main ()
{
    int n, i, x, y;

    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the array elements :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the index you wanna insert : ");
    scanf("%d", &x);

    printf("\nEnter the inserting array element : ");
    scanf("%d", &y);

    arr[x] = y;

    printf("\nAfter inserting : \n");

    for (i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
