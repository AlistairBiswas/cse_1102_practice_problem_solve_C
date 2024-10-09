#include<stdio.h>

void main ()
{
    int n, i, j, sign=-1, flag, temp;
    float sum=1;

    printf("Enter the term: ");
    scanf("%d", &n);

    for (i=1; i<n; i++)
    {
        flag = 21, temp=2;

        sum = sum + (float)temp/(float)flag * sign;
        temp++;
        flag=flag+10;
        sign=sign*-1;
    }
    printf("Sum of the series: %.2f.", sum);
}
