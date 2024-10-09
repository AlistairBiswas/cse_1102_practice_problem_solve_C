//deleting one value form an Array//

#include<stdio.h>

int main ()
{
    int n, i, x, index, j;

    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value you want to delete : ");
    scanf("%d", &x);

    for (i=0; i<n; i++)
    {
        if (arr[i] == x)
        {
            for (j=i; j<n-1; j++)
            {
                arr[j] = arr[j+1];
            }
        }
        else
        {
            n--;
        }
    }
    printf("\nAfter deleting value....\n");

    for (i=0; i<n-1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
