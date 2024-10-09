#include<stdio.h>

void main ()
{
    int n, hra, da;

    printf("Input the Salary: ");
    scanf("%d", &n);

    if (n>=5000 && n<=10000)
    {
        hra = n*0.10;
        da = n*0.05;

        printf("\nHRA = %d.\nDA = %d.\n", hra, da);
    }
    else if (n>10000 && n<=15000)
    {
        hra = n*0.15;
        da = n*0.08;

        printf("\nHRA = %d.\nDA = %d.\n", hra, da);
    }
}
