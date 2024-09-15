// Ques 2: Make a program to read 5 integers from a file.

#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Q2.txt", "r");
    int n;
    for (int i = 0; i < 5; i++) {
        fscanf(fptr, "%d", &n);
        printf("number = %d\n", n);
    }

    fclose(fptr);
    return 0;
}