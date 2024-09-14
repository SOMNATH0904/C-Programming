// Ques 4: Write functions to calculate area of a square, a circle & a rectangle.

#include<stdio.h>

int areaSqaure(int side) {
    return side * side;
}

int areaCircle(int radius) {
    return 3.14 * radius * radius;
}

int areaRectangle(int l, int b) {
    return l * b;
}

int main() {
    int side, radius, l, b;
    printf("Enter the side of square: ");
    scanf("%d", &side);
    printf("Area of square: %d\n", areaSqaure(side));
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    printf("Area of circle: %d\n", areaCircle(radius));
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    return 0;
}