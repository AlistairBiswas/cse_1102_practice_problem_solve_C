#include <stdio.h>
int main ()
{
    int a, b, a1, b1;

    printf("A=");
    scanf("%d", &a);
    printf("B=");
    scanf("%d", &b);

    a1 = b;
    b1 = a;

    printf("\nA=%d\n", a1);
    printf("B=%d", b1);

    return 0;
}
