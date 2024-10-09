#include<stdio.h>

void main ()
{
    int n, year, week, days;

    printf("Enter the number of days: ");
    scanf("%d", &n);

    year = n/365;
    week = (n%365)/7;
    days = (n%365)%7;

    printf("\n%d Year, %d Week and %d Days.\n", year, week, days);
}
