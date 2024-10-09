#include<stdio.h>

void main ()
{
    int i, j, n1, n2, n3, n4, n5, flag=0, count=0;

    for (i=10000; i<=99999; i++)
    {
        n1 = i/10000;
        n2 = (i%10000)/1000;
        n3 = (i%1000)/100;
        n4 = (i%100)/10;
        n5 = i%10;

        for (j=2; j<=n3/2; j++)
        {
            if (n3%j == 0)
            {
                break;
                flag=1;
            }
        }
        if (n1%2==0 && n2%2!=0 && (flag==0 && n3%2!=0) && n4!=n1 && n4!=n2 && n4!=n3 && n5!=n1 && n5!=n2 && n5!=n3 && n5!=n4)
        {
            printf("%d\t", i);
            count++;
        }
        flag=0;
    }
    printf("\n\nTotal digits: %d.\n", count);
}
