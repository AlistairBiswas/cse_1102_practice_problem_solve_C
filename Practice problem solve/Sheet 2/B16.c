#include<stdio.h>

void main ()
{
    char ch;
    int n;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    n = ch+26;

    printf("\nConverted Letter: %c\n", n);
}
