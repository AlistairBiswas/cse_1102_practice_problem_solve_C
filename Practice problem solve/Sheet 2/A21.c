#include<stdio.h>

void main ()
{
    int n1, n2, n3;

    printf("Enter three numbers:\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
        printf("\n%d is greatest.\n", n1);
    else if (n2>n1 && n2>n3)
        printf("\n%d is greatest.\n", n2);
    else
        printf("\n%d is greatest.\n", n3);
}
