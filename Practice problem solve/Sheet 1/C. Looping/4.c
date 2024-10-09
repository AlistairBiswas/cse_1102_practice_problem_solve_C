#include<stdio.h>

int main ()
{
    int a, b, i, j, count=0;

    printf("Enter the range :\n");
    scanf("%d %d", &a, &b);

    printf("\n");

    for (i=a; i<=b; i++)
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
            count++;
        }
    }
    printf("\n\nTotal prime number in this range (%d to %d)  :  %d\n", a, b, count);

    return 0;
}
