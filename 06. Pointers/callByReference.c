#include<stdio.h>

void _sqaure(int *n);

int main() {
    int number = 4;
    _square(&number);
    printf("Number : %d\n", number);
    return 0;
}

void _square(int *n) {
    *n = (*n) * (*n);
    printf("Square : %d\n", *n);
}