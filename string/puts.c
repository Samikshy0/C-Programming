#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    //scanf("%s", name);
    gets(name);
    puts(name);
    printf("Hello, %s!\n", name);
}