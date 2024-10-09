#include<stdio.h>

int main ()
{
    int cse, phy, chem, math, hum;
    float aggregate, percentage;

    printf("Marks obtained in CSE:");
    scanf("%d", &cse);
    printf("Marks obtained in Physics:");
    scanf("%d", &phy);
    printf("Marks obtained in Chemistry:");
    scanf("%d", &chem);
    printf("Marks obtained in Math:");
    scanf("%d", &math);
    printf("Marks obtained in HUM:");
    scanf("%d", &hum);

    aggregate = (cse+phy+chem+math+hum)/5;
    percentage = (cse+phy+chem+math+hum)*100 / 500;

    printf("Aggregate of marks is %.2f.\n", aggregate);
    printf("Percentage of marks is %.2f.", percentage);

    return 0;
}
