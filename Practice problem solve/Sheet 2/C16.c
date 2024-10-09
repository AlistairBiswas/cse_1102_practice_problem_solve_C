#include<stdio.h>

int main ()
{
    char str1[30], str2[30];

    printf("Enter a string : ");
    gets(str1);

    strcpy(str2,str1);

    printf("\nstr1 = %s\n", str1);
    printf("\nstr2 = %s\n", str2);

    return 0;
}
