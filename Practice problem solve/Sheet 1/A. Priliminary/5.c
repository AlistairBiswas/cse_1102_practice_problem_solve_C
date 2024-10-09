#include<stdio.h>

int main ()
{
    float basic, gross;

    printf("Enter Basic Salary:");
    scanf("%f", &basic);

    gross = basic + basic*0.3 + basic*0.05 + 1000;

    printf("Gross Salary is %.2f", gross);

    return 0;
}
