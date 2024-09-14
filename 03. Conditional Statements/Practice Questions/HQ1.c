/*
Ques 5: Write a program to check if a given number is an Armstrong number or not.
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp1 = n, temp2 = n, count = 0, res = 0;
    while (temp1 > 0) {
        temp1 = temp1 / 10;
        count++;
    }
    while (temp2 > 0) {
        int rem = temp2 % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= rem;
        }
        res += power;
        temp2 = temp2 / 10;
    }
    if (n == res) {
        printf("%d is an Armstrong Number\n", n);
    } else {
        printf("%d is not an Armstrong Number\n", n);
    }
    return 0;
}
