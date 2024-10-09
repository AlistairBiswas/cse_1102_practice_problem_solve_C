#include<stdio.h>

int main ()
{
    int year, lycount=0, i, totaldays, ch;

    printf("Enter the year:");
    scanf("%d", &year);

    for(i=1900; i<year; i++)
    {
        if ((i%400 == 0) || (i%4 == 0 && i%100 != 0))
            lycount++;
    }
    totaldays = (year-1900)*365 + lycount;
    ch = totaldays%7;

         if (ch == 0)
             printf("Monday.");

    else if (ch == 1)
        printf("Tuesday.");

    else if (ch == 2)
        printf("Wednesday.");

    else if (ch == 3)
        printf("Thursday.");

    else if (ch == 4)
        printf("Friday.");

    else if (ch == 5)
        printf("Saturday.");

    else if (ch == 6)
        printf("Sunday.");

    return 0;
}
