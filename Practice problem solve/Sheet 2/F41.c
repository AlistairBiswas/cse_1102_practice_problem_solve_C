#include<stdio.h>

int magicNumber ();

void main ()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    magicNumber (n);
}

int magicNumber (int num)
{
    int temp, rem, sum=0, flag, rem1, rev=0;

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp /= 10;
    }

    flag = sum;

    while (flag != 0)
    {
        rem1 = flag % 10;
        rev = rev*10 + rem1;
        flag /= 10;
    }

    if (sum*rev == num)
    {
        printf("\nMAGIC NUMBER.\n");
    }
    else
    {
        printf("\nNOT A MAGIC NUMBER.\n");
    }
}
