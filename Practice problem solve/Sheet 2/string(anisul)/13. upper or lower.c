#include<stdio.h>

int main ()
{
    char str[] = "alistair biswaw";

    strupr(str);

    printf("\nstr = %s\n", str);

    strlwr(str);

    printf("\nstr = %s\n", str);

    getch();
}
