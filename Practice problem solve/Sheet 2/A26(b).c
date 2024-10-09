#include<stdio.h>

void main ()
{
    int n1, n2, temp;

    printf("Enter two integers:\n");
    scanf("%d%d", &n1, &n2);

    printf("\nBefore swapping:\n");
    printf("N1 = %d.\nN2 = %d.\n", n1, n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("\nAfter swapping:\n");
    printf("N1 = %d.\nN2 = %d.\n", n1, n2);
}
