#include<stdio.h>

int main() {
    int aadhar[5];

    // Input
    int *ptr = &aadhar[0];
    for(int i = 0; i < 5; i++) {
        printf("%d Index : ", i);
        scanf("%d", (ptr+i));
        // scanf("%d", &aadhar[i]);
    }

    // Output
    for(int i = 0; i < 5; i++) {
        printf("%d Index = %d\n", i, *(ptr+i));
        // printf("%d Index : %d\n", i, aadhar[i]);
    }

    return 0;
}