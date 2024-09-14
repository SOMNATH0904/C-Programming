#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the first number :");
    scanf("%d", &a);
    printf("Enter the second number :");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum is : %d", sum);
    return 0;
}