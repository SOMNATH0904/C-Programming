// Ques 5: Write a function to print the nth term of the fibonacci series.

#include<stdio.h>

int fibo(int n);

int fibo(int n) {
    if(n == 0 || n == 1) return n;
    int fibonacci = fibo(n-1) + fibo(n-2);
    return fibonacci;
}

int main() {
    printf("Fibonacci is : %d", fibo(6));
    return 0;
}
