#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

void display (struct person p)
{
    printf("\nName : %s\n", p.name);
    printf("Age : %d\n", p.age);
    printf("Salary : %.2f\n", p.salary);
}

int main ()
{
    struct person person1, person2;

    strcpy(person1.name,"Alistair Biswas");
    person1.age = 21;
    person1.salary = 127500.50;

    display(person1);

    strcpy(person2.name,"Anisul Islam");
    person2.age = 25;
    person2.salary = 27500.50;

    display(person2);

    getch ();
}
