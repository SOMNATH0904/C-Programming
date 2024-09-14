// Ques 3: Write a function to convert Celsius to Farenheit.

#include<stdio.h>

float convertTemp(float celsius);

float convertTemp(float celcius) {
    float far = (celcius * 9/5) + 32;
    return far;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("The Temperature converted is : %f", convertTemp(celsius));
    return 0;
}