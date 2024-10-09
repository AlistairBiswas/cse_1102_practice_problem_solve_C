#include<stdio.h>

void main ()
{
    int i, j, k, i2, j2, k2, count=0;

    for (i=100; i<=1000; i++)
    {
        i2 = i*i;
        for (j=100; j<=1000; j++)
        {
            j2 = j*j;
            for (k=100; k<=1000; k++)
            {
                k2 = k*k;
            }
        }
        if (i2+j2 == k2)
        {
            printf("%d, %d, %d\n", i, j, k);
            count++;
        }
    }
    printf("\n\nTotal: %d", count);
}
