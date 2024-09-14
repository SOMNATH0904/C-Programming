/*
Ques 3: Will this code: a. give error 
                        b. print "x is equal to 1"
                        c. print "x is not equal to 1"
*/

#include<Stdio.h>
int main() {
    int x = 2;
    if(x=4) {
        printf("x is equal to 1\n");
        printf("%d", x);
    } else {
        printf("x is not equal to 1");
    }
    return 0;
}

// Output: b. x is equal to 1