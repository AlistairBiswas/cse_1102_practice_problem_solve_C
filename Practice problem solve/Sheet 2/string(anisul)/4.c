#include<stdio.h>

int main ()
{
    char s1[] = "Alistair Biswas";

    int i=0, count=0;

    while(s1[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nLength = %d\n", count);
}
