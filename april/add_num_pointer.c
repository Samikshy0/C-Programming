#include <stdio.h>

int cv(int p) {
    p = p + 10;
}

int main() {
    int a=6, b=7;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    printf("calling the function cv\n");
    cv(a);
    printf("Value of a: %d\n", a);

}