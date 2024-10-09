#include<stdio.h>
#include<math.h>

int main ()
{
    int i;
    printf("Enter the number:");
    scanf("%d", &i);

    printf("Square Root value is %.2f\n", sqrt (i));
    printf("Square value is %.2f\n", pow (i, 2));
    printf("Logarithmic value is %.2f\n", log (i));
    printf("Tangent value is %.2f\n", tan (i));

    return 0;
}
