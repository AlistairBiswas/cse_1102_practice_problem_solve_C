#include<stdio.h>

void main ()
{
    int n, i, dc, count=0;

    printf("Enter the year: ");
    scanf("%d", &n);

    for (i=1900; i<=n; i++)
    {
        if (i%400 == 0 || i%4 == 0 && i%100 != 0)
            count++;
    }
    dc = ((n-1900)*365)+count;

    if (dc%7 == 0)
        printf("\nMonday.\n");

    else if (dc%7 == 1)
        printf("\nTuesday.\n");

    else if (dc%7 == 2)
        printf("\nWednesday.\n");

    else if (dc%7 == 3)
        printf("\nThursday.\n");

    else if (dc%7 == 4)
        printf("\nFriday.\n");

    else if (dc%7 == 5)
        printf("\nSaturday.\n");

    else
        printf("\nSunday.\n");
}
