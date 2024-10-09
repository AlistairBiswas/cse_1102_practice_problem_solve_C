#include<stdio.h>

int main ()
{
    char string[30];

    printf("Enter a string : ");
    gets(string);

    strrev(string);

    printf("\nReversed String : %s\n", string);

    return 0;
}
