#include<stdio.h>

int main ()
{
    int i;

    for (i=2; i<=256; i*=2)
    {
        printf("%d,\t", i);
    }
    return 0;
}
