// Ques : Make a program that inputs user's name & print its length.

#include<stdio.h>

int countLength(char arr[]);

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    printf("Length of your name is : %d\n", countLength(name));

    return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}
