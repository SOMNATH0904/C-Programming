#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct Student s1 = {9426, 9.73, "Somnath"};
    printf("Student Roll = %d\n", s1.roll);

    struct Student *ptr = &s1;
    printf("Student Roll = %d\n", (*ptr).roll);

    return 0;
}
