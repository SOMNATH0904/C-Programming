// Ques 4: Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

#include<stdio.h>

int calcPercentage(int sci, int math, int sanskrit);

int main() {
    int sci = 98, math = 95, sanskrit = 87;
    printf("Percentage is : %d\n", calcPercentage(sci, math, sanskrit));
    return 0;
}

int calcPercentage(int sci, int math, int sanskrit) {
    return (sci + math + sanskrit) / 3;
}