// Ques 4: Print the table of a number input by the user.

#include<Stdio.h>
int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);
    printf("The Multiplication table of %d is : \n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, (num*i));
    }
    return 0;
}