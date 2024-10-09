#include<stdio.h>

void main ()
{
    int n1, n2, n3, n4, n5, avg;

    printf("Enter five subjects number:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    avg = n1+n2+n3+n4+n5/5;

    if (avg >= 60)
        printf("\nFirst.\n");

    else if (avg>=50 && avg<60)
        printf("\nSecond.\n");

    else if (avg>=40 && avg<50)
        printf("\nThird.\n");

    else if (avg < 40)
        printf("\nFail.\n");
}
