#include<stdio.h>

int rec ();

void main ()
{
    int l, b;

    printf("Enter Length and Breadth:\n");
    scanf("%d%d", &l, &b);

    printf("\nArea = %d\n", rec (l,b));
}

int rec (int ln, int br)
{
    int area;

    area = ln * br;

    return area;
}
