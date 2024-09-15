// Ques : Ask the user to enter their firstName & print it back to them.

//        Also try this with their fullName.

#include<stdio.h>

int main() {
    // char firstName[50];
    // printf("Enter your name : ");
    // scanf("%s", firstName);
    // printf("Your name is : %s\n", firstName);

    char fullName[100];
    printf("Enter your full name : ");
    fgets(fullName, 100, stdin);
    printf("Your full name is : ");
    puts(fullName);

    return 0;
}