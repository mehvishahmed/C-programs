#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.6;
    strcpy(student1.name, "Mehvish");
    strcpy(student1.major, "Computer Science");

    printf("%s\n", student1.name);

    struct Student student2;
    student2.age = 20;
    student2.gpa = 4.1;
    strcpy(student1.name, "Tim");
    strcpy(student1.major, "Business");

    printf("%f", student2.gpa);

    return 0;
}
