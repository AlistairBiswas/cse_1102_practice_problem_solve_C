#include<stdio.h>

void main ()
{
    int r;
    float area, cf;

    printf("Enter the radius: ");
    scanf("%d", &r);

    area = 3.1416*r*r;
    cf = 2*3.1416*r;

    printf("\nArea = %.2f.\nCircumference = %.2f.\n", area, cf);
}
