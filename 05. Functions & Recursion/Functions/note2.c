#include<stdio.h>

void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);
    return 0;
}

void calculatePrice(float value) {
    value += (0.18 * value);
    printf("Final price is : %f\n", value);
}