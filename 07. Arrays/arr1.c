#include<stdio.h>

int main() {
    int marks[3];

    printf("Enter Phy marks :");
    scanf("%d", &marks[0]);

    printf("Enter Chem marks :");
    scanf("%d", &marks[1]);

    printf("Enter Maths marks :");
    scanf("%d", &marks[2]);

    printf("Phy = %d, Chem = %d, Maths = %d", marks[0], marks[1], marks[2]);

    return 0;
}