// Ques 9: Print the factorial of a number n.

#include<Stdio.h>
int main() {
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int fact = 1;
    for(int i=1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial of %d is : %d", n, fact);
    return 0;
}