// Ques : Write a function to count the number of odd numbers in an array.

#include<stdio.h>

void countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 4, 5, 2, 7, 3, 12, 98, 64};
    int n = 9;
    countOdd(arr, n);

    return 0;
}

void countOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            count++;
        }
    }
    printf("Number of Odd numbers in an array : %d\n", count);
}