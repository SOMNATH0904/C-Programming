// Ques : Write a function to reverse an array.

#include<stdio.h>

void reverse(int arr[], int n);
void printArr(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array Size : %d\n", n);
    printf("Original Array : ");
    printArr(arr, n);
    reverse(arr, n);
    printf("Reversed Array : ");
    printArr(arr, n);

    return 0;
}

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n) {
    for(int i = 0; i < n/2; i++) {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}