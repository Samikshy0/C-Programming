#include <stdio.h>

int main() {
    int a=6;
    if(a%2 == 0) {
        printf("Even");
    }
    else if(a == 0) {
        printf("neither even nor odd");
    }
    else {
        printf("Odd");
    }
}