// Ques 2: Write a program to check if a number is divisible by 2 or not.
// Ques 3: Write a program to check if a number is odd or even.

/*
For Ques 3: 
EVEN -> 1
ODD -> 0
 */

#include<stdio.h>
int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
    printf("%d", num % 2 == 0);
    return 0;
}