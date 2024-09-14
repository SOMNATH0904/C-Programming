// Ques 5: Keep taking numbers as input from user until user enters an odd number.

#include<Stdio.h>
int main() {
    int n;
    do {
        printf("Enter a Number :");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n % 2 != 0) {
            break;
        }
    } while(1);
    return 0;
}