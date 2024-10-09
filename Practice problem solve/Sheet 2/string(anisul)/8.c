#include<stdio.h>

int main ()
{
    char str1[] = "Alistair Biswas";
    char str2[] = "Alistair";

    int d = strcmp(str1,str2);

    if (d==0)
    {
        printf("\nEqual.\n");
    }
    else
    {
        printf("\nNot Equal.\n");
    }
}
