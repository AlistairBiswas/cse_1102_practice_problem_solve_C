#include <stdio.h>

struct ME172
{
      char name[50];
      int roll;
      float marks;
      char grade;
};

int main(void)
{
      struct ME172 student;
      student.name = "Mohd. Aminul Hoque";
      student.roll = 58;
      student.marks = 76.5;
      student.grade = 'A';
      printf("Studentís name: %s \n", student.name);
      printf("Studentís roll: %d \n", student.roll);
      printf("Studentís marks: %f \n", student.marks);
      printf("Studentís grade: %c ", student.grade);
}
