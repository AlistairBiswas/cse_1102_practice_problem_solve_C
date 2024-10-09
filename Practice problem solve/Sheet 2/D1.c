#include<stdio.h>

int main ()
{
    int n, i;

    printf("Enter the number of students : ");
    scanf("%d", &n);

    int stu[n];

    printf("\nEnter their numbers :\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", &stu[i]);
    }

    printf("\nDisplay their numbers :\n\n");

    for (i=0; i<n; i++)
    {
        printf("%d\t", stu[i]);
    }
    printf("\n");

    return 0;
}
