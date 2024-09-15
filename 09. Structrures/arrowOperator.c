#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct Student s1 = {9426, 9.73, "Somnath"};
    // s1.roll = 9426;
    // s1.cgpa = 9.73;
    // strcpy(s1.name, "Somnath");
    
    struct Student *ptr = &s1;
    printf("Student.Roll with ptr = %d\n", (*ptr).roll);
    printf("Student->Roll = %d\n", ptr->roll);
    printf("Student->CGPA = %f\n", ptr->cgpa);
    printf("Student->Name = %s\n", ptr->name);

    return 0;
}