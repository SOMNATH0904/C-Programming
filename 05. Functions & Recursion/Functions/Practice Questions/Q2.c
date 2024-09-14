// Ques 2: Write a function that prints 'NAMASTE' if user is Indian and 'BONJOUR' if the user is French.

#include<stdio.h>

int funcGreet(char user) {
    if(user == 'E') printf("Namaste\n");
    else if(user == 'F') printf("Bonjour\n");
    else printf("Not Valid Character!!!"); 
    return 0;
}

int main() {
    char ch;
    printf("Enter a Character (E-English & F-French) :");
    scanf("%c", &ch);
    funcGreet(ch);
    return 0;
}