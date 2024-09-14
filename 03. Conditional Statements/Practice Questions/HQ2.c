/*
Ques 6: Write a program to check if the given number is a natural number.
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is a natural number.\n", n);
    } else {
        printf("%d is not a natural number.\n", n);
    }
    return 0;
}