#include<stdio.h>

void main ()
{
    int bp, sp;

    printf("Enter buying price: ");
    scanf("%d", &bp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > bp)
    {
        printf("\nPROFIT: %d.\n", sp-bp);
    }
    else
    {
        printf("\nLOSS: %d\n", bp-sp);
    }
}
