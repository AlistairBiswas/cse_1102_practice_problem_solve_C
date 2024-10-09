#include<stdio.h>

int main ()
{
    int year, lyCount = 0, i, totalDays, ch;
    printf("Enter reference year:");
    scanf("%d", &year);

    for (i=1900; i<year; i++)
    {
        if((i%4 == 0 && i%100 != 0) || (i%400 == 0))
            lyCount++;
    }
    totalDays = (year - 1900)*365 + lyCount;
    ch = totalDays%7;

    if(ch == 0)
        printf("Monday");
    else if(ch == 1)
        printf("Tuesday");
    else if(ch == 2)
        printf("Wednesday");
    else if(ch == 3)
        printf("Thursday");
    else if(ch == 4)
        printf("Friday");
    else if(ch == 5)
        printf("Saturday");
    else if(ch == 6)
        printf("Sunday");y

    return 0;
}
