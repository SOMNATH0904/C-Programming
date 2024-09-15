// Ques 3: Create a structure to store complex numbers. (Use Arrow Operator)

#include<stdio.h>

struct complex {
	int real;
	int imag;
};

int main() {
	struct complex number1 = {5, 8};
	struct complex *ptr = &number1;
	printf("The Real part is : %d\n", ptr->real);
	printf("The Imag part is : %d\n", ptr->imag);

	return 0;
} 
