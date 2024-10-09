#include<stdio.h>

void main ()
{
    int i, j, temp, flag, p=1, p1=1, r, rem, rev=0, rv=0, count=0;

    for (i=10; i<=100; i++)
    {
        temp=i;
        flag=i;

        for (j=1; j<=2; j++)
        {
            p *= temp;
        }
        while (temp != 0)
        {
            rem = temp%10;
            rev = rev*10 + rem;
            temp /= 10;
        }
        while (p != 0)
        {
            r = p%10;
            rv = rv*10 + r;
            p /= 10;
        }
        for (j=1; j<=2; j++)
        {
            p1 *= rev;
        }
        if (p1 == rv)
        {
            printf("%d\t", i);
            count++;
        }
        p=1, p1=1, rev=0, rv=0;
    }
    printf("\n\nTotal: %d\n\n", count);
}
