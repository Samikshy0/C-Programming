#include <stdio.h>

int main() {
    int last_digit, user_input;
    printf("Enter a num: ");
    scanf("%d", &user_input); 

    last_digit = user_input % 10;

    while (user_input > 10)
        user_input = user_input / 10;
    
    printf("Sum is %d", user_input+last_digit);

}