#include<stdio.h>

int main ()
{
    int num, a, b, c, d, e;

    printf("Enter the 5 digt number:");
    scanf("%d", &num);

    a=num%10/1;
    b=(num%100)/10;
    c=(num%1000)/100;
    d=(num%10000)/1000;
    e=num/10000;

    printf("reverse number is %d%d%d%d%d.", a,b,c,d,e);

    return 0;
}
