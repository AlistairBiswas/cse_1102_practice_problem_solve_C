#include<stdio.h>

void main ()
{
    int n;

    printf("Press 1 for C to F.\nPress 2 for F to C.\n");
    scanf("%d", &n);

    if (n == 1)
    {
        float x, y;

        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &x);

        y = (x-32)*5/9;

        printf("\nTemperature in Celsius scale is %.2f.\n", y);
    }
    else if (n == 2)
    {
        float i, j;

        printf("Enter the temperature in Celsius: ");
        scanf("%f", &i);

        j = (i/5)*9+32;

        printf("\nTemperature in Celsius scale is %.2f.\n", j);
    }
}
