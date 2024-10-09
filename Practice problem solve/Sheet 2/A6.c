#include<stdio.h>

void main ()
{
    int a, b, area, perimeter;

    printf("Enter the length and breadth:\n");
    scanf("%d %d", &a, &b);

    area = a*b;
    perimeter = 2*(a+b);

    printf("\nAREA = %d\nPERIMETER = %d\n", area, perimeter);
}
