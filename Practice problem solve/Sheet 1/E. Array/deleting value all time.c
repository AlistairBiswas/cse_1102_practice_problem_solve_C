#include <stdio.h>

int main()
{
    int n, x, i, j, k, temp=0;

    printf("Enter Size of Array: ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter Array:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the specific element to delete: ");
    scanf("%d", &x);

    i=0;

    while(i<n)
    {
        if(a[i] == x)
        {
            temp = 1;

            for(j=i; j<n-1; j++)
            {
                a[j] = a[j+1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }

    if(temp == 0)
    {
        printf("\n%d not found in the array\n", x);
    }
    else
    {
        printf("\nArray after deleting %d:\n",x);

        for(i=0; i<n; i++)
        {
            printf("%d\t", a[i]);
        }
    }

    return 0;
}
