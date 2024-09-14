// Ques 2: Write a Program to calculate area of a circle. (Radius is given)

#include<stdio.h>
int main() {
    float radius;
    printf("Enter the radius :");
    scanf("%f", &radius);
    float area = 3.14 * radius * radius;
    printf("Area of Circle is : %f", area);
    return 0;
}