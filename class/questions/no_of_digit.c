#include <stdio.h>

int main() {
    int a = 3456;
    int g = 0;

    while(a!=0) {
        a = a/10;
        g++;
    }
    printf("NO of digits %d", g);
}