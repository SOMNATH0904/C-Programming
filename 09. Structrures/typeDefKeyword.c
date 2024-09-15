#include<stdio.h>
#include<string.h>

typedef struct ComputerEngineeringStudent {
	int roll;
	float cgpa;
	char name[100];
} coe;

int main() {
	coe c1;
	c1.roll = 9426;
	c1.cgpa = 9.73;
	strcpy(c1.name, "Somnath");

	printf("Student Name is : %s\n", c1.name);
	printf("Student Roll is : %d\n", c1.roll);
	printf("Student CGPA is : %f\n", c1.cgpa);

	return 0;
}
