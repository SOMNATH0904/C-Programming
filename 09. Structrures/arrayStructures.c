#include<stdio.h>
#include<string.h>

// User-Defined
struct Student {
    int roll;
    float cgpa;
    char name[100];
};


int main() {
    struct Student ece[100];
    ece[0].roll = 4128;
    ece[0].cgpa = 10;
    strcpy(ece[0].name, "Tara");

    printf("Name = %s\n", ece[0].name);
    printf("Roll = %d\n", ece[0].roll);
    printf("CGPA = %f\n", ece[0].cgpa);

    return 0;
}
