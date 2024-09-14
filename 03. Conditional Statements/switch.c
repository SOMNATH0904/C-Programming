#include<stdio.h>
int main() {
    int day;    // 1-Mon, 2-Tue, 3-Wed, 4-Thur, 5-Fri, 6-Sat, 7-Sun
    printf("Enter the Day (1-7) :");
    scanf("%d", &day);
    switch(day) {
    case 1: printf("Monday\n");
            break;
    case 2: printf("Tuesday\n");
            break;
    case 3: printf("Wednesday\n");
            break;
    case 4: printf("Thursday\n");
            break;
    case 5: printf("Friday\n");
            break;
    case 6: printf("Saturday\n");
            break;
    case 7: printf("Sunday\n");
            break;
    default: printf("Invalid Day!\n");
    }    
    return 0;
}