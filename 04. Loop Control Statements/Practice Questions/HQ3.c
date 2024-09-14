// Ques : Write a program to print prime numbers in a range.

#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are: \n", start, end);
    for (int i = start; i <= end; i++) {
        if (i <= 1) {
            continue;
        }
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
