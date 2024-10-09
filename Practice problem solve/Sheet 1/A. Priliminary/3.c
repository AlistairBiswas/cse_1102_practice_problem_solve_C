#include<stdio.h>

int main ()
{
    float a, b, r, area1, area2, perimeter, circumference;

    printf("Enter length and height:\n");
    scanf("%f\n%f", &a, &b);

    printf("Enter the radius:\n");
    scanf("%f", &r);

    area1=a*b;
    area2=3.1416*r*r;
    perimeter=2*(a+b);
    circumference=2*3.1416*r;

    printf("The Area and the Perimeter of the Rectangle is %.2f and %.2f.\n", area1, perimeter);
    printf("The Area and the Circumference of the Circle is %.2f and %.2f.", area2, circumference);

    return 0;
}
