#include<stdio.h>

int main ()
{
    int n, r, s1=0, s2=0, n_even = 0, n_odd = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        r=n%10;
        if(r%2 == 0)
        {
            n_even ++;
            s1 = s1+r;
        }
        else
        {
            n_odd ++;
            s2 = s2+r;
        }
        n= n/10;
    }
    printf("Odd digits : %d \nEven digits : %d\n", n_odd, n_even);
    printf("Sum of even is %d  and sum of odd is %d", s1, s2);

    return 0;
}
