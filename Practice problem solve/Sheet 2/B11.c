#include<stdio.h>

void main ()
{
    int n;
    float it;

    printf("Input the salary: ");
    scanf("%d", &n);

    if (n<7500)
    {
        it = n*.2;
        printf("\nIncome Tax: %.2f\n", it);
    }
    else if (n>=7500 && n<9000)
    {
        it = n*.3;
        printf("\nIncome Tax: %.2f\n", it);
    }
    else if (n>=9000)
    {
        it = n*.4;
        printf("\nIncome Tax: %.2f\n", it);
    }
}
