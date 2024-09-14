/*
Ternary Operator: Condition ? doSomething if TRUE: doSomething if FALSE;
*/

#include<stdio.h>
int main() {
    int age;
    printf("Enter age :");
    scanf("%d", &age);
    age >= 18 ? printf("Adult\n") : printf("Not Adult\n");
    return 0;
}