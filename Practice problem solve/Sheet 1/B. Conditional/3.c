#include<stdio.h>

int main ()
{
    int bp, sp;

    printf("Buying price:");
    scanf("%d", &bp);

    printf("Selling price:");
    scanf("%d", &sp);

    if (sp>bp)
        printf("PROFIT = %d taka.", sp-bp);

    else
        printf("LOSS = %d taka.", bp-sp);

    return 0;
}
