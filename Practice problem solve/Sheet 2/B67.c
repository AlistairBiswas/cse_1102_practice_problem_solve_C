#include<stdio.h>

void main ()
{
    int n, i, j, sum=0, f=1, count=0, rem, temp, flag;

    for (i=1; i<=1000000; i++)
    {
        temp = i;
        flag = i;

        while (flag != 0)
        {
            rem = flag%10;
            for (j=1; j<=rem; j++)
            {
                f *= j;
            }
            sum = sum + f;
            flag /= 10;
            f=1;
        }
        if (sum == temp)
        {
            printf("%d\t", temp);
            count++;
        }
        sum=0;
    }
    printf("\n\nTotal : %d\n\n", count);
}
