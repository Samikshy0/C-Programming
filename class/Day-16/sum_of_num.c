#include <stdio.h>

void main() {
    int input=123, rem, sum=0;
    // printf("Enter a num: ");
    // scanf("%d", &input);
    //ex: 123
    
    while(input!=0) {
        rem = input % 10; // 1st: 3 , 2, 1
        sum = sum + rem;  // sum = 3, 5, 6
        input = input / 10; // input = 12, 1, 0
    }
    printf("Sum of digit %d", sum);
}