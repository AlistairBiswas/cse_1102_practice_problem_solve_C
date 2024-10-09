#include<stdio.h>

int main ()
{
    char str[100], ch;

    printf("Enter a string : ");
    gets(str);

    int i=0, vowel=0, consonant=0, digit=0, symbol=0;

    while (ch=str[i]!='\0')
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if (ch>=65 && ch<=122)
        {
            consonant++;
        }
        else if (ch>=48 && ch<=57)
        {
            digit++;
        }
        else
        {
            symbol++;
        }
        i++;
    }
    printf("\nNumber of vowel : %d\n", vowel);
    printf("\nNumber of consonant : %d\n", consonant);
    printf("\nNumber of digit : %d\n", digit);
    printf("\nNumber of special symbol : %d\n", symbol);

    return 0;
}
