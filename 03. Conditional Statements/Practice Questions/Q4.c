/*
Ques 4: Write a program to find if a character entered by user is upper case or not.
*/

#include<Stdio.h>
int main() {
    char ch;
    printf("Enter a Character :");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is an Upper Case Character.",ch);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("%c is a Lower Case Character.",ch);
    } else {
        printf("Not a English letter.");
    }
    return 0;
}