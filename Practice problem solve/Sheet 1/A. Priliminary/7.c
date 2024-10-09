#include<stdio.h>

int main ()
{
    float fahr, cel;

    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &fahr);

    cel = ((fahr - 32)*5)/9;

    printf("The temperature in Centigrade is %.2f.", cel);

    return 0;
}
