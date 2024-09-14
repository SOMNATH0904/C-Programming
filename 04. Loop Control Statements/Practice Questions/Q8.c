// Ques 8: Print all the odd numbers from 5 to 50.

#include<Stdio.h>
int main() {
    for(int i = 5; i <= 50; i++) {
        if(i % 2 != 0)  printf("%d\n", i);
    }
    return 0;
}