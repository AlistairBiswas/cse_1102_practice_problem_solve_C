#include<stdio.h>

int main ()
{
    int i, sign=1;

    for (i=1; i<=40; i+=3)
    {
        printf("%d,\t", i*sign);
        sign=sign*-1;
    }
    return 0;
}
