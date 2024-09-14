#include<stdio.h>
int main() {

    int i = 1;

    // Post-Increment -> Use, then Increase
    // printf("%d\n", i++);
    // printf("%d\n", i);

    // Pre-Increment -> Increase, then Use
    printf("%d\n", ++i);
    printf("%d\n", i);

    // Post-Decrement -> Use, then decrease
    // printf("%d\n", i--);
    // printf("%d\n", i);

    // Pre-Decrement -> Decrease, then Use
    printf("%d\n", --i);
    printf("%d\n", i);

    return 0;
}