// Ques : Check if a given character is present in a string or not.

#include<stdio.h>

void checkCharacter(char str[], char ch);

int main() {
    char str[] = "Hello World";
    char ch = 'e';
    checkCharacter(str, ch);

    return 0;
}

void checkCharacter(char str[], char ch) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Character is Present");
            return;
        }
    }
    printf("Character is not Present");
}
