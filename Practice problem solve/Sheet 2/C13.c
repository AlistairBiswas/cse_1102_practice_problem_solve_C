#include<stdio.h>

int main ()
{
    char str1[30], str2[30];

    printf("Enter first string : ");
    gets(str1);

    printf("\nEnter second string : ");
    gets(str2);

    strlen(str1);
    strlen(str2);

    if (str1 > str2)
    {
        printf("\nFirst string '%s' is Lengthier.\n", str1);
    }
    else
    {
        printf("\nSecond string '%s' is Lengthier.\n", str2);
    }
    return 0;
}
