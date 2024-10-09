#include<stdio.h>

void main ()
{
    int n, p;

    printf("Enter two Numbers:\n");
    scanf("%d%d", &n, &p);

    if (n>p)
        printf("\n%d is Greatest.\n", n);
    else
        printf("\n%d is Greatest.\n", p);

}
