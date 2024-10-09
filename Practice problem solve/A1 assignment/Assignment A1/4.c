#include<stdio.h>

int main ()
{
    char sl, cl;

    printf("Enter the small letter: ");
    scanf("%c", &sl);

    cl = sl - 32;

    printf("It's capital letter is %c.", cl);

    return 0;
}
