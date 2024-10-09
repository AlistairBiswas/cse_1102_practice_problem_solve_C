#include<stdio.h>

void main ()
{
    int i, j, p=1, sum=0, rem, count=0, total=0, temp, flag;

    for (i=1; i<=500; i++)
    {
        temp=i;
        flag=i;

        while (temp != 0)
        {
            count++;
            temp /= 10;
        }
        while (flag != 0)
        {
            rem = flag%10;
            for (j=1; j<=count; j++)
            {
                p *= rem;
            }
            sum = sum + p;
            flag /= 10;
            p=1;
        }
        if (sum == i)
        {
            printf("%d\t", i);
            total++;
        }
        sum=0;
        count=0;
    }
    printf("\n\nTotal: %d\n\n", total);
}
