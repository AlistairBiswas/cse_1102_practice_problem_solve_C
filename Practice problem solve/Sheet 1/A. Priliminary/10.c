#include<stdio.h>

int main ()
{
    int num, sum;

    printf("Enter the 5 digit number:");
    scanf("%d", &num);

    sum = num%10/1 + (num%100)/10 + (num%1000)/100 + (num%10000)/1000 + num/10000;

    printf("Sum is %d.", sum);

    return 0;
}
