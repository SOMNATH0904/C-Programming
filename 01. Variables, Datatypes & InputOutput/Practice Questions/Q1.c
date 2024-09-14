// Ques 1: Write a program to calculate area of a square. (side is given)

#include<stdio.h>
int main() {
    int side;
    printf("Enter the Side of Square : ");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of Square is : %d", area);
    return 0;
}