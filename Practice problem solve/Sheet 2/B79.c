#include<stdio.h>

int main ()
{
    int n, i, rem, rev=0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if (temp == rev)
    {
        printf("\nPalindrome.\n");
    }
    else
    {
        printf("\nNot Palindrome.\n");
    }
}

