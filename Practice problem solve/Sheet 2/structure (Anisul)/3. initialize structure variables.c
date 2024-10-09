#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main ()
{
    struct person person1 = {27, 25550.25};
    struct person person2 = {22, 27550.25};
    struct person person3 = {29, 225550.25};

    //person2 = person3;

    printf("\nPerson 1 :\n");
    printf("\nage = %d\n", person1.age);
    printf("salary = %.2f\n", person1.salary);

    printf("\nPerson 2 :\n");
    printf("\nage = %d\n", person2.age);
    printf("salary = %.2f\n", person2.salary);

    printf("\nPerson 3 :\n");
    printf("\nage = %d\n", person3.age);
    printf("salary = %.2f\n", person3.salary);

    return 0;
}
