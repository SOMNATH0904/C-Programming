// Ques 1: Sum of first n natural numbers.

#include<stdio.h>

int sum(int n);

// Recursive function
int sum(int n) {
    if(n == 1)  return 1;
    int sumNm1 = sum(n-1);  // Sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

int main() {
    printf("Sum is : %d\n", sum(5));
    return 0;
}