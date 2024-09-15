#include<stdio.h>

int main() {
	FILE *fptr;
	fptr = fopen("Test.txt", "r");
//	print(fptr);
	fclose(fptr);

	return 0;
}
