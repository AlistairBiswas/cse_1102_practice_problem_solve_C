#include<stdio.h>
#include<math.h>

void main ()
{
    int a, b, c, d, p, q, r, s;

    printf("Enter the value of a, b, c & d:\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    p = pow(a,3);
    q = pow(b,3);
    r = pow(c,3);
    s = pow(d,3);

    if (p+q+r == s)
        printf("\nSatisfied.\n");
    else
        printf("\nNot Satisfied.\n");
}
