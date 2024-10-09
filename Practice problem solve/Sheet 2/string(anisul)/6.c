#include<stdio.h>

int main ()
{
    char str1[] = "My name is ";
    char str2[] = "Alistair";

    strcat(str1,str2);

    printf("\n%s\n", str1);
}
