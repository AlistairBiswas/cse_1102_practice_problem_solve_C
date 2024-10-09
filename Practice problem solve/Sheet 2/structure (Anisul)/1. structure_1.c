#include<stdio.h>

// global structure

struct person
{
    int age;
    float salary;
};

int main ()
{
    struct person person1, person2; // local variable

    person1.age = 27;
    person1.salary = 12750.50;

    printf("Person 1 :\n\n");

    printf("age = %d\n", person1.age);
    printf("salary = %.2f\n", person1.salary);

    person2.age = 37;
    person2.salary = 16750.50;

    printf("\nPerson 2 :\n\n");

    printf("age = %d\n", person2.age);
    printf("salary = %.2f\n", person2.salary);

    return 0;
}
