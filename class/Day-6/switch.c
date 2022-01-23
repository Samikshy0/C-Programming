#include <stdio.h>

int main() {
    int a=1;

    switch(a) {
        case 1: 
            printf("a=1\n");
            break;
        case 2:
            printf("a=2\n");
            break;
        default:
            printf("Wrong value\n");
            break;
    }
}
