#include <stdio.h>

int main()
{
    int octalNumber[100], i = 1, j, decimalnum, remainder, quotient;

    printf("Enter the decimal number: ");
    scanf("%d", &decimalnum);

    quotient = decimalnum;

    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal number: ", decimalnum);

    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);

    return 0;
}
