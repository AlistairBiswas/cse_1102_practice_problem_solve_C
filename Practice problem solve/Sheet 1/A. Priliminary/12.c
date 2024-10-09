#include<stdio.h>

int main ()
{
    int num, sum;

    printf("Enter the 4 digit number:");
    scanf("%d", &num);

    sum = num%10/1 + num/1000;

    printf("Sum is %d.", sum);

    return 0;
}
