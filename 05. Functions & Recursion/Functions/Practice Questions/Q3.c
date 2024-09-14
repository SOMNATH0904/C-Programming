// Ques 3: Use library functions to calculate the square of a number given by the user.

#include<stdio.h>
#include<math.h>

float square(float n) {
    return pow(n, 2);
}

int main() {
    float n;
    printf("Enter a number :");
    scanf("%f", &n);
    printf("Square of the number is : %f\n", square(n));
}