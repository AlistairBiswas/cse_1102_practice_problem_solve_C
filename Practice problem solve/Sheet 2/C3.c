#include<stdio.h>

int main ()
{
    char str[50];

    printf("Enter a string : ");
    gets(str);

    int i=0, word=0, character=0;

    while (str[i]!='\0')
    {
        character++;

        if (str[i] == ' ')
        {
           word++;
           character--;
        }
        i++;
    }
    word++;

    printf("\nNumber of words : %d\n", word);
    printf("\nNumber of characters : %d\n", character);
}
