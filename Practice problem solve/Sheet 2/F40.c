#include<stdio.h>

int strongNumber ();

void main ()
{
    int a, b;

    printf("Enter the interval :\n");
    scanf("%d%d", &a, &b);

    strongNumber (a,b);
}

int strongNumber (int x, int y)
{
    int i, j, temp, rem, f=1, sum=0, count=0;

    for (i=x; i<=y; i++)
    {
        temp = i;

        while (temp != 0)
        {
            rem = temp % 10;
            for (j=1; j<=rem; j++)
            {
                f *= j;
            }
            sum = sum + f;
            temp /= 10;
            f=1;
        }
        if (sum == i)
        {
            printf("%d\t", i);
            count++;
        }
        sum = 0;
    }
    printf("\n\nTotal Strong Numbers : %d\n", count);
}
