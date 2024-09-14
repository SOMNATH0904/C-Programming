// Ques 10: Print reverse of the table for a number n.

#include<Stdio.h>
int main() {
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    for(int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", n, i, (n*i));
    }
    return 0;
}