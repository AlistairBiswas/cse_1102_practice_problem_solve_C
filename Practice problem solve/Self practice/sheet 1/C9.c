#include<stdio.h>

int main ()
{
    int n1, n2, i, j, temp, digit=0, flag, p=1, sum=0, rem;

    printf("Enter the number range :\n");
    scanf("%d %d", &n1, &n2);

    for (i=n1; i<=n2; i++)
    {
        temp = i;
        flag = i;

        while (temp != 0)
        {
            digit++;
            temp /= 10;
        }

        while (flag != 0)
        {
            rem = flag%10;

            for (j=1; j<=digit; j++)
            {
                p *= rem;
            }
            sum = sum + p;
            flag /= 10;
            p = 1;
        }

        if (sum == i)
        {
            printf("\n%d", i);
        }
        sum = 0;
        digit = 0;
    }
    printf("\n");

    return 0;
}
