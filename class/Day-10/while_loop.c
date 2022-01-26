#include <stdio.h>

int main() {
    int repeat = 5;

    // while(codition) {
    //      body
    //}

    while(repeat > 0) {
        printf("Hello %d\n", repeat);
        repeat = repeat - 1;
    }
    printf("Done\n");
}
