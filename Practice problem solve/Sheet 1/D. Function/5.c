#include<stdio.h>

int leapYear ();

void main ()
{
    int year;

    printf("Enter a year to check Leap Year or not: ");
    scanf("%d", &year);

    if (leapYear (year) == 1)
        printf("LEAP YEAR");
    else
        printf("NOT A LEAP YEAR");
}
int leapYear (int YEAR)
{
    if (YEAR%400 == 0 || YEAR%4 == 0 && YEAR%100 != 0)
        return 1;

    return 0;
}
