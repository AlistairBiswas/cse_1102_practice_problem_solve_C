#include<stdio.h>

float areaCircle ();

void main ()
{
    int r;

    printf("Enter radius: ");
    scanf("%d", &r);

    printf("\nArea of Circle: %.2f\n", areaCircle (r));
}

float areaCircle (int n)
{
    float area;

    area = 3.1416 * n * n;

    return area;
}

