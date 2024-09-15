#include<stdio.h>
#include<string.h>

struct Student {
	int roll;
	float cgpa;
	char name[100];
};

void printInfo(struct Student s1);

int main() {
	struct Student s1 = {9426, 9.73, "Somnath"};
	printInfo(s1);

	return 0;
}

void printInfo(struct Student s1) {
	printf("----- Student Information -----\n");
	printf("Student.Roll = %d\n", s1.roll);
	printf("Student.Name = %s\n", s1.name);
	printf("Student.CGPA = %f\n", s1.cgpa);
}
