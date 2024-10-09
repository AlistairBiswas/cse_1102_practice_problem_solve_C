#include<stdio.h>

int main ()
{
    char str1[50], str2[50];

    printf("Enter a string : ");
    gets(str1);

    strcpy(str2,str1);

    strrev(str2);

    int d = strcmp(str1,str2);

    if (d == 0)
    {
        printf("\nPalindrome.\n");
    }
    else
    {
        printf("\nNot Palindrome.\n");
    }
    return 0;
}
