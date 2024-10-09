#include<stdio.h>

int main ()
{
    int mark;

    printf("Enter the Marks:");
    scanf("%d", &mark);

    if (mark >= 80 && mark <= 100)
        printf("A+");

    else if (mark >= 75 && mark < 80)
        printf("A");

    else if (mark >= 70 && mark < 75)
        printf("A-");

    else if (mark >= 65 && mark < 70)
        printf("B+");

    else if (mark >= 60 && mark < 65)
        printf("B");

    else if (mark >= 55 && mark < 60)
        printf("B-");

    else if (mark >= 50 && mark < 55)
        printf("C+");

    else if (mark >= 45 && mark < 50)
        printf("C");

    else if (mark >= 40 && mark < 45)
        printf("C-");

    else if ("mark < 40")
        printf("F");

     return 0;
}
