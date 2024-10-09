#include<stdio.h>

void main ()
{
    int n, i, j;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        int flag=0;

        for (j=2; j<=i/2; j++)
        {
            if (i%j == 0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0 && i!=1)
        {
            printf("%d\t", i);
        }
    }
}
