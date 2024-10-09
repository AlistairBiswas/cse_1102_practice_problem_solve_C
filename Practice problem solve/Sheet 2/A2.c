#include<stdio.h>

void main ()
{
    int r, m1, m2, m3, m4, m5, p, avg, total;
    char n;

    printf("Student Name: ");
    scanf("%c", &n);

    printf("Student roll number: ");
    scanf("%d", &r);

    printf("Student marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    printf("Students phone: ");
    scanf("%d", &p);

    total = m1+m2+m3+m4+m5;
    avg = total/5;

    printf("\n\n");

    printf("Name: %c.\nRoll no: %d\nTotal Marks: %d\nAverage Marks: %d\nPhone: %d\n\n", n,r,total,avg,p);
}

