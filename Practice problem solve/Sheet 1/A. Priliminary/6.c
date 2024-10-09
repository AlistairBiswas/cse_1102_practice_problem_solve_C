#include<stdio.h>

int main ()
{
    int met, cen;
    float dis, feet, inch;

    printf("Enter the distance in km:");
    scanf("%f", &dis);

    met=dis*1000;
    cen=met*100;
    feet=3280.84*dis;
    inch=feet*12;

    printf(" METER = %d.\n CENTEMETER = %d.\n FEET = %.2f.\n INCH = %.2f.", met, cen, feet, inch);


}
