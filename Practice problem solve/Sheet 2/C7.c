#include<stdio.h>

int main ()
{
    char str[50], ch;

    printf("Enter a string : ");
    gets(str);

    printf("\nWhat you want to search : ");
    scanf("%c", &ch);

    int i=0, flag=0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            flag=1;
            break;
        }
        i++;
    }
    if (flag == 1)
    {
        printf("\nFound.\n");
    }
    else
    {
        printf("\nNot Found.\n");
    }
    return 0;
}
