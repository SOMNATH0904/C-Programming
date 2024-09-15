#include<stdio.h>
#include<string.h>

// User-Defined
struct Student {
    char name[100];
    int roll;
    float cgpa;
};

int main() {
    struct Student s1;
    s1.roll = 9426;
    s1.cgpa = 9.73;
    // s1.name = "Somnath"; -> Wrong syntax
    strcpy(s1.name, "Somnath");

    printf("Student Name = %s\n", s1.name);
    printf("Student Roll = %d\n", s1.roll);
    printf("Student CGPA = %f\n", s1.cgpa);

    return 0;
}