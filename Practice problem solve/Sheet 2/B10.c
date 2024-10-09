#include<stdio.h>

void main ()
{
    int n;
    float cost=0;

    printf("Enter the units: ");
    scanf("%d", &n);

    if (n<=100)
    {
        cost = n*0.4;
    }
    else if (n>100 && n<=300)
    {
        cost = 100*0.4 + (n-100)*0.5;
    }
    else if (n>300)
    {
        cost = 100*0.4 + 200*0.5 + (n-300)*0.6;
    }
    cost = cost + 50;

    printf("\nTotal Bill: %.2f.\n", cost);
}
