#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main ()
{
    struct person person1, person2;

    printf("Enter information for person 1...\n");

    printf("\nEnter age : ");
    scanf("%d", &person1.age);

    printf("\nEnter salary : ");
    scanf("%f", &person1.salary);

    printf("\nEnter information for person 2...\n");

    printf("\nEnter age : ");
    scanf("%d", &person2.age);

    printf("\nEnter salary : ");
    scanf("%f", &person2.salary);

    printf("\nPerson 1 :\n");
    printf("\nage = %d\n", person1.age);
    printf("salary = %.2f\n", person1.salary);

    printf("\nPerson 2 :\n");
    printf("\nage = %d\n", person2.age);
    printf("salary = %.2f\n", person2.salary);

    return 0;
}
