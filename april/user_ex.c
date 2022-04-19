#include <stdio.h>

int main() {
    int a;
    printf("Enter a num: ");
    scanf("%d", &a);
    printf("Adding 10 to the num\n");
    printf("Before adding 10 value of a is %d\n", a);
    a = a+10;
    printf("After adding 10 value of a is %d",a);
}