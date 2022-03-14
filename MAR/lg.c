#include <stdio.h>
int a = 9;
int p() {
    int a = 8;
    printf("%d",a);
}

int main() {

    printf("%d",a);
    p();
}