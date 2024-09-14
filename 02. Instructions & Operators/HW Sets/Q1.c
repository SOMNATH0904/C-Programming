// Ques 1: Write a program to print the average of 3 numbers.

#include<stdio.h>
int main() {
    int a, b, c;
    float avg;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c)/3;
    printf("Average of 3 numbers is : %f", avg);
    return 0;
}