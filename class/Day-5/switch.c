#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    
    switch(a) {
        case 1:
            printf("You entered 1\n");
            printf("Hello, world!");
            break;
        case 2:
            printf("You entered 2\n");
            printf("Hii, world!");
            break;
        case 3:
            printf("You entered 3\n");
            printf("world!");
            break;
        default:
            printf("You entered something else\n");
    }

}
