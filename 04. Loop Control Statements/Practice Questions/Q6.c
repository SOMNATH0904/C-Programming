// Ques 6: Keep taking numbers as input from user until user enters a number which is multiple of 7.

#include<Stdio.h>
int main() {
    int n;
    do {
        printf("Enter a Number :");
        scanf("%d", &n);
        printf("%d\n", n);
        if(n % 7 == 0) {
            break;
        }
    } while(1);
    return 0;
}