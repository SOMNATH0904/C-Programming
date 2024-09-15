#include<stdio.h>

void printNumbers(int arr[], int n);

int main() {
    int arr[] = {1, 2, 4, 6, 12, 64};
    printNumbers(arr, 6);
    
    return 0;
}

void printNumbers(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
