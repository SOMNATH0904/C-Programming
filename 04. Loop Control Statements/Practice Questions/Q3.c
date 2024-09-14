// Ques 3: Print the Sum of First n Natural Numbers. Also, print them in reverse order.

// #include<Stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum = sum + i;
//     }
//     printf("Sum of first %d natural numbers = %d\n", n, sum);
//     for (int i = n; i >= 1; i--) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// Doing this question using single loop.
#include<Stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1, j = n; i <= n && j >= 1; i++, j--) {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("Sum is %d \n", sum);
    return 0;
}