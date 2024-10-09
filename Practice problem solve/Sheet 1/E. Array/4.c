#include<stdio.h>

int main ()
{
    int n, i, x, index;

    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements of the array :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the location of element you wanna delete : ");
    scanf("%d", &index);

    for (i=index; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("\nAfter deletion...\n");

    for (i=0; i<n-1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
