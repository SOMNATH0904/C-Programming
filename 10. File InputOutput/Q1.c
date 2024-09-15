// Ques 1: Check if a file exists before reading from it.

#include<stdio.h>

int main() {
	FILE *fptr;
	fptr = fopen("NewTest.txt", "r");
	if(fptr == NULL) {
		printf("File doesn't exists.\n");
	} else {
		fclose(fptr);
	}

	return 0;
}
