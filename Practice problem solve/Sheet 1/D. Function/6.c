#include<stdio.h>

int primeFactor ();

void main (int n)
{
    printf("Enter the number: ");
    scanf("%d", &n);

    primeFactor (n);
}
int primeFactor (int number)
{
    int i;

    while (number != 0)
    {
        for (i=2; i<=number; i++)
        {
            if (number%i == 0)
            {
                 printf("%d", &i);
            number = number/i;
            }
  number = number/i;
        }
    }
}
