#include <stdio.h>

int main() {
    int a[2]={4,5};
    int *b,*c;
    b = &a[0];
    c = &a[1];
    printf("address of a0 %u\n", b);
    printf("address of a1 %u\n", c);
}