#include<stdio.h>

int ascii ();

void main ()
{
    char ch;

    printf("Enter an Character: ");
    scanf("%c", ch);

    ascii (ch);
}

void ascii (char c)
{
    printf("\nASCII = %d", c);
}
