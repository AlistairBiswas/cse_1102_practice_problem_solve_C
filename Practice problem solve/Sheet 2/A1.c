#include<stdio.h>

void main ()
{
    int r, m, p;
    char n;

    printf("Student Name: ");
    scanf("%c", &n);

    printf("Student roll number: ");
    scanf("%d", &r);

    printf("Student marks: ");
    scanf("%d", &m);

    printf("Students phone: ");
    scanf("%d", &p);

    printf("\n\n");

    printf("Name: %c.\nRoll no: %d\nMarks: %d\nPhone: %d\n\n", n,r,m,p);
}
