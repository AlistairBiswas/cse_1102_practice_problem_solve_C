#include<stdio.h>

void main ()
{
    int n, r;
    float area, circumference;

    printf("Enter your choice: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("\nEnter the radius: ");
        scanf("%d", &r);

        area = 3.1416*r*r;

        printf("\nAREA = %.2f.\n", area);
    }
    else
    {
        printf("\nEnter the radius: ");
        scanf("%d", &r);

        circumference = 2*3.1416*r;

        printf("\nAREA = %.2f.\n", circumference);
    }
}
