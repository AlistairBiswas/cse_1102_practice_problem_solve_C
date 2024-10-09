#include<stdio.h>

void main ()
{
    int x, y;
    float area;

    printf("Enter X & Y:\n");
    scanf("%d%d", &x,&y);

    area = 0.5*x*y;

    printf("\nAREA = %.2f.\n", area);
}
