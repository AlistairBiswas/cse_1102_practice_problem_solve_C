#include<stdio.h>

void main ()
{
    int n, yard, feet, inch;

    printf("Enter the number of INCH: ");
    scanf("%d", &n);

    yard = n/36;
    feet = (n/12)-(yard*3);
    inch = n%12;

    printf("\n%d YARD, %d FEET and %d INCH.\n", yard, feet, inch);
}
