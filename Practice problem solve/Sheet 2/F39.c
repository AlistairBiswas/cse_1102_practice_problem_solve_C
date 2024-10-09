#include<stdio.h>

int perfectNumber ();

void main ()
{
    int a, b;

    printf("Enter the interval :\n");
    scanf("%d%d", &a, &b);

    perfectNumber (a,b);
}

int perfectNumber (int x, int y)
{
    int i, j, flag=0, count=0;

    printf("\n");

    for (i=x; i<=y; i++)
    {
        for (j=2; j<=i/2; j++)
        {
            if (i%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1)
        {
            printf("%d\t", i);
            count++;
        }
        flag = 0;
    }
    printf("\n\nTotal Prime Numbers : %d\n", count);
}
