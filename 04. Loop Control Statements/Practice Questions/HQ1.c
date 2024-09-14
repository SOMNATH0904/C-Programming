/*
Ques : Print the following pattern:
        *****
        *****
        *****
        *****
*/

#include<Stdio.h>
int main() {
    for(int i = 0; i <= 3; i++) {
        for(int j = 0; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}