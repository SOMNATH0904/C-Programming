// Ques 7: Print all numbers from 1 to 10 except for 6.

#include<Stdio.h>
int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 6)  continue;
        printf("%d\n", i);
    }
    return 0;
}