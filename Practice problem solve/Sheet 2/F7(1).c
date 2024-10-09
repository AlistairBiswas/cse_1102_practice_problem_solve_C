#include<stdio.h>

int swap ();

void main ()
{
    int n1, n2;

    printf("N1 = ");
    scanf("%d", &n1);

    printf("N2 = ");
    scanf("%d", n2);

    swap (n1, n2);
}

int swap (int num1, int num2)
{
    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping...");
    printf("\nN1 = %d \nN2 = %d\n", num1, num2);
}
