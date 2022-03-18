#include <stdio.h>

int main() {
    int a = 5667665;
    int b = a;
    int rev=0;

    while(a!=0) {
        int r = a%10;
        rev = rev*10 + r;
        a = a/10;
    }
    
    if(b == rev) {
        printf("%d is a palindrome", b);
    }
    else {
        printf("%d is not a palindrome", b);
    }
}