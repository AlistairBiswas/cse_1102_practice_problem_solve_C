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

    person2 = person3;

    if (person3.age == person2.age && person3.salary == person2.salary)
    {
        printf("Person 3 is equals to Person 2.\n");
    }
    else
    {
        printf("Person 3 is not equals to Person 2.\n");
    }
    return 0;
}
