#include<stdio.h>

int main ()
{
    char str[100];

    printf("Enter a string : ");
    gets(str);

    int i=0, upper=0, lower=0;

    while (str[i] != '\0')
    {
        if (str[i]>=65 && str[i]<=90)
        {
            upper++;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            lower++;
        }
        i++;
    }
    printf("\nNumber of Upper-case letters : %d\n", upper);
    printf("\nNumber of Lower-case letters : %d\n", lower);
}
