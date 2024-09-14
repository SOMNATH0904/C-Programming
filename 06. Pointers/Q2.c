// Ques : Swap 2 numbers a & b.

#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main() {
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x = %d, y = %d", x, y);
    return 0;
}

// Call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %d\n", a, b);
}

// Call by reference
void _swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}