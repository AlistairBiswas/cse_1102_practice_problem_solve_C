#include<stdio.h>

int main ()
{
    char str[50];

    printf("Enter a string : ");
    gets(str);

    strupr(str);

    printf("\nLower to Upper = %s\n", str);

    strlwr(str);

    printf("\nUpper to Lower = %s\n", str);

    return 0;
}
