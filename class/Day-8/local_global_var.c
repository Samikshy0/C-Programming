#include <stdio.h>

int a=5;
void print();

int main() {
    printf("Value of a is %d\n",a);
    print();
    int a=10;
    printf("Value of a is %d\n",a);
    a=8;
    print();
}

void print() {
    printf("Value of a inside print fun is %d\n",a);
}
