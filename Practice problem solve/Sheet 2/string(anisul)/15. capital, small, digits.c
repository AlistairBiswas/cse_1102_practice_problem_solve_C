#include<stdio.h>

int main ()
{
    char str[50];
    int i=0, capital=0, small=0, digit=0;

    printf("Enter a string : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            capital++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            small++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            digit++;
        }
        i++;
    }
    printf("\nNumber of capital letter : %d", capital);
    printf("\nNumber of small letter : %d", small);
    printf("\nNumber of digit : %d", digit);

    getch();
}
