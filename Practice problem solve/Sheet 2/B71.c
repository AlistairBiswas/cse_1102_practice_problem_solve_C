#include<stdio.h>

void main ()
{
    int d1, d2, m1, m2, i, days=0, total, temp, flag, y, lp=0;

    printf("Enter the year: ");
    scanf("%d", &y);
    printf("\n");

    if (y%400==0 || y%4==0 && y%100!=0)
    {
        lp = 1;
    }

    printf("Enter 1st date & month:\n");
    scanf("%d%d", &d1, &m1);

    printf("Enter 2nd date & month:\n");
    scanf("%d%d", &d2, &m2);

    if (m1>m2)
    {
        temp=m1;
        m1=m2;
        m2=temp;

        flag=d1;
        d1=d2;
        d2=flag;
    }

    for (i=m1; i<m2; i++)
    {
        if (i==4 || i==6 || i==9 || i==11)
        {
            days = days + 30;
        }
        else if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        {
            days = days + 31;
        }
        else if (i==2 && lp==0)
        {
            days = days + 28;
        }
        else if (i==2 && lp==1)
        {
            days = days + 29;
        }
    }
    total = (days - d1) + d2;

    printf("\nNumber of days: %d\n", total);
}
