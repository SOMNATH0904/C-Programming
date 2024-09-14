// Ques 2: Print the numbers from 0 to n, ifn is given by user using While Loop.

#include<Stdio.h>
int main() {
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int i = 0;
    while(i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}